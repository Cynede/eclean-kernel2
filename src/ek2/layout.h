/* eclean-kernel2
 * (c) 2016 Michał Górny
 * 2-clause BSD license
 */

#pragma once

#ifndef EK2_LAYOUT_H
#define EK2_LAYOUT_H 1

#include "ek2/fileset.h"

#include <vector>

// System layout, defines where to look for kernels and how to handle
// them
class Layout
{
public:
	// find kernels and store them internally
	// may output to stderr
	// returns true on success, false if fatal error occured
	virtual bool find_kernels(const std::string& boot_path,
			const std::string& module_path) = 0;

	// get final kernel list
	virtual std::vector<FileSet>& kernels() = 0;
	virtual const std::vector<FileSet>& kernels() const = 0;
};

#endif /*EK2_LAYOUT_H*/

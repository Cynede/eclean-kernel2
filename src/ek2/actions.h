/* eclean-kernel2
 * (c) 2016 Michał Górny
 * 2-clause BSD license
 */

#pragma once

#ifndef EK2_ACTIONS_H
#define EK2_ACTIONS_H 1

#include "ek2/layout.h"

void list_kernels(const Layout& l);
void keep_newest(Layout& l, int keep_num, bool pretend);

#endif /*EK2_ACTIONS_H*/

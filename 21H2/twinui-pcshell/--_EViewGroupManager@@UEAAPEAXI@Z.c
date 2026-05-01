/*
 * XREFs of ??_EViewGroupManager@@UEAAPEAXI@Z @ 0x1802FB240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewGroupManager@@UEAA@XZ @ 0x1802FB19C (--1ViewGroupManager@@UEAA@XZ.c)
 */

ViewGroupManager *__fastcall ViewGroupManager::`vector deleting destructor'(ViewGroupManager *this, char a2)
{
  ViewGroupManager::~ViewGroupManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}

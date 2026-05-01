/*
 * XREFs of ??_GViewGroup@@EEAAPEAXI@Z @ 0x180305CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewGroup@@EEAA@XZ @ 0x180305A98 (--1ViewGroup@@EEAA@XZ.c)
 */

ViewGroup *__fastcall ViewGroup::`scalar deleting destructor'(ViewGroup *this, char a2)
{
  ViewGroup::~ViewGroup(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}

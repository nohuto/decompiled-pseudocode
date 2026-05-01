/*
 * XREFs of ??_GViewEventDispatcher@@EEAAPEAXI@Z @ 0x18031178C
 * Callers:
 *     ??_EViewEventDispatcher@@GHI@EAAPEAXI@Z @ 0x180168280 (--_EViewEventDispatcher@@GHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x180310420 (--1ViewEventDispatcher@@EEAA@XZ.c)
 */

ViewEventDispatcher *__fastcall ViewEventDispatcher::`scalar deleting destructor'(ViewEventDispatcher *this, char a2)
{
  ViewEventDispatcher::~ViewEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x250);
  return this;
}

/*
 * XREFs of ??_GTabTipAdapter@KeyboardHosting@@UEAAPEAXI@Z @ 0x1803CABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x1803CA4E0 (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall KeyboardHosting::TabTipAdapter::`scalar deleting destructor'(
        KeyboardHosting::TabTipAdapter *this,
        char a2)
{
  KeyboardHosting::TabTipAdapter::~TabTipAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x218);
  return this;
}

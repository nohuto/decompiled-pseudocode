/*
 * XREFs of ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x18008C060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x18008BF4C (--1CMagnifierControl@@EEAA@XZ.c)
 */

CMagnifierControl *__fastcall CMagnifierControl::`vector deleting destructor'(CMagnifierControl *this, char a2)
{
  CMagnifierControl::~CMagnifierControl(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CMagnifierControl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

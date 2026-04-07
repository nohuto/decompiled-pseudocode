/*
 * XREFs of ??_ECGlobalLightSet@@EEAAPEAXI@Z @ 0x1800BB390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800BB2AC (--1CGlobalLightSet@@EEAA@XZ.c)
 */

CGlobalLightSet *__fastcall CGlobalLightSet::`vector deleting destructor'(CGlobalLightSet *this, char a2)
{
  CGlobalLightSet::~CGlobalLightSet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CGlobalLightSet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

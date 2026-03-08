/*
 * XREFs of HalpApicTimerStop @ 0x1402DD1D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x1402DD200 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpApicTimerStop()
{
  HalpApicTimerInitialize();
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(896LL, 0LL);
}

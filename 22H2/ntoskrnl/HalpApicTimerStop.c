/*
 * XREFs of HalpApicTimerStop @ 0x140322560
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x140322590 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpApicTimerStop()
{
  HalpApicTimerInitialize();
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(896LL, 0LL);
}

/*
 * XREFs of ExAllocateTimer @ 0x140203BE0
 * Callers:
 *     WdtpAllocateTimer @ 0x14068A6E0 (WdtpAllocateTimer.c)
 *     CreateTlgAggregateSession @ 0x14080F758 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x1408319B4 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409E9D28 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     ExpInitSystemPhase1 @ 0x140B3F0B8 (ExpInitSystemPhase1.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x140203C10 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}

/*
 * XREFs of ExSetTimer @ 0x1402042A0
 * Callers:
 *     WdtpArmTimer @ 0x140203F20 (WdtpArmTimer.c)
 *     RtlpHpScheduleCompaction @ 0x14030A7E4 (RtlpHpScheduleCompaction.c)
 *     EnableFlushTimer @ 0x1403C12C0 (EnableFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x140614DD8 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     WdipTimeoutCheckRoutine @ 0x14078BFD0 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409E9D28 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409E9FE0 (SendCaptureStateNotificationsWorker.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x140204364 (ExpCheckForFreedEnhancedTimer.c)
 *     ExpTimerSetParametersAreValid @ 0x1402046A4 (ExpTimerSetParametersAreValid.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, signed __int64 a2, signed __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR v11[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  if ( a3 < 0 )
  {
    v11[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)v11, 0LL);
  }
  if ( a4 && !(unsigned __int8)ExpTimerSetParametersAreValid(a4, 0LL, 4LL) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, BugCheckParameter4);
  ExpCheckForFreedEnhancedTimer(BugCheckParameter1);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}

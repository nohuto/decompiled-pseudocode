/*
 * XREFs of ExSetTimer @ 0x14031DC10
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x140316724 (RtlpHpScheduleCompaction.c)
 *     WdtpArmTimer @ 0x14031D894 (WdtpArmTimer.c)
 *     EnableFlushTimer @ 0x1403C6B80 (EnableFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404195A0 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140419640 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x140617294 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     WdipTimeoutCheckRoutine @ 0x1407DADC0 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECBC8 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ECE80 (SendCaptureStateNotificationsWorker.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x14031DCD4 (ExpCheckForFreedEnhancedTimer.c)
 *     ExpTimerSetParametersAreValid @ 0x14031E014 (ExpTimerSetParametersAreValid.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
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

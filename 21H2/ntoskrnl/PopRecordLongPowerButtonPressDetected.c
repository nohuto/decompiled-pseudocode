/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x1407905E4
 * Callers:
 *     PoClearTransitionMarker @ 0x1407903D4 (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1408EADF8 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7A00 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x140790690 (RtlSetSystemBootStatus.c)
 */

void __fastcall PopRecordLongPowerButtonPressDetected(char a1)
{
  RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPhysicalPowerButtonInfo) ^= (HIBYTE(PopBsdPhysicalPowerButtonInfo) ^ (4 * a1)) & 4;
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(14LL, &PopBsdPhysicalPowerButtonInfo, 48LL);
  RtlSetSystemBootStatus(16LL, &PopBsdPowerTransitionExtension, 32LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}

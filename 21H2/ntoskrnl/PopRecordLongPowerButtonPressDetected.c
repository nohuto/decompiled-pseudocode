/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x140791B94
 * Callers:
 *     PoClearTransitionMarker @ 0x140791984 (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1408EAF58 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7B50 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x140791C40 (RtlSetSystemBootStatus.c)
 */

void __fastcall PopRecordLongPowerButtonPressDetected(char a1)
{
  RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPhysicalPowerButtonInfo) ^= (HIBYTE(PopBsdPhysicalPowerButtonInfo) ^ (4 * a1)) & 4;
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(RtlBsdItemPowerButtonPressInfo, &PopBsdPhysicalPowerButtonInfo, 0x30u, 0LL);
  RtlSetSystemBootStatus(RtlBsdPowerTransitionExtension, &PopBsdPowerTransitionExtension, 0x20u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}

/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x14085A9C0
 * Callers:
 *     PoClearTransitionMarker @ 0x14085A768 (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x14098D8D8 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x1403031D8 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x14073AEB0 (RtlSetSystemBootStatus.c)
 */

void __fastcall PopRecordLongPowerButtonPressDetected(char a1, char a2)
{
  if ( a2 )
    RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPhysicalPowerButtonInfo) ^= (HIBYTE(PopBsdPhysicalPowerButtonInfo) ^ (4 * a1)) & 4;
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(14, (__int64)&PopBsdPhysicalPowerButtonInfo, 64);
  RtlSetSystemBootStatus(16, (__int64)&PopBsdPowerTransitionExtension, 32);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}

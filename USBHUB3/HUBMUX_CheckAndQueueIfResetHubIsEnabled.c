/*
 * XREFs of HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C0011000
 * Callers:
 *     HUBPSM20_IssuingHubResetFromDisconnected @ 0x1C0012110 (HUBPSM20_IssuingHubResetFromDisconnected.c)
 *     HUBPSM20_IssuingHubResetWithTimer @ 0x1C0012140 (HUBPSM20_IssuingHubResetWithTimer.c)
 *     HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x1C0012780 (HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C00129E0 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x1C0012A60 (HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart.c)
 *     HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect @ 0x1C0012BB0 (HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C0013360 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent @ 0x1C0013650 (HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent.c)
 *     HUBFDO_IoctlResetHub @ 0x1C007BE54 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

char __fastcall HUBMUX_CheckAndQueueIfResetHubIsEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  char v3; // di
  KIRQL v4; // dl

  v1 = (KSPIN_LOCK *)(a1 + 2320);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  if ( (*(_DWORD *)(a1 + 2352) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2352), 0xFFFFFFFB);
    v3 = 1;
  }
  KeReleaseSpinLock(v1, v4);
  if ( v3 )
    HUBSM_AddEvent(a1 + 1264, 2047);
  return v3;
}

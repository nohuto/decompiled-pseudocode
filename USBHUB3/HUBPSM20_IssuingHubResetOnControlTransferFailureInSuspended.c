/*
 * XREFs of HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C00129E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C0010D5C (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C0011000 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 */

__int64 __fastcall HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 960);
  HUBMUX_ReEnableInterruptTransfer(v1);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*(_QWORD *)v1);
  return 1000LL;
}

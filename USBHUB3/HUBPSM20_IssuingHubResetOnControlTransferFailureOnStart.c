/*
 * XREFs of HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x1C0012A60
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_AcquirePortPowerReference @ 0x1C0010B48 (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C0011000 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 */

__int64 __fastcall HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 960);
  HUBMUX_AcquirePortPowerReference(v1);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*(_QWORD *)v1);
  return 1000LL;
}

/*
 * XREFs of RaidAdapterDevicePowerUpSrbComplete @ 0x1C00127F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001281C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 */

__int64 __fastcall RaidAdapterDevicePowerUpSrbComplete(__int64 a1)
{
  __int64 v1; // rdx
  IRP *v2; // rcx

  v1 = *(_QWORD *)(a1 + 216);
  v2 = *(IRP **)(a1 + 160);
  *(_BYTE *)(v1 + 4704) = 0;
  return RaidAdapterPowerUpDeviceCompletionLastStep(v2);
}

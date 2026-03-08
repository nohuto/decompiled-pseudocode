/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14096BFB4
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x140967F1C (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140968304 (PipDmgEnforceEnumerationPolicy.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140968A40 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}

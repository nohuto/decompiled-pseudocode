/*
 * XREFs of StorPortGetVirtualAddressVrfy @ 0x1C007F3F0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetVirtualAddress @ 0x1C0039960 (StorPortGetVirtualAddress.c)
 */

PVOID __fastcall StorPortGetVirtualAddressVrfy(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return StorPortGetVirtualAddress(a1, a2);
}

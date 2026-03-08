/*
 * XREFs of PnpSerializeBoot @ 0x1403AD6E0
 * Callers:
 *     NtSerializeBoot @ 0x14085DCB0 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140B5E3E0 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}

/*
 * XREFs of PnpSerializeBoot @ 0x1403CE390
 * Callers:
 *     NtSerializeBoot @ 0x1407D28B0 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140A66E8C (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}

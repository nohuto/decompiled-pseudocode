/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x14032E62C
 * Callers:
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  bool result; // al

  if ( (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 )
    return 1;
  result = 0;
  if ( a2 < 0 )
    return a1 >= 0;
  return result;
}

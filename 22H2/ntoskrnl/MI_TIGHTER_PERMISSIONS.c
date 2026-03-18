/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x1402846AC
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
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

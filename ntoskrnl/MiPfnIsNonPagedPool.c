/*
 * XREFs of MiPfnIsNonPagedPool @ 0x14063F458
 * Callers:
 *     MiIsPfnLocked @ 0x14030043C (MiIsPfnLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(__int64 *)(a1 + 40) < 0 || (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) != 5 )
    return 0LL;
  LOBYTE(v1) = (*(_BYTE *)(a1 + 34) & 7) == 6;
  return v1;
}

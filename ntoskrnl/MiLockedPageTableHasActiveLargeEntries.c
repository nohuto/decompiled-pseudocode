/*
 * XREFs of MiLockedPageTableHasActiveLargeEntries @ 0x1402FEB1C
 * Callers:
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockedPageTableHasActiveLargeEntries(unsigned __int64 a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned __int64 v4; // rdx

  v1 = 0;
  v3 = 0;
  v4 = a1;
  while ( 1 )
  {
    v4 = (__int64)(v4 << 25) >> 16;
    if ( v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v3;
  }
  if ( (unsigned int)(v3 - 1) > 1 )
    return 0LL;
  while ( (MI_READ_PTE_LOCK_FREE(a1) & 0x1000000000000081LL) != 0x1000000000000081LL )
  {
    a1 += 8LL;
    if ( (unsigned int)++v1 >= 0x200 )
      return 0LL;
  }
  return 1LL;
}

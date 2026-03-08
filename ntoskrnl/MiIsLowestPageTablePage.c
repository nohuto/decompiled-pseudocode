/*
 * XREFs of MiIsLowestPageTablePage @ 0x140348E4C
 * Callers:
 *     MiUnlockPageTableCharges @ 0x140345720 (MiUnlockPageTableCharges.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsLowestPageTablePage(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( v1 >= 0xFFFFF68000000000uLL && v1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v2 = (__int64)(v1 << 25) >> 16;
      if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL )
        return 1;
    }
  }
  return result;
}

/*
 * XREFs of MiClearAweLargePageMetadata @ 0x14064703C
 * Callers:
 *     MiFreeContiguousLargePageRun @ 0x14064780C (MiFreeContiguousLargePageRun.c)
 *     MiReadyLargeAwePageForFree @ 0x1406496AC (MiReadyLargeAwePageForFree.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 */

unsigned __int64 __fastcall MiClearAweLargePageMetadata(__int64 a1)
{
  char v2; // dl
  unsigned __int64 result; // rax

  MiSetPfnIdentity(a1, 0);
  v2 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)(a1 + 40) &= 0xFFFFFF0000000000uLL;
  if ( (v2 & 7) != 5 )
    *(_BYTE *)(a1 + 34) = v2 & 0xF8 | 5;
  result = *(_QWORD *)(a1 + 24) >> 62;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    result = 0xBFFFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
  }
  return result;
}

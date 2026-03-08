/*
 * XREFs of MiScrubLargePageRegions @ 0x140A437AC
 * Callers:
 *     MiScrubNode @ 0x140A43A10 (MiScrubNode.c)
 * Callees:
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiGetPfnPageSizeIndex @ 0x14034D770 (MiGetPfnPageSizeIndex.c)
 *     MiScrubInterrupted @ 0x14065BE30 (MiScrubInterrupted.c)
 *     MiScrubLargePage @ 0x14065C38C (MiScrubLargePage.c)
 *     MiScrubActiveLargePage @ 0x140A43704 (MiScrubActiveLargePage.c)
 */

__int64 __fastcall MiScrubLargePageRegions(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 *v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int8 v17; // al

  v3 = a3;
  v4 = a2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v8 = (-85 * (unsigned __int8)((a2 + 0x220000000000LL) >> 4)) & 0xF;
  if ( ((-85 * (unsigned __int8)((a2 + 0x220000000000LL) >> 4)) & 0xF) != 0 )
  {
    v9 = 16 - v8;
    if ( 16 - v8 >= a3 )
      return 0LL;
    v7 = v9 - 0x5555555555555555LL * ((a2 + 0x220000000000LL) >> 4);
    v4 = 48 * v9 + a2;
    v3 = a3 - v9;
  }
  v10 = v3 & 0xF;
  if ( (v3 & 0xF) != 0 )
  {
    if ( v10 >= v3 )
      return 0LL;
    v3 -= v10;
  }
  v11 = v3 + v7;
  v12 = 48 * v3 + v4;
  while ( v3 )
  {
    v13 = 0LL;
    v14 = MiLargePageSizes;
    do
    {
      if ( ((*v14 - 1) & v11) == 0 )
        goto LABEL_12;
      v13 = (unsigned int)(v13 + 1);
      ++v14;
    }
    while ( (unsigned int)v13 < 2 );
    if ( (unsigned int)v13 <= 2 )
    {
      do
      {
LABEL_12:
        v15 = MiLargePageSizes[v13];
        if ( v15 <= v3 && (unsigned int)MiGetPfnPageSizeIndex(v12 - 48 * v15) == (_DWORD)v13 )
          break;
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 <= 2 );
      if ( (unsigned int)v13 <= 2 )
      {
        _mm_lfence();
        v16 = MiLargePageSizes[v13];
        v11 -= v16;
        v12 += -48 * v16;
        v17 = *(_BYTE *)(v12 + 34) & 7;
        if ( v17 > 1u )
        {
          if ( v17 == 6
            && (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
            && *(_WORD *)(v12 + 32) == 2
            && MiGetLeafVa(*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) <= 0x7FFFFFFEFFFFLL )
          {
            MiScrubActiveLargePage(a1, v11, v13);
          }
        }
        else if ( !(unsigned int)MiScrubLargePage((__int64)a1, v11, v13) )
        {
          return v16 - 0x5555555555555555LL * ((v12 - a2) >> 4);
        }
        if ( MiScrubInterrupted((__int64)a1) )
          return v16 - 0x5555555555555555LL * ((v12 - a2) >> 4);
        v3 -= v16;
        continue;
      }
    }
    v3 -= 16LL;
    v12 -= 768LL;
    v11 -= 16LL;
  }
  return 0LL;
}

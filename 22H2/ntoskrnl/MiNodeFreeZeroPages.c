/*
 * XREFs of MiNodeFreeZeroPages @ 0x140299324
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140231A80 (MiDemoteLocalLargePage.c)
 *     MiReplenishPageSlist @ 0x140298D80 (MiReplenishPageSlist.c)
 *     MiSignalLargePageRebuild @ 0x14033BFF0 (MiSignalLargePageRebuild.c)
 *     MiFreeZeroPageSlistSufficient @ 0x140365148 (MiFreeZeroPageSlistSufficient.c)
 *     MiRebuildLargePages @ 0x14038CFC0 (MiRebuildLargePages.c)
 *     MiPruneStandbyPages @ 0x140550D14 (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x140551140 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x140552618 (MiRebuildLargePage.c)
 * Callees:
 *     MiNodeLargeFreeZeroPages @ 0x1402994C0 (MiNodeLargeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeFreeZeroPages(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // ebp
  __int64 v8; // rbx
  int v9; // r15d
  _QWORD *v11; // rax

  v3 = a2;
  v4 = (_QWORD *)(a1 + 4128);
  v5 = ((unsigned int)~a3 >> 1) & 1;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = a3 & 0x1000;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v11 = (_QWORD *)(a1 + 8 * (v8 + 2 * v3 + 527));
    else
      v11 = v4;
    v6 += *v11;
    if ( v9 )
      v6 += MiNodeLargeFreeZeroPages(a1, (unsigned int)v3, v7);
    ++v7;
    ++v8;
    ++v4;
  }
  while ( v8 <= v5 );
  return v6;
}

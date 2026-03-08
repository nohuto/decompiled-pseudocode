/*
 * XREFs of MiAddPageToHeatRanges @ 0x140651704
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiGetLargePageChain @ 0x1402E98A8 (MiGetLargePageChain.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x14031D5F0 (MiUpdatePfnForPrefetchByPte.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiDemoteLocalLargePage @ 0x14034E760 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x1406517FC (MiChangePageHeatImmediate.c)
 *     MiMakeTransitionHeatBatch @ 0x140651CD4 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAddPageToHeatRanges(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r11d
  __int64 *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx

  v3 = *(unsigned int *)(a1 + 4);
  v4 = 0;
  if ( (_DWORD)v3 )
    v7 = (__int64 *)(a1 + 8 * ((unsigned int)(v3 - 1) + 2LL));
  else
    v7 = 0LL;
  if ( a3 == 3 )
  {
    if ( v7 )
    {
      v8 = *v7;
      if ( (*v7 & 0xC00) == 0 && (*v7 & 0x3FF) != 0x3FF )
      {
        v9 = (*v7 & 0x3FF) + 1;
        if ( a2 == v9 + (v8 >> 12) )
        {
          *v7 = v8 ^ (v9 ^ v8) & 0x3FF;
          return 0LL;
        }
        if ( a2 == (v8 >> 12) - 1 )
        {
          *v7 = v9 & 0x3FF | (a2 << 12);
          return 0LL;
        }
      }
    }
  }
  v11 = a2 << 12;
  *(_QWORD *)(a1 + 8 * v3 + 16) = v11;
  if ( a3 != 3 )
  {
    if ( a3 == 2 )
    {
      v12 = v11 | 0xF;
    }
    else if ( a3 == 1 )
    {
      v12 = v11 | 0x400;
    }
    else
    {
      v12 = v11 | 0x800;
    }
    *(_QWORD *)(a1 + 8 * v3 + 16) = v12;
  }
  LOBYTE(v4) = ++*(_DWORD *)(a1 + 4) == *(_DWORD *)(a1 + 8);
  return v4;
}

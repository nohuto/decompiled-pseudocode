/*
 * XREFs of ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00FD5A0
 * Callers:
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00AEEA0 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00EC954 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM.c)
 * Callees:
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C0102328 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 */

unsigned __int64 __fastcall VIDMM_SEGMENT::GetLargestGap(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  int v4; // esi
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebp
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rsi
  unsigned int v14; // r9d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax

  v4 = *(_DWORD *)(a1 + 80);
  if ( (v4 & 0x20) != 0 )
    v8 = *(_QWORD *)(a2 + 24);
  else
    v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_DWORD *)(a2 + 32);
  if ( (**(_DWORD **)(a2 + 536) & 0x20000) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 408);
    v8 = ~*(_QWORD *)(a1 + 400) & (*(_QWORD *)(a1 + 400) + v8);
  }
  v10 = *(_QWORD *)(a1 + 48);
  v11 = 0LL;
  switch ( a3 )
  {
    case 7:
      if ( *(_DWORD *)(a1 + 412) == 1 )
      {
        result = 0LL;
        v13 = *(_QWORD *)(a1 + 384) + *(_QWORD *)(a1 + 392);
        if ( v13 < v10 )
          result = VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v8, v9, 0, v13, v10);
        if ( result < v8 )
        {
          if ( v13 )
            return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v8, v9, 0, 0LL, v13);
        }
        return result;
      }
      goto LABEL_39;
    case 3:
LABEL_14:
      a4 = 1;
      return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v8, v9, a4, v11, v10);
    case 4:
      v14 = dword_1C00762A8;
      if ( (v4 & 0x1001) != 0 )
        v14 = dword_1C00762AC;
      if ( (*(_DWORD *)(a2 + 72) & 0x400) == 0 )
      {
        v15 = v10 / 0x64;
        if ( *(_BYTE *)(a1 + 449) )
        {
          v11 = 0LL;
          v10 = (v15 * v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_14;
        }
        v11 = (v15 * (100 - v14) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      }
LABEL_39:
      a4 = 0;
      return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v8, v9, a4, v11, v10);
    case 5:
      if ( *(_DWORD *)(a1 + 412) == 1 )
      {
        v16 = *(_QWORD *)(a1 + 432);
        if ( v16 )
        {
          if ( v16 >= v8 )
          {
            v11 = *(_QWORD *)(a1 + 416);
            v10 = *(_QWORD *)(a1 + 424);
          }
          else
          {
            a3 = 6;
          }
        }
        else
        {
          v10 = *(_QWORD *)(a1 + 384) + *(_QWORD *)(a1 + 392);
          v11 = v10 - v8;
        }
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 384);
        v10 = v11 + *(_QWORD *)(a1 + 392);
      }
      a4 = 0;
      break;
  }
  if ( a3 != 6 )
    return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v8, v9, a4, v11, v10);
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v11 = *(_QWORD *)(a1 + 384);
    v10 = v11 + *(_QWORD *)(a1 + 392);
    goto LABEL_39;
  }
  if ( *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384) >= v8 )
  {
    v10 = *(_QWORD *)(a1 + 424);
    v11 = *(_QWORD *)(a1 + 416) - v8;
    goto LABEL_39;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(a1);
  return *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384);
}

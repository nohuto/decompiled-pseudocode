/*
 * XREFs of ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C00EC0C0
 * Callers:
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00EC954 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093A84 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00EC4C8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::FaultAllDemotableAllocations(
        VIDMM_DEVICE *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        _BYTE *a8)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // r13
  _QWORD **v13; // r15
  _QWORD *v14; // rsi
  VIDMM_DEVICE **v15; // r12
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  int v21; // [rsp+68h] [rbp+20h]

  v21 = a4;
  v9 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(a1);
    a4 = v21;
    *(_QWORD *)(v10 + 24) = a1;
  }
  result = *(_QWORD *)a1;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 3712LL) + 8 * v9);
  v13 = (_QWORD **)(56 * v9 + *((_QWORD *)a1 + 5) + 32LL);
  v14 = *v13;
  if ( *v13 != v13 )
  {
    while ( 1 )
    {
      v15 = (VIDMM_DEVICE **)(v14 - 7);
      v14 = (_QWORD *)*v14;
      v16 = *(_QWORD *)*v15;
      result = *(unsigned int *)(v16 + 68);
      if ( (result & 0x40) != 0 )
      {
        if ( a4 != 7
          || (*(_BYTE *)(v12 + 82) & 1) == 0
          || (v17 = *(_QWORD *)(v16 + 128), v18 = *(_QWORD *)(v12 + 384), v17 < v18)
          || *(_QWORD *)(v16 + 16) + v17 > *(_QWORD *)(v12 + 392) + v18 )
        {
          v19 = *(_DWORD *)(v16 + 400);
          if ( v19 > a5 )
          {
            result = *a6;
            if ( (_DWORD)result )
            {
              if ( (unsigned int)result >= v19 )
                result = v19;
              *a6 = result;
            }
            else
            {
              *a6 = v19;
            }
          }
          else
          {
            if ( (*((_DWORD *)a1 + 15) & 7) == 0 )
              VIDMM_DEVICE::PartiallySuspend(a1);
            VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)a1, v15);
            v20 = *(_QWORD *)(v16 + 16);
            *a8 = 1;
            result = *a7;
            if ( v20 >= *a7 )
            {
              *a7 = 0LL;
              return result;
            }
            result -= v20;
            *a7 = result;
          }
        }
      }
      if ( v14 == v13 )
        return result;
      a4 = v21;
    }
  }
  return result;
}

/*
 * XREFs of ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00EEFF0
 * Callers:
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00EDB78 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0095E30 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C00AD868 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  char v1; // bp
  unsigned int v2; // esi
  VIDMM_PROCESS_BUDGET_STATE *v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // r9
  int v7; // r8d
  unsigned int *v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rbx
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]

  v1 = 0;
  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 7016LL) )
  {
    do
    {
      v4 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)this + 6) + 296LL * v2);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)this + 45, 0);
      DXGPUSHLOCK::AcquireShared(v14);
      v5 = *(_QWORD *)this;
      v6 = (_QWORD *)((char *)v4 + 184);
      v15 = 1;
      v7 = 0;
      v8 = (unsigned int *)(1616LL * v2 + *(_QWORD *)(v5 + 40224) + 504LL);
      while ( 1 )
      {
        v9 = *(v6 - 6);
        if ( v7 == 1 )
        {
          v10 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v4);
          v9 = v10 + v11;
        }
        v12 = *v8;
        if ( v9 > *v6 * (v12 + 100) / 0x64uLL || v9 < *v6 * (100 - v12) / 0x64uLL )
          break;
        ++v7;
        v8 += 6;
        ++v6;
        if ( v7 >= 2 )
          goto LABEL_10;
      }
      v1 = 1;
LABEL_10:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      ++v2;
    }
    while ( v2 < *(_DWORD *)(*(_QWORD *)this + 7016LL) );
    if ( v1 )
      VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 1);
  }
}

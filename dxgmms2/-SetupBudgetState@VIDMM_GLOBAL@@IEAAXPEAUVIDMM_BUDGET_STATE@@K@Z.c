/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C0101448
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00AAC58 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C00AD050 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C00AD868 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C0101244 (-CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, unsigned int a3)
{
  int v4; // r12d
  __int64 v6; // rbp
  __int64 v7; // r14
  struct VIDMM_BUDGET_STATE *v8; // r8
  __int64 v9; // rdx
  struct _RTL_BALANCED_NODE *v10; // rax
  _QWORD *Children; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  char *v18; // rdi
  struct _KTHREAD *i; // rdi
  _QWORD *v20; // rbx
  VIDMM_GLOBAL *v21; // rcx
  VIDMM_PROCESS *v22; // rax
  struct DXGPROCESS *v23; // rdx
  int *v24; // rbp
  __int64 v25; // rdx
  _QWORD *v26; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v27; // esi
  _QWORD *v28; // rbx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  int v30; // ebp
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  struct _RTL_BALANCED_NODE *v34; // rax
  _QWORD *v35; // rbx
  _QWORD **v36; // rcx
  _QWORD *v37; // rax
  _QWORD *j; // rcx
  struct VIDMM_PHYSICAL_ADAPTER *v39; // [rsp+20h] [rbp-68h]
  _BYTE v40[8]; // [rsp+28h] [rbp-60h] BYREF
  DXGPUSHLOCK *v41; // [rsp+30h] [rbp-58h]
  int v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+90h] [rbp+8h]
  __int64 v44; // [rsp+98h] [rbp+10h]
  __int64 v46; // [rsp+A8h] [rbp+20h]

  *(_DWORD *)a2 = a3;
  v4 = 0;
  v43 = a3;
  v46 = 1616LL * a3;
  v39 = (struct VIDMM_PHYSICAL_ADAPTER *)(v46 + *((_QWORD *)this + 5028));
  v6 = 0LL;
  v44 = ((*((_BYTE *)v39 + 445) & 0x20) != 0) + 1LL;
  v7 = 0LL;
  do
  {
    v8 = (struct VIDMM_BUDGET_STATE *)*((_QWORD *)this + 5028);
    v9 = 1616LL * *(unsigned int *)a2;
    if ( (*((_BYTE *)v8 + v9 + v7 + 520) & 1) != 0 )
    {
      v10 = VIDMM_PARTITION::_PartitionTree;
      Children = 0LL;
      while ( v10 )
      {
        Children = v10->Children;
        v10 = v10->Children[0];
      }
      while ( Children )
      {
        v12 = 3LL;
        v13 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + Children[5] + 24)
            + 344LL * *(unsigned int *)a2;
        do
        {
          memset((void *)(v13 + 240), 0, 0x60uLL);
          --v12;
        }
        while ( v12 );
        v14 = (_QWORD **)Children[1];
        v15 = Children;
        if ( v14 )
        {
          v16 = *v14;
          for ( Children = (_QWORD *)Children[1]; v16; v16 = (_QWORD *)*v16 )
            Children = v16;
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v15 )
              break;
            v15 = Children;
          }
        }
      }
    }
    else
    {
      v17 = 3LL;
      v18 = (char *)v8 + 344 * v4 + v9;
      do
      {
        memset(v18 + 792, 0, 0x60uLL);
        --v17;
      }
      while ( v17 );
    }
    ++v4;
    ++v6;
    v7 += 24LL;
  }
  while ( v6 < v44 );
  for ( i = (struct _KTHREAD *)*((_QWORD *)this + 5140);
        i != (VIDMM_GLOBAL *)((char *)this + 41120);
        i = *(struct _KTHREAD **)i )
  {
    v20 = (_QWORD *)(296 * v43 + *((_QWORD *)i + 3));
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40, (struct _KTHREAD **)i + 42, 0);
    DXGPUSHLOCK::AcquireShared(v41);
    v20[23] = v20[17];
    v20[24] = v20[18];
    v42 = 1;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
    v20[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v20);
    v22 = (VIDMM_PROCESS *)*((_QWORD *)i + 2);
    v23 = (struct DXGPROCESS *)*((_QWORD *)v22 + 4);
    if ( v23 && v22 != g_pVidMmSystemProcess )
    {
      v24 = (int *)((char *)i + 376);
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        v21,
        v23,
        (struct _KTHREAD *)((char *)i + 376),
        (struct _KTHREAD *)((char *)i + 368));
      v25 = *v20;
      if ( *v20 )
      {
        if ( *(_QWORD **)(v25 + 8) != v20 || (v26 = (_QWORD *)v20[1], (_QWORD *)*v26 != v20) )
          __fastfail(3u);
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        *v20 = 0LL;
        v20[1] = 0LL;
      }
      v27 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v28 = v20 + 7;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                              this,
                              a3,
                              v27,
                              *(struct VIDMM_PARTITION **)(*((_QWORD *)i + 2) + 288LL));
        *((_QWORD *)SegmentGroupState + *v24 + 30) += v28[16];
        if ( *v28 )
        {
          *((_QWORD *)SegmentGroupState + *v24 + 36) += *v28;
          ++*((_DWORD *)SegmentGroupState + *v24 + 78);
        }
        ++v27;
        ++v28;
      }
      while ( v27 < 2 );
    }
  }
  v30 = 0;
  v31 = 0LL;
  v32 = v46;
  do
  {
    v33 = *((_QWORD *)this + 5028);
    if ( (*(_BYTE *)(v33 + v32 + 520) & 1) != 0 )
    {
      v34 = VIDMM_PARTITION::_PartitionTree;
      v35 = 0LL;
      while ( v34 )
      {
        v35 = v34->Children;
        v34 = v34->Children[0];
      }
      while ( v35 )
      {
        VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
          this,
          v39,
          v8,
          (struct VIDMM_SEGMENT_GROUP_STATE *)(344 * v43
                                             + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                         + v35[5]
                                                         + 24)));
        v36 = (_QWORD **)v35[1];
        v37 = v35;
        if ( v36 )
        {
          v35 = (_QWORD *)v35[1];
          for ( j = *v36; j; j = (_QWORD *)*j )
            v35 = j;
        }
        else
        {
          while ( 1 )
          {
            v35 = (_QWORD *)(v35[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v35 || (_QWORD *)*v35 == v37 )
              break;
            v37 = v35;
          }
        }
      }
    }
    else
    {
      VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        this,
        v39,
        v8,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(v33 + 344LL * v30 + v46 + 552));
    }
    ++v30;
    ++v31;
    v32 += 24LL;
  }
  while ( v31 < v44 );
}

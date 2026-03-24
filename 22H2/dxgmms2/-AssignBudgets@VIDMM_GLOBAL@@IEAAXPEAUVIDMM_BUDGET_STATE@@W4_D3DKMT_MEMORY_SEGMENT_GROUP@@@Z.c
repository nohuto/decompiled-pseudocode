/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00C93EC
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008C500 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00C92A4 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 *     ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00C9A98 (-BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  __int64 v3; // rbx
  __int64 v6; // r9
  __int64 v7; // r11
  struct _RTL_BALANCED_NODE *v8; // rax
  _QWORD *Children; // rbx
  _QWORD **v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx

  v3 = a3;
  VIDMM_GLOBAL::BucketizeBudgetStateProcesses(this, *(_DWORD *)a2, a3);
  v6 = *(unsigned int *)a2;
  v7 = *((_QWORD *)this + 5027);
  if ( (*(_BYTE *)(v7 + 24 * (v3 + 66 * v6) + 512) & 1) != 0 )
  {
    v8 = VIDMM_PARTITION::_PartitionTree;
    Children = 0LL;
    while ( v8 )
    {
      Children = v8->Children;
      v8 = v8->Children[0];
    }
    while ( Children )
    {
      VIDMM_GLOBAL::AssignBudgets(
        this,
        a2,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL)
                                                       + Children[5]
                                                       + 24)
                                           + 336LL * *(unsigned int *)a2));
      v10 = (_QWORD **)Children[1];
      v11 = Children;
      if ( v10 )
      {
        v12 = *v10;
        for ( Children = (_QWORD *)Children[1]; v12; v12 = (_QWORD *)*v12 )
          Children = v12;
      }
      else
      {
        while ( 1 )
        {
          Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !Children || (_QWORD *)*Children == v11 )
            break;
          v11 = Children;
        }
      }
    }
  }
  else
  {
    VIDMM_GLOBAL::AssignBudgets(this, a2, (struct VIDMM_SEGMENT_GROUP_STATE *)(336 * v3 + 544 + v7 + 1584 * v6));
  }
}

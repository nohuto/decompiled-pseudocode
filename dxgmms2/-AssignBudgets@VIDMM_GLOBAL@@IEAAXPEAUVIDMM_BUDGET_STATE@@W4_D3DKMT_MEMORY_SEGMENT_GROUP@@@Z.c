/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C0100AD0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C0100990 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 *     ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C0101164 (-BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  __int64 v3; // rbx
  __int64 v6; // r11
  __int64 v7; // r10
  struct _RTL_BALANCED_NODE *v8; // rax
  _QWORD *Children; // rbx
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  _QWORD *i; // rcx

  v3 = a3;
  VIDMM_GLOBAL::BucketizeBudgetStateProcesses(this, *(_DWORD *)a2, a3);
  v6 = *((_QWORD *)this + 5028);
  v7 = 1616LL * *(unsigned int *)a2;
  if ( (*(_BYTE *)(v6 + 24 * v3 + v7 + 520) & 1) != 0 )
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
        (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                       + Children[5]
                                                       + 24)
                                           + 344LL * *(unsigned int *)a2));
      v10 = (_QWORD **)Children[1];
      v11 = Children;
      if ( v10 )
      {
        Children = (_QWORD *)Children[1];
        for ( i = *v10; i; i = (_QWORD *)*i )
          Children = i;
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
    VIDMM_GLOBAL::AssignBudgets(this, a2, (struct VIDMM_SEGMENT_GROUP_STATE *)(v6 + 344 * v3 + v7 + 552));
  }
}

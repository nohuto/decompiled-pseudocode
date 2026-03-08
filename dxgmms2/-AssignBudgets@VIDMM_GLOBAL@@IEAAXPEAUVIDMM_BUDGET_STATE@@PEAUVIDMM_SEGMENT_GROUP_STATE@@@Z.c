/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C0100990
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C0100AD0 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C0100BDC (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C0100F2C (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3)
{
  __int64 v6; // r8
  unsigned __int64 *v7; // rsi
  unsigned __int64 *v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int i; // ebp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // r8d
  char *v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rax

  if ( *((_BYTE *)a3 + 136) )
  {
    v6 = 0LL;
    v7 = (unsigned __int64 *)((char *)a3 + 240);
    v8 = (unsigned __int64 *)((char *)a3 + 240);
    v9 = 3LL;
    do
    {
      v10 = v8[3];
      v11 = *v8++;
      if ( v10 >= v11 )
        v10 = v11;
      v6 += v10;
      --v9;
    }
    while ( v9 );
    v12 = *((_QWORD *)a3 + 2) - v6;
    for ( i = 0; i < 3; ++i )
    {
      v14 = v7[3];
      v15 = *v7;
      if ( *v7 > v14 )
      {
        v18 = v15 - v14;
        v17 = v14 + v12;
        if ( v18 >= v12 )
          v18 = v12;
        v12 -= v18;
      }
      else
      {
        v16 = v12 + v15;
        if ( v14 <= v16 )
          v14 = v16;
        v17 = v14;
      }
      VIDMM_GLOBAL::AssignBudgetsWithinBand(this, a2, a3, (unsigned int)i, v17);
      ++v7;
    }
  }
  else
  {
    VIDMM_GLOBAL::AssignMaximumBudgets(this, a2, a3);
  }
  v19 = 0;
  v20 = (char *)a3 + 192;
  do
  {
    v21 = *(__int64 **)v20;
    if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 || (v22 = *v21, *(__int64 **)(*v21 + 8) != v21) )
LABEL_25:
      __fastfail(3u);
    while ( 1 )
    {
      *(_QWORD *)v20 = v22;
      *(_QWORD *)(v22 + 8) = v20;
      if ( v21 == (__int64 *)((char *)a3 + 16 * v19 + 192) )
        break;
      *v21 = 0LL;
      v21[1] = 0LL;
      v21 = *(__int64 **)v20;
      if ( *(char **)(*(_QWORD *)v20 + 8LL) == v20 )
      {
        v22 = *v21;
        if ( *(__int64 **)(*v21 + 8) == v21 )
          continue;
      }
      goto LABEL_25;
    }
    ++v19;
    v20 += 16;
  }
  while ( v19 < 3 );
}

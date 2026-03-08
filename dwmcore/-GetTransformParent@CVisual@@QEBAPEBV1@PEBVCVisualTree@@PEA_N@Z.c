/*
 * XREFs of ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x18008A560
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800090E8 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000AFEC (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5BD8 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct CVisual *__fastcall CVisual::GetTransformParent(CVisual *this, CVisual **a2, bool *a3)
{
  __int64 v3; // rbp
  _BYTE *v4; // rbx
  bool v8; // si
  _DWORD *v9; // r9
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  unsigned int i; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx

  v3 = 0LL;
  v4 = 0LL;
  v8 = 1;
  if ( this == a2[8] )
    goto LABEL_7;
  v9 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v9 & 0x1000000) != 0 )
  {
    v12 = (unsigned int)v9[1];
    v13 = v9 + 2;
    for ( i = 0; i < (unsigned int)v12; ++v13 )
    {
      if ( *v13 == 8 )
        break;
      ++i;
    }
    if ( i < (unsigned int)v12 )
    {
      v13 = (_BYTE *)(v12 + 15);
      v4 = (char *)v9 + 8LL * i - (((_BYTE)v12 + 15) & 7) + v12 + 15;
    }
    v4 = *(_BYTE **)v4;
    if ( v4 )
      v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v4 + 184LL))(*(_QWORD *)v4, v13);
  }
  if ( !(*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 23))(a2) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
      {
        p_Blink = &j[-23].Blink;
        if ( (CVisual **)j[2].Flink == a2 )
          goto LABEL_5;
      }
    }
    goto LABEL_22;
  }
  p_Blink = (struct _LIST_ENTRY **)((char *)this + 336);
LABEL_5:
  if ( !p_Blink || p_Blink[32] == p_Blink[33][1].Flink[31].Flink )
LABEL_22:
    v3 = 0LL;
LABEL_7:
  if ( a3 )
  {
    if ( !v4 || !v4[8] )
      v8 = 0;
    *a3 = v8;
  }
  return (const struct CVisual *)v3;
}

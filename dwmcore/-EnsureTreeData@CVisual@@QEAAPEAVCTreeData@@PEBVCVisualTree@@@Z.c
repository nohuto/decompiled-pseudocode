/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008957C
 * Callers:
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x18001FB14 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C79C (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009A318 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180210D58 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18009B870 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E1BE0 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800E20E0 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CTreeData *__fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2)
{
  int **v2; // rbx
  char *v5; // rdi
  int *v7; // r8
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  unsigned int i; // eax
  _QWORD ***v11; // rcx
  _QWORD **v12; // rcx
  _QWORD *v13; // rax
  struct CTreeData *UnusedTreeData; // rbx
  unsigned int **v15; // r10
  unsigned int v16; // eax
  unsigned int *v17; // rcx
  unsigned int Slot; // eax
  __int64 v19; // r11
  CTreeData *v20; // rax

  v2 = (int **)((char *)this + 232);
  v5 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v5 = (char *)this + 336;
  }
  else
  {
    v7 = *v2;
    if ( **v2 >= 0 )
      goto LABEL_18;
    v8 = (unsigned int)v7[1];
    v9 = v7 + 2;
    for ( i = 0; i < (unsigned int)v8; ++v9 )
    {
      if ( *v9 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v8 )
      v11 = 0LL;
    else
      v11 = (_QWORD ***)((char *)v7 + 8LL * i - (((_BYTE)v8 + 15) & 7) + v8 + 15);
    v12 = *v11;
    if ( v12 )
    {
      v13 = *v12;
      if ( *v12 != v12 )
      {
        while ( 1 )
        {
          v5 = (char *)(v13 - 45);
          if ( (const struct CVisualTree *)v13[4] == a2 )
            break;
          v13 = (_QWORD *)*v13;
          if ( v13 == v12 )
            goto LABEL_18;
        }
      }
    }
  }
  if ( v5 )
    return (struct CTreeData *)v5;
LABEL_18:
  UnusedTreeData = CVisual::GetUnusedTreeData(this);
  if ( UnusedTreeData )
  {
    v16 = **v15;
    if ( (v16 & 0x8000000) != 0 )
    {
      v17 = *v15;
      **v15 = v16 & 0xF7FFFFFF;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v17, 5LL);
      if ( Slot < *(_DWORD *)(v19 + 4) )
        *(_BYTE *)(Slot + v19 + 8) = 0;
    }
  }
  else
  {
    v20 = (CTreeData *)operator new(0x190uLL);
    UnusedTreeData = v20;
    if ( v20 )
    {
      CTreeData::CTreeData(v20);
      *((_QWORD *)UnusedTreeData + 49) = 0LL;
      *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
    }
    else
    {
      UnusedTreeData = 0LL;
    }
  }
  (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, CVisual *))(*(_QWORD *)UnusedTreeData + 8LL))(
    UnusedTreeData,
    a2,
    this);
  return UnusedTreeData;
}

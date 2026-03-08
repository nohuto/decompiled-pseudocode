/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18009A564
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009A318 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x1800E6E78 (-GetChildAt@CVisual@@QEBAPEAV1@I@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoSibling(__int64 a1, struct CVisual **a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r9d
  __int64 v7; // r10
  int *v9; // r8
  int v10; // edx
  __int64 v11; // r11
  struct CVisual *ChildAt; // rax
  unsigned int Count; // eax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  *a2 = 0LL;
  v7 = a1;
  if ( !v3 )
    return 1;
  v9 = (int *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 28) != 1 )
    goto LABEL_6;
  if ( *v9 == -1 )
    return 1;
  Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 80));
  if ( v10 + 1 >= Count )
  {
LABEL_6:
    if ( *(_DWORD *)(v7 + 28) == v4 )
    {
      v10 = *v9;
      if ( *v9 )
        goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  v11 = (unsigned int)(v10 + 1);
  if ( *(_DWORD *)(v7 + 28) != 1 )
    v11 = (unsigned int)(v10 - 1);
  if ( a3 )
    ChildAt = *(struct CVisual **)(*a3 + 8 * v11);
  else
    ChildAt = CVisual::GetChildAt((CVisual *)v3, v11);
  *(_QWORD *)(v7 + 8) = ChildAt;
  *v9 = v11;
  *a2 = ChildAt;
  return v4;
}

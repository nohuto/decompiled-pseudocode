__int64 __fastcall CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  BOOL v7; // ebp
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v21 = a3;
  v7 = *(_BYTE *)(a2 + 56) == 0;
  v21 = 0LL;
  v20 = 0LL;
  *(_DWORD *)(a1 + 28) = v7;
  v8 = CGraphWalker<CBspNode>::GotoPreChild(a1, &v21);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x47u, 0LL);
    return v10;
  }
  if ( v21 )
  {
    v11 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v21, a2, a4, 0);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x4Bu, 0LL);
      return v10;
    }
    CGraphWalker<CBspNode>::GotoParent(a1, &v21);
    *(_DWORD *)(a1 + 28) = v7;
  }
  v13 = CBspNode::BuildPolygonList(*(CBspNode **)(a4 + 8), *(struct CVisual **)(a4 + 64));
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x5Au, 0LL);
  }
  else
  {
    v15 = CGraphWalker<CBspNode>::GotoPostChild(a1, &v20);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x5Cu, 0LL);
    }
    else if ( v20 )
    {
      v17 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v20, a2, a4, 0);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x60u, 0LL);
      else
        CGraphWalker<CBspNode>::GotoParent(a1, &v21);
    }
  }
  return v10;
}

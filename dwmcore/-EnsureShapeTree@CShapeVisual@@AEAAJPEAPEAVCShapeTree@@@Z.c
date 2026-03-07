__int64 __fastcall CShapeVisual::EnsureShapeTree(struct CComposition **this, struct CShapeTree **a2)
{
  unsigned int v2; // ebx
  CShapeTree *v5; // rax
  unsigned int v6; // ecx
  CShapeTree *v7; // rax
  struct CContent *v8; // rdi
  int v9; // eax
  unsigned int v10; // ecx

  v2 = 0;
  *a2 = 0LL;
  if ( !this[32] )
  {
    v5 = (CShapeTree *)DefaultHeap::AllocClear(0xA8uLL);
    if ( !v5 || (v7 = CShapeTree::CShapeTree(v5, this[2]), (v8 = v7) == 0LL) )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x59u, 0LL);
      return v2;
    }
    CMILRefCountImpl::AddReference((CShapeTree *)((char *)v7 + 8));
    v9 = CVisual::SetContent(this, v8);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5Bu, 0LL);
      CResource::InternalRelease(v8);
      return v2;
    }
    CResource::InternalRelease(v8);
  }
  *a2 = this[32];
  return v2;
}

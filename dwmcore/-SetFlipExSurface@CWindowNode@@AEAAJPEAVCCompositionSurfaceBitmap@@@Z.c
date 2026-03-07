__int64 __fastcall CWindowNode::SetFlipExSurface(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v4; // esi
  char v5; // r14
  char HasNonEmptyContent; // r15
  CPtrArrayBase *v7; // rcx
  __int64 *v8; // rcx
  unsigned __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi

  v4 = 0;
  v5 = 0;
  HasNonEmptyContent = CWindowNode::HasNonEmptyContent(this);
  v7 = (CWindowNode *)((char *)this + 784);
  if ( a2 )
  {
    if ( !CPtrArrayBase::Contains(v7) )
    {
      if ( CCompositionSurfaceBitmap::GetRenderingRealization(a2) )
      {
        CWindowNode::DiscardFlipExSurfaces(this);
        *((_BYTE *)this + 896) = 1;
        v5 = 1;
      }
      else if ( CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 784)) == 16 )
      {
        if ( *((_BYTE *)this + 896) )
        {
          v9 = CPtrArrayBase::operator[](v8, 1uLL);
          CResource::UnRegisterNotifierInternal(this, (struct CResource *)v9);
          CPtrArrayBase::RemoveAt((CWindowNode *)((char *)this + 784), 1uLL, 1uLL);
        }
        else
        {
          CWindowNode::DiscardOldestFlipExSurfaces(this, 1uLL);
        }
      }
      v10 = CResource::RegisterNotifier(this, a2);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x311u, 0LL);
        return v4;
      }
      Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 784));
      v14 = CPtrArrayBase::InsertAt(v13, (unsigned __int64)a2, Count);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x312u, 0LL);
        return v4;
      }
    }
  }
  else if ( CPtrArrayBase::GetCount(v7) )
  {
    CWindowNode::DiscardFlipExSurfaces(this);
    v5 = *((_BYTE *)this + 896);
    *((_BYTE *)this + 896) = 0;
  }
  v16 = v5 != 0 ? 4 : 0;
  if ( HasNonEmptyContent != CWindowNode::HasNonEmptyContent(this) )
    v16 |= 1u;
  if ( v16 )
    CVisual::PropagateFlags((__int64)this, v16);
  return v4;
}

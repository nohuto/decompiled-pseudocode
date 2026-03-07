char __fastcall CWindowNode::ProcessReadyFlipExSurfaces(CWindowNode *this)
{
  char v1; // si
  __int64 *v3; // rbp
  unsigned __int64 Count; // rdi
  unsigned __int64 *v5; // rax

  v1 = 0;
  if ( !*((_BYTE *)this + 894) )
  {
    *((_BYTE *)this + 894) = 1;
    v3 = (__int64 *)((char *)this + 784);
    Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 784));
    if ( Count )
    {
      while ( 1 )
      {
        v5 = CPtrArrayBase::operator[](v3, --Count);
        if ( CCompositionSurfaceBitmap::GetRenderingRealization((CCompositionSurfaceBitmap *)v5) )
          break;
        if ( !Count )
          goto LABEL_9;
      }
      if ( !*((_BYTE *)this + 896) || Count )
      {
        *((_BYTE *)this + 896) = 1;
        CWindowNode::DiscardOldestFlipExSurfaces(this, Count);
        CVisual::PropagateFlags((__int64)this, 4u);
        v1 = 1;
      }
    }
LABEL_9:
    *((_BYTE *)this + 894) = 0;
  }
  return v1;
}

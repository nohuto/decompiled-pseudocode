__int64 __fastcall CWindowNode::SetSpriteBitmap(CWindowNode *this, struct CGdiSpriteBitmap *a2)
{
  unsigned int v4; // edi
  char v5; // r14
  int v6; // ecx
  char HasNonEmptyContent; // r15
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  char v15; // al
  bool v16; // si
  unsigned int v17; // edx
  int v19; // eax
  struct CResource *v20; // rax

  v4 = 0;
  v5 = 0;
  HasNonEmptyContent = CWindowNode::HasNonEmptyContent(this);
  if ( a2 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxx_EventWriteTransfer(
        v6,
        (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
        *((_QWORD *)this + 88),
        *((_QWORD *)this + 89),
        (char)a2);
    if ( !CPtrArrayBase::Contains((CWindowNode *)((char *)this + 776), (unsigned __int64)a2) )
    {
      if ( *((_BYTE *)this + 890) || *((_BYTE *)a2 + 140) )
      {
        CWindowNode::DiscardGdiSpriteBitmaps(this);
        *((_BYTE *)this + 895) = 1;
        v5 = 1;
      }
      else if ( CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 776)) == 16 )
      {
        if ( *((_BYTE *)this + 895) )
        {
          v20 = (struct CResource *)CPtrArrayBase::operator[](v8, 1LL);
          CResource::UnRegisterNotifierInternal(this, v20);
          CPtrArrayBase::RemoveAt((CWindowNode *)((char *)this + 776), 1uLL, 1uLL);
        }
        else
        {
          CWindowNode::DiscardOldestGdiSpriteBitmaps(this, 1uLL);
        }
      }
      *((_BYTE *)a2 + 143) = *((_BYTE *)this + 889);
      CGdiSpriteBitmap::SetColorKey(a2, (*((_DWORD *)this + 213) & 2) != 0, (CWindowNode *)((char *)this + 800));
      v9 = CResource::RegisterNotifier(this, a2);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1B4u, 0LL);
        return v4;
      }
      Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 776));
      v13 = CPtrArrayBase::InsertAt(v12, (unsigned __int64)a2, Count);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1B5u, 0LL);
        return v4;
      }
    }
  }
  else if ( CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 776)) )
  {
    CWindowNode::DiscardGdiSpriteBitmaps(this);
    v5 = *((_BYTE *)this + 895);
    *((_BYTE *)this + 895) = 0;
  }
  v15 = CWindowNode::HasNonEmptyContent(this);
  v16 = HasNonEmptyContent != v15;
  if ( v5 )
  {
    if ( *((_BYTE *)this + 890) )
      CWindowNode::ResetComposeTop(this);
    v19 = 4;
    if ( *((_BYTE *)this + 889) )
    {
      SAFE_DELETE<CShape>((char *)this + 880);
      v17 = 5;
    }
    else
    {
      if ( v16 )
        v19 = 5;
      v17 = v19;
    }
    goto LABEL_13;
  }
  if ( HasNonEmptyContent != v15 )
  {
    v17 = 1;
LABEL_13:
    CVisual::PropagateFlags((__int64)this, v17);
  }
  return v4;
}

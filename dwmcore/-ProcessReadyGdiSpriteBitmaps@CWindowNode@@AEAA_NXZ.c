char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  bool v1; // zf
  CPtrArrayBase *v3; // rcx
  unsigned __int64 Count; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned int v8; // edx

  v1 = *((_BYTE *)this + 890) == 0;
  v3 = (CWindowNode *)((char *)this + 776);
  if ( v1 )
  {
    Count = CPtrArrayBase::GetCount(v3);
    do
      v6 = Count--;
    while ( v6 && !*(_BYTE *)(CPtrArrayBase::operator[](v5, Count) + 140) );
  }
  else
  {
    Count = CPtrArrayBase::GetCount(v3) - 1;
  }
  if ( Count == -1LL || !Count && *((_BYTE *)this + 895) )
    return 0;
  *((_BYTE *)this + 895) = 1;
  CWindowNode::DiscardOldestGdiSpriteBitmaps(this, Count);
  if ( *((_BYTE *)this + 890) )
  {
    v8 = 8;
  }
  else if ( *((_BYTE *)this + 889) )
  {
    *((_BYTE *)this + 888) = 0;
    v8 = 5;
  }
  else
  {
    v8 = 4;
  }
  CVisual::PropagateFlags((__int64)this, v8);
  return 1;
}

bool __fastcall CWindowNode::HasSpriteContent(CWindowNode *this)
{
  char v1; // dl

  v1 = 0;
  if ( !*((_BYTE *)this + 890) )
    return CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 776)) != 0;
  return v1;
}

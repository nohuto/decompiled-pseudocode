bool __fastcall CVisual::HasProjectedShadowReceivers(CVisual *this)
{
  bool result; // al
  _QWORD *ProjectedShadowReceivers; // rax

  result = 0;
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this);
    if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
      return 1;
  }
  return result;
}

void __fastcall CVisual::OnLayoutChanged(CVisual *this)
{
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v3; // rsi
  CProjectedShadowCaster **i; // rbx
  __int64 ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v6; // rdi
  CProjectedShadowReceiver **j; // rbx

  CVisual::ClearContentTreeDataCaches(this);
  if ( (**((_DWORD **)this + 29) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v3 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v3; ++i )
      CProjectedShadowCaster::InvalidateMaskContent(*i);
  }
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)this);
    v6 = *(CProjectedShadowReceiver ***)(ProjectedShadowReceivers + 8);
    for ( j = *(CProjectedShadowReceiver ***)ProjectedShadowReceivers; j != v6; ++j )
      CProjectedShadowReceiver::InvalidateMaskContent(*j);
  }
}

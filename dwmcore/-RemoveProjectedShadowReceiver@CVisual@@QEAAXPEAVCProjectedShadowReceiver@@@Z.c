void __fastcall CVisual::RemoveProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  __int64 ProjectedShadowReceivers; // rdi
  __int64 v4; // r10
  _BYTE *v5; // r8
  _QWORD *v6; // rcx
  _BYTE *v7; // rdx

  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(this);
    v5 = *(_BYTE **)(ProjectedShadowReceivers + 8);
    v6 = *(_QWORD **)ProjectedShadowReceivers;
    if ( *(_BYTE **)ProjectedShadowReceivers != v5 )
    {
      while ( 1 )
      {
        v7 = v6 + 1;
        if ( *v6 == v4 )
          break;
        ++v6;
        if ( v7 == v5 )
          goto LABEL_5;
      }
      memmove_0(v6, v7, v5 - v7);
      *(_QWORD *)(ProjectedShadowReceivers + 8) -= 8LL;
    }
LABEL_5:
    if ( !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 256LL))(this) )
      CVisual::PropagateFlags(this, 5LL);
  }
}

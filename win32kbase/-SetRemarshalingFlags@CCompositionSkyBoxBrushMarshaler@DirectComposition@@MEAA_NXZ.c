char __fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 22) != 63 )
    *v1 |= 0x20u;
  if ( *((float *)this + 23) != 0.0 || *((float *)this + 24) != 0.0 || *((float *)this + 25) != 0.0 )
    *v1 |= 0x80u;
  if ( *((float *)this + 26) != 100.0 )
    *v1 |= 0x100u;
  if ( *((_BYTE *)this + 108) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x400u;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x200u;
  return 1;
}

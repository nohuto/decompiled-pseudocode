char __fastcall DirectComposition::CLayerVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CLayerVisualMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx
  char v3; // cl

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 396);
  if ( *((_QWORD *)this + 47) )
    *v2 |= 1u;
  if ( *((_QWORD *)this + 48) )
    *v2 |= 2u;
  if ( *((_BYTE *)this + 392) )
    *v2 |= 4u;
  if ( *((_BYTE *)this + 393) )
    *v2 |= 8u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*v2 & 0xF) != 0 || v3 )
    return 1;
  return v1;
}

char __fastcall DirectComposition::CSurfaceBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CSurfaceBrushMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x40u;
  if ( *((_BYTE *)this + 120) )
    *v1 |= 0x800u;
  *v1 |= 0x80u;
  *v1 |= 0x700u;
  return 1;
}

bool __fastcall DirectComposition::CMeshGeometry2DMarshaler::SetRemarshalingFlags(
        DirectComposition::CMeshGeometry2DMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 14) )
    *v1 |= 0x20u;
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x40u;
  *((_QWORD *)this + 11) = 0LL;
  if ( *((_QWORD *)this + 13) )
    *v1 |= 0x80u;
  *((_QWORD *)this + 14) = 0LL;
  if ( *((_QWORD *)this + 16) )
    *v1 |= 0x100u;
  return (*v1 & 0x1E0) != 0;
}

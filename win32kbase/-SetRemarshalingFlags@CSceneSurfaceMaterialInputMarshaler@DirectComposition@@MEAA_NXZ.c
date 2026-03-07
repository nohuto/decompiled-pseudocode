bool __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 20) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x40u;
  if ( *((_DWORD *)this + 21) != 2 )
    *v1 |= 0x80u;
  if ( *((_DWORD *)this + 22) != 2 )
    *v1 |= 0x100u;
  return (*v1 & 0x1E0) != 0;
}

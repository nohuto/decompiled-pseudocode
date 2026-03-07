bool __fastcall DirectComposition::CSceneMeshMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 14) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x100u;
  if ( *((_QWORD *)this + 11) )
    *v1 |= 0x200u;
  if ( *((_QWORD *)this + 12) )
    *v1 |= 0x400u;
  if ( *((_QWORD *)this + 13) )
    *v1 |= 0x800u;
  if ( *((_QWORD *)this + 14) )
    *v1 |= 0x1000u;
  if ( *((_DWORD *)this + 30) )
    *v1 |= 0x2000u;
  if ( *((_DWORD *)this + 31) )
    *v1 |= 0x4000u;
  if ( *((_DWORD *)this + 32) )
    *v1 |= 0x8000u;
  if ( *((_DWORD *)this + 33) )
    *v1 |= 0x10000u;
  if ( *((_DWORD *)this + 34) )
    *v1 |= 0x20000u;
  if ( *((_DWORD *)this + 35) )
    *v1 |= 0x40000u;
  if ( *((_DWORD *)this + 36) )
    *v1 |= 0x80000u;
  return (*v1 & 0xFFFE0) != 0;
}

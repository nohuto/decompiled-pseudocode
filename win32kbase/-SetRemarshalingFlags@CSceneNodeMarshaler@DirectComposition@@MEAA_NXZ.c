bool __fastcall DirectComposition::CSceneNodeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneNodeMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  *((_QWORD *)this + 7) = 0LL;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x20u;
  *((_QWORD *)this + 10) = 0LL;
  if ( *((_QWORD *)this + 12) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 13) )
    *v1 |= 0x80u;
  return (*v1 & 0xE0) != 0;
}

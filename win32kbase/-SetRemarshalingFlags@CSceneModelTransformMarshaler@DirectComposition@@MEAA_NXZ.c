bool __fastcall DirectComposition::CSceneModelTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneModelTransformMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}

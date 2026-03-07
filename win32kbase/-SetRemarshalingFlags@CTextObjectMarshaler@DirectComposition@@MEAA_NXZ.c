bool __fastcall DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextObjectMarshaler *this)
{
  _DWORD *v1; // rdx
  bool result; // al

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  *v1 |= 0x40u;
  result = 1;
  *v1 |= 0x80u;
  return result;
}

bool __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  _DWORD *v1; // rdx
  bool result; // al

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 15) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 14) )
    *v1 |= 0x40u;
  if ( *((_DWORD *)this + 20) || *((_DWORD *)this + 19) )
    *v1 |= 0x80u;
  if ( *((float *)this + 15) != 0.0 || *((float *)this + 16) != 0.0 || *((float *)this + 17) != 0.0 )
    *v1 |= 0x400u;
  if ( *((_BYTE *)this + 57) )
    *v1 |= 0x200u;
  if ( *((_BYTE *)this + 56) )
    *v1 |= 0x800u;
  if ( *((float *)this + 32) != 0.0 )
    *v1 |= 0x1000u;
  *v1 &= ~0x100u;
  result = 1;
  *((_QWORD *)this + 12) = 0LL;
  return result;
}

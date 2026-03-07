char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this)
{
  _DWORD *v1; // rdx
  char v2; // r8

  v1 = (_DWORD *)((char *)this + 16);
  v2 = 0;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 12) )
  {
    *v1 |= 0x40u;
    v2 = 1;
  }
  if ( *((_DWORD *)this + 20) > *((_DWORD *)this + 18) || *((_DWORD *)this + 21) > *((_DWORD *)this + 19) )
  {
    *v1 |= 0x80u;
    v2 = 1;
  }
  if ( *((_DWORD *)this + 14) != 3 )
  {
    *v1 |= 0x200u;
    v2 = 1;
  }
  if ( *((_DWORD *)this + 22) )
  {
    *v1 |= 0x400u;
    return 1;
  }
  return v2;
}

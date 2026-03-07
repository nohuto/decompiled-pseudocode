char __fastcall DirectComposition::CTableTransferEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTableTransferEffectMarshaler *this)
{
  char v1; // dl
  _DWORD *v2; // r8
  char v3; // r9
  __int64 v4; // r10
  bool v5; // zf

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 120);
  v3 = 0;
  v4 = 4LL;
  do
  {
    v5 = *v2 == 0;
    v2[1] = 0;
    v2 += 4;
    v3 |= !v5;
    --v4;
  }
  while ( v4 );
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18) || v3 || (*((_BYTE *)this + 176) & 0x10) != 0 )
    return 1;
  return v1;
}

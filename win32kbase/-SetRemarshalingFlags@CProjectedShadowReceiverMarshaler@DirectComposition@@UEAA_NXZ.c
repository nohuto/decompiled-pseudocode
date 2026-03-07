char __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowReceiverMarshaler *this)
{
  int *v2; // rdx
  int v3; // eax
  bool v4; // zf

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v2 |= 0x80u;
  v3 = *v2 | 0x100;
  v4 = *((_QWORD *)this + 11) == 0LL;
  *v2 = v3;
  if ( !v4 )
    *v2 = v3 | 0x200;
  return 1;
}

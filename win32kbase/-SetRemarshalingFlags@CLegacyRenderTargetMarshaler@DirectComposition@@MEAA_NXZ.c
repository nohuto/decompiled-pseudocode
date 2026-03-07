char __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CLegacyRenderTargetMarshaler *this)
{
  int *v1; // rdx
  float v2; // xmm0_4
  int v3; // eax

  v1 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 16) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 18) )
    *v1 |= 0x40u;
  v2 = *((float *)this + 32);
  v3 = *v1 | 0x80;
  *v1 = v3;
  if ( v2 != 1.0 )
    *v1 = v3 | 0x100;
  return 1;
}

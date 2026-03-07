char __fastcall DirectComposition::CVisualSurfaceMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  DirectComposition::CApplicationChannel *v8; // rsi
  DirectComposition::CVisualSurfaceMarshaler *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v9 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f310ad4bd11bf0ddd97c4ae1fe7ecd67___(
                             this,
                             a2,
                             &v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f90b95a5070878dcf2454476642f347a___(
                             this,
                             a2,
                             &v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e729cec4809a2969eb9b9e31d395b797___(
                             this,
                             a2,
                             &v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af64f2dae60dfc1c39a36c37ff2c2ed9___(
                             this,
                             a2,
                             &v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_111a47ea54d40238ee4bf82dd15994f9___(
                             this,
                             a2,
                             &v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  if ( *((_BYTE *)this + 92) )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_4ad76b37c5f805c67429e5a989919464___(
                             this,
                             a2) )
      return v3;
    v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
    v8 = (DirectComposition::CApplicationChannel *)*((_QWORD *)*a2 + 1);
    if ( v7 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(v8, v7);
      *((_QWORD *)this + 7) = 0LL;
    }
    *((_BYTE *)v8 + 240) |= 0x10u;
  }
  return 1;
}

/*
 * XREFs of ?EmitUpdateCommands@CRemoteRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D7BB0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_41f1787fde8975ad5924dff52018d283___ @ 0x1C00D7C5C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_41f1787fde8975ad5924dff52018d28.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b75bbc071444fba6e92adc8089f4759a___ @ 0x1C00D7CD0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b75bbc071444fba6e92adc8089f4759.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_21a7d29ec2857457060d29d08aa0f719___ @ 0x1C00D7D54 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_21a7d29ec2857457060d29d08aa0f71.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3366ae8fc2808336674c1b10d244b88a___ @ 0x1C0265FE8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3366ae8fc2808336674c1b10d244b88.c)
 */

char __fastcall DirectComposition::CRemoteRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CRemoteRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_41f1787fde8975ad5924dff52018d283___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_21a7d29ec2857457060d29d08aa0f719___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b75bbc071444fba6e92adc8089f4759a___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3366ae8fc2808336674c1b10d244b88a___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  return 1;
}

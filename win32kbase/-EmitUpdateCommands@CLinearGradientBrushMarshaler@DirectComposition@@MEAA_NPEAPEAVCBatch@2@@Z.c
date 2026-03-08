/*
 * XREFs of ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AA5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AA64C (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5922485c3f91bc1b2df0ec0813fc30a5___ @ 0x1C00AA850 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5922485c3f91bc1b2df0ec0813fc30a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ca98c65f0a9da091ad494ff58c7bb461___ @ 0x1C00AA938 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ca98c65f0a9da091ad494ff58c7bb46.c)
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CLinearGradientBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ca98c65f0a9da091ad494ff58c7bb461___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5922485c3f91bc1b2df0ec0813fc30a5___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
  }
  if ( DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(this, a2) )
    return 1;
  return v3;
}

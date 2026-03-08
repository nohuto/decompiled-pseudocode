/*
 * XREFs of ?EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02539F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AA64C (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5c5007ec3893961da529f7dc53bef9f5___ @ 0x1C0253890 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5c5007ec3893961da529f7dc53bef9f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_758d646b7318cb107400d278b3f5dc2e___ @ 0x1C0253904 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_758d646b7318cb107400d278b3f5dc2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af4543a610b17e58df63bc52b09796d8___ @ 0x1C025397C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_af4543a610b17e58df63bc52b09796d.c)
 */

char __fastcall DirectComposition::CRadialGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CRadialGradientBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CRadialGradientBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af4543a610b17e58df63bc52b09796d8___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5c5007ec3893961da529f7dc53bef9f5___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x1000) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_758d646b7318cb107400d278b3f5dc2e___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  if ( DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
    return 1;
  return v3;
}

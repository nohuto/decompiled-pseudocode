/*
 * XREFs of ?EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2970 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9667edbf153d1ec1997082271e41d1a7___ @ 0x1C0269598 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9667edbf153d1ec1997082271e41d1a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b8dba259dab38695fff82fd813a044bb___ @ 0x1C0269610 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b8dba259dab38695fff82fd813a044b.c)
 */

char __fastcall DirectComposition::CCompositionAmbientLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionAmbientLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionAmbientLightMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9667edbf153d1ec1997082271e41d1a7___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b8dba259dab38695fff82fd813a044bb___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    return 1;
  }
  return v4;
}

/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B700
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d4e8820683d0a94d2ead0dc442d0740___ @ 0x1C000B7AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2d4e8820683d0a94d2ead0dc442d074.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bc0964baec02da416b180279ea9fa949___ @ 0x1C000B830 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bc0964baec02da416b180279ea9fa94.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061EBC (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1960582ff04ffdff84be79454f8cdabe___ @ 0x1C026DAD8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1960582ff04ffdff84be79454f8cdab.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a6852aab8d41fdc04b041f021038f625___ @ 0x1C026DB5C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a6852aab8d41fdc04b041f021038f62.c)
 */

char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProjectedShadowCasterMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bc0964baec02da416b180279ea9fa949___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d4e8820683d0a94d2ead0dc442d0740___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a6852aab8d41fdc04b041f021038f625___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1960582ff04ffdff84be79454f8cdabe___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    return 1;
  }
  return v4;
}

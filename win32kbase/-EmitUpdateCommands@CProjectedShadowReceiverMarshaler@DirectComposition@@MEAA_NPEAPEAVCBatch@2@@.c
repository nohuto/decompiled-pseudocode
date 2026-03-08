/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowReceiverMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CBE0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_93f00451d229db504863bbd188ea0112___ @ 0x1C000CC64 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_93f00451d229db504863bbd188ea011.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061EBC (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2646d8dfdaeffa67c2bd0b1cb7e2cfaf___ @ 0x1C026DC2C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2646d8dfdaeffa67c2bd0b1cb7e2cfa.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d975dd13ea6294e845b115a50e80167___ @ 0x1C026DCB0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2d975dd13ea6294e845b115a50e8016.c)
 */

char __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProjectedShadowReceiverMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2646d8dfdaeffa67c2bd0b1cb7e2cfaf___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d975dd13ea6294e845b115a50e80167___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) == 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_93f00451d229db504863bbd188ea0112___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) &= ~0x200u;
      return 1;
    }
  }
  return v4;
}

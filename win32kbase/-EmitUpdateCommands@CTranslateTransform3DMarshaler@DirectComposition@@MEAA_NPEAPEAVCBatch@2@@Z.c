/*
 * XREFs of ?EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061EBC (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOffsetXCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257B8C (-EmitSetOffsetXCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOffsetYCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257C6C (-EmitSetOffsetYCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOffsetZCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257D4C (-EmitSetOffsetZCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 */

char __fastcall DirectComposition::CTranslateTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CTranslateTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetXCommand(this, a2)
    && DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetYCommand(this, a2) )
  {
    return DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetZCommand(this, a2) != 0;
  }
  return v4;
}

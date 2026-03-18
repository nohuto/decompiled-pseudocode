/*
 * XREFs of ?EmitUpdateCommands@CTranslateTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0225780
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0010F54 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOffsetXCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0222C94 (-EmitSetOffsetXCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOffsetYCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0222D74 (-EmitSetOffsetYCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CTranslateTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CTranslateTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CTranslateTransformMarshaler::EmitSetOffsetXCommand(this, a2) )
  {
    return DirectComposition::CTranslateTransformMarshaler::EmitSetOffsetYCommand(this, a2) != 0;
  }
  return v4;
}

/*
 * XREFs of ?EmitUpdateCommands@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0226F80
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0096D50 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreate@CHolographicCompositionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0226E88 (-EmitCreate@CHolographicCompositionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetQualityLevel@CHolographicCompositionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0226F08 (-EmitSetQualityLevel@CHolographicCompositionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CHolographicCompositionMarshaler::EmitCreate(this, a2) )
  {
    return DirectComposition::CHolographicCompositionMarshaler::EmitSetQualityLevel(this, a2) != 0;
  }
  return v4;
}

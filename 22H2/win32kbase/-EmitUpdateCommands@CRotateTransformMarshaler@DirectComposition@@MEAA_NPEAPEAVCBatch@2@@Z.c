/*
 * XREFs of ?EmitUpdateCommands@CRotateTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021C110
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00293EC (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAngleCommand@CRotateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216498 (-EmitSetAngleCommand@CRotateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterXCommand@CRotateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216CF0 (-EmitSetCenterXCommand@CRotateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CRotateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216EB0 (-EmitSetCenterYCommand@CRotateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRotateTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CRotateTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CRotateTransformMarshaler::EmitSetAngleCommand(this, a2)
    && DirectComposition::CRotateTransformMarshaler::EmitSetCenterXCommand(this, a2) )
  {
    return DirectComposition::CRotateTransformMarshaler::EmitSetCenterYCommand(this, a2) != 0;
  }
  return v4;
}

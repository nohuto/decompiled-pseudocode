/*
 * XREFs of ?EmitUpdateCommands@CVisualBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetVisualCommand@CVisualBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259BB0 (-EmitSetVisualCommand@CVisualBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CVisualBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualBitmapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  return DirectComposition::CVisualBitmapMarshaler::EmitSetVisualCommand(this, a2) != 0;
}

/*
 * XREFs of ?EmitUpdateCommands@CSceneModelTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetTransformCommand@CSceneModelTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02597D8 (-EmitSetTransformCommand@CSceneModelTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 */

bool __fastcall DirectComposition::CSceneModelTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneModelTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  return DirectComposition::CSceneModelTransformMarshaler::EmitSetTransformCommand(this, a2) != 0;
}

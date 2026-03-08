/*
 * XREFs of ?EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0262680
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitTransform@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0262528 (-EmitTransform@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdate@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02625C0 (-EmitUpdate@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSnapshotMarshaler::EmitUpdateCommands(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSnapshotMarshaler::EmitUpdate(this, a2) )
    return DirectComposition::CSnapshotMarshaler::EmitTransform(this, a2) != 0;
  return v4;
}

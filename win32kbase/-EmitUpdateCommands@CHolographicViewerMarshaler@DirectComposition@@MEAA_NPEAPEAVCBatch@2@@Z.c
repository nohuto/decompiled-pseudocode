/*
 * XREFs of ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265A98 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265C1C (-EmitUpdateFlags@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateTargetFrameRate@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265C80 (-EmitUpdateTargetFrameRate@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@.c)
 */

bool __fastcall DirectComposition::CHolographicViewerMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CHolographicViewerMarshaler::EmitInitialize(this, (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CHolographicViewerMarshaler::EmitUpdateTargetFrameRate(this, a2) )
  {
    return DirectComposition::CHolographicViewerMarshaler::EmitUpdateFlags(this, a2);
  }
  return v4;
}

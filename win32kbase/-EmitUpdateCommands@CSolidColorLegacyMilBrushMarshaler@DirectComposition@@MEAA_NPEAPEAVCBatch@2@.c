/*
 * XREFs of ?EmitUpdateCommands@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025AF80
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetColorCommand@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0255AC0 (-EmitSetColorCommand@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A218 (-EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CSolidColorLegacyMilBrushMarshaler::EmitSetColorCommand(this, a2) != 0;
  return v4;
}

/*
 * XREFs of ?EmitUpdateCommands@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264B30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5668 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreate@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02649CC (-EmitCreate@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDebugOverlayFlags@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264A44 (-EmitDebugOverlayFlags@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitFlags@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264AB4 (-EmitFlags@CHolographicDisplayMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CHolographicDisplayMarshaler::EmitCreate(this, a2)
    && DirectComposition::CHolographicDisplayMarshaler::EmitFlags(this, a2) )
  {
    return DirectComposition::CHolographicDisplayMarshaler::EmitDebugOverlayFlags(this, a2) != 0;
  }
  return v4;
}

/*
 * XREFs of ?EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224770
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C021B59C (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetDirtyFromAccumulationCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02210FC (-EmitSetDirtyFromAccumulationCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetMarginsCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0221C90 (-EmitSetMarginsCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPixelFormatCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223248 (-EmitSetPixelFormatCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSurfaceCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223BBC (-EmitSetSurfaceCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 8,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         521,
         522,
         0x10uLL)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetPixelFormatCommand(this, a2)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetDirtyFromAccumulationCommand(this, a2)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetSurfaceCommand(this, a2) )
  {
    return DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetMarginsCommand(this, a2) != 0;
  }
  return v4;
}

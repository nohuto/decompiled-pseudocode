/*
 * XREFs of ?EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A930
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005E420 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0252828 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 */

char __fastcall DirectComposition::CRegionGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CMarshaledArrayBase::Marshal(
             (_QWORD *)this + 12,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             2048,
             609,
             610,
             0x10uLL);
  return v4;
}

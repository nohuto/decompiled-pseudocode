/*
 * XREFs of ?EmitUpdateCommands@CMeshGeometry2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0252828 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetOpacityCommand@CMeshGeometry2DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257F1C (-EmitSetOpacityCommand@CMeshGeometry2DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CMeshGeometry2DMarshaler::EmitUpdateCommands(
        DirectComposition::CMeshGeometry2DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CMeshGeometry2DMarshaler::EmitSetOpacityCommand(this, a2)
    && DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 8,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         64,
         542,
         543,
         0xCuLL)
    && DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 11,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         128,
         544,
         545,
         0x10uLL) )
  {
    return DirectComposition::CMarshaledArrayBase::Marshal(
             (_QWORD *)this + 14,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             256,
             546,
             547,
             4uLL);
  }
  return v4;
}

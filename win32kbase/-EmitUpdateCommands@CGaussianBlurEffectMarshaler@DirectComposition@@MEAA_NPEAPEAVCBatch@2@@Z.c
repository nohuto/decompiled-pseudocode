/*
 * XREFs of ?EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitData@CGaussianBlurEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024D140 (-EmitData@CGaussianBlurEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C024D684 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CGaussianBlurEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CGaussianBlurEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CEffectInputSet::EmitUpdateCommands(
                          (char *)this + 72,
                          a2,
                          *((unsigned int *)this + 8),
                          a2) )
    return DirectComposition::CGaussianBlurEffectMarshaler::EmitData(this, a2) != 0;
  return v4;
}

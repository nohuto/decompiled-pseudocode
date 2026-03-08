/*
 * XREFs of ??$UnRegisterNotifiers@VCBaseExpression@@@CResource@@QEAAXPEAV?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@@Z @ 0x18001DCA4
 * Callers:
 *     ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x18001DB2C (-SetOrAppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResourc.c)
 *     ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x18001DC4C (--1-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

struct CResource **__fastcall CResource::UnRegisterNotifiers<CBaseExpression>(CResource *this, struct CResource ***a2)
{
  struct CResource **v2; // rsi
  struct CResource **i; // rdi
  struct CResource **result; // rax

  v2 = a2[1];
  for ( i = *a2; i != v2; ++i )
    CResource::UnRegisterNotifierInternal(this, *i);
  result = *a2;
  a2[1] = *a2;
  return result;
}

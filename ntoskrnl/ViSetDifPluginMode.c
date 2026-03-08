/*
 * XREFs of ViSetDifPluginMode @ 0x140ABA460
 * Callers:
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 * Callees:
 *     VfUtilSetRuleClass @ 0x1405CBF3C (VfUtilSetRuleClass.c)
 */

void ViSetDifPluginMode()
{
  if ( (VfRuleClasses & 0x20000) != 0
    || (VfRuleClasses & 1) != 0
    || (VfRuleClasses & 8) != 0
    || (VfRuleClasses & 0x100) != 0
    || (VfRuleClasses & 0x800) != 0
    || (VfRuleClasses & 0x10) != 0
    || (VfRuleClasses & 2) != 0
    || (VfRuleClasses & 0x20) != 0
    || (VfRuleClasses & 0x80u) != 0LL
    || (VfRuleClasses & 0x200000000LL) != 0
    || (VfRuleClasses & 0x40000) != 0
    || (VfRuleClasses & 0x8000) != 0
    || (VfRuleClasses & 0x80000) != 0
    || (VfRuleClasses & 0x400000) != 0
    || (VfRuleClasses & 0x800000) != 0 )
  {
    VfUtilSetRuleClass();
  }
}

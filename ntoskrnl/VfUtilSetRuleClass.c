/*
 * XREFs of VfUtilSetRuleClass @ 0x1405CBF3C
 * Callers:
 *     ViSetDifPluginMode @ 0x140ABA460 (ViSetDifPluginMode.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADABEC (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void VfUtilSetRuleClass()
{
  HIDWORD(VfRuleClasses) |= 8u;
}

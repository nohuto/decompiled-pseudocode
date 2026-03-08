/*
 * XREFs of DifSetPluginRunningWithoutReboot @ 0x1405D2FE0
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140ADAA7C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADABEC (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     <none>
 */

void __fastcall DifSetPluginRunningWithoutReboot(char a1)
{
  DifIsVolatileMode = a1;
}

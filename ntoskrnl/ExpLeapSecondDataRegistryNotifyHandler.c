/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1409F4E70
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x140850DB4 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}

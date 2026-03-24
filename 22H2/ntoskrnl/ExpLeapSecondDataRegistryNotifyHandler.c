/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x14094B930
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x1407A95E8 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}

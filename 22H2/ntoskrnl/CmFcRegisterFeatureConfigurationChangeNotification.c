/*
 * XREFs of CmFcRegisterFeatureConfigurationChangeNotification @ 0x14086B1B0
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058E0A0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087DB8C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall CmFcRegisterFeatureConfigurationChangeNotification(int a1, int a2, int a3, __int64 a4)
{
  return CmFcManagerRegisterFeatureConfigurationChangeNotification(a1, a1, a2, a3, a4);
}

/*
 * XREFs of CmFcRegisterFeatureConfigurationChangeNotification @ 0x140818CC4
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140388D20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140818CE8 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall CmFcRegisterFeatureConfigurationChangeNotification(int a1, int a2, int a3, __int64 a4)
{
  return CmFcManagerRegisterFeatureConfigurationChangeNotification(a1, a1, a2, a3, a4);
}

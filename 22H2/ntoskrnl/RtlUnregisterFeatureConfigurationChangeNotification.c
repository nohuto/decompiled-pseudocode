/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1409190C0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x14087DC84 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

void __fastcall RtlUnregisterFeatureConfigurationChangeNotification(struct _EX_RUNDOWN_REF *a1)
{
  CmFcManagerUnregisterFeatureConfigurationChangeNotification((__int64)a1, a1);
}

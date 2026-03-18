/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1409B5F30
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140922CE4 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

void __fastcall RtlUnregisterFeatureConfigurationChangeNotification(struct _EX_RUNDOWN_REF *a1)
{
  CmFcManagerUnregisterFeatureConfigurationChangeNotification((__int64)a1, a1);
}

/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x14058E0A0
 * Callers:
 *     wil_RegisterFeatureStagingChangeNotification @ 0x1405CC564 (wil_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14025EDF0 (ObGetCurrentIrql.c)
 *     KeIsBugCheckActive @ 0x14039A3FC (KeIsBugCheckActive.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14086B1B0 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  char v8; // cl
  ULONG_PTR v9; // r10
  ULONG_PTR BugCheckParameter4; // [rsp+38h] [rbp+0h]

  if ( ObGetCurrentIrql() <= 1u )
    return CmFcRegisterFeatureConfigurationChangeNotification(
             Callback,
             Context,
             ObservedChangeStamp,
             RegistrationHandle);
  if ( !KeIsBugCheckActive(0LL) && PoPowerDownActionInProgress == v8 )
    KeBugCheckEx(0xAu, (ULONG_PTR)RtlQueryFeatureConfiguration, v9, 0LL, BugCheckParameter4);
  return -1073741637;
}

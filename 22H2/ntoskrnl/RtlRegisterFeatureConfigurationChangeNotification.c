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

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // cl
  ULONG_PTR v9; // r10
  ULONG_PTR BugCheckParameter4; // [rsp+38h] [rbp+0h]

  if ( ObGetCurrentIrql() <= 1u )
    return CmFcRegisterFeatureConfigurationChangeNotification(a1, a2, a3, a4);
  if ( !KeIsBugCheckActive(0LL) && PoPowerDownActionInProgress == v8 )
    KeBugCheckEx(0xAu, (ULONG_PTR)RtlQueryFeatureConfiguration, v9, 0LL, BugCheckParameter4);
  return 3221225659LL;
}

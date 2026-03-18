/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1403C7A30
 * Callers:
 *     CmInitSystem0 @ 0x140B131D4 (CmInitSystem0.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14083332C (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( ObGetCurrentIrql() && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 3221225659LL;
  else
    return CmFcRegisterFeatureConfigurationChangeNotification(a1, a2, a3, a4);
}

/*
 * XREFs of Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledFallback @ 0x1C0019C24
 * Callers:
 *     Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage @ 0x1C0019BEC (Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C001A424 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_SystemBugcheckAfterStressTest__private_descriptor);
}

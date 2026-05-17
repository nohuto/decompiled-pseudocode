/*
 * XREFs of Feature_SearchPackagePaths__private_IsEnabledFallback @ 0x18009BC88
 * Callers:
 *     Feature_SearchPackagePaths__private_IsEnabledDeviceUsage @ 0x18009BC60 (Feature_SearchPackagePaths__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Feature_SearchPackagePaths__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2);
}

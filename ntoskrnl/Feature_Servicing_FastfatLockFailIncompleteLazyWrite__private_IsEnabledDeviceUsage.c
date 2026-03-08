/*
 * XREFs of Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledDeviceUsage @ 0x140409ECC
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403CEA10 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 * Callees:
 *     Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledFallback @ 0x140409F04 (Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_featureState & 0x10) != 0 )
    return Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_featureState & 1;
  else
    return Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_featureState,
             3LL);
}

/*
 * XREFs of Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage @ 0x1403F0C30
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x1403F1040 (IopCopyCompleteReadRequest.c)
 * Callees:
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback @ 0x1403F0C68 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CopyFileMoveFileEventLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CopyFileMoveFileEventLeak__private_featureState & 1;
  else
    return Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CopyFileMoveFileEventLeak__private_featureState,
             3LL);
}

/*
 * XREFs of Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage @ 0x1C012D678
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     Feature_DropHtTransparentOffThread__private_IsEnabledFallback @ 0x1C012D6B0 (Feature_DropHtTransparentOffThread__private_IsEnabledFallback.c)
 */

__int64 Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DropHtTransparentOffThread__private_featureState & 0x10) != 0 )
    return Feature_DropHtTransparentOffThread__private_featureState & 1;
  else
    return Feature_DropHtTransparentOffThread__private_IsEnabledFallback(
             (unsigned int)Feature_DropHtTransparentOffThread__private_featureState,
             3LL);
}

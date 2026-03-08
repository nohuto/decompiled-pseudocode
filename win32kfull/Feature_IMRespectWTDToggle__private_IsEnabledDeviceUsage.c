/*
 * XREFs of Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C012D6CC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C012D704 (Feature_IMRespectWTDToggle__private_IsEnabledFallback.c)
 */

__int64 Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage()
{
  if ( (Feature_IMRespectWTDToggle__private_featureState & 0x10) != 0 )
    return Feature_IMRespectWTDToggle__private_featureState & 1;
  else
    return Feature_IMRespectWTDToggle__private_IsEnabledFallback(
             (unsigned int)Feature_IMRespectWTDToggle__private_featureState,
             3LL);
}

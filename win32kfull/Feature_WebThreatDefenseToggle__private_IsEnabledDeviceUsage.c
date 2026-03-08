/*
 * XREFs of Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C012D774
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     Feature_WebThreatDefenseToggle__private_IsEnabledFallback @ 0x1C012D7AC (Feature_WebThreatDefenseToggle__private_IsEnabledFallback.c)
 */

__int64 Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) != 0 )
    return Feature_WebThreatDefenseToggle__private_featureState & 1;
  else
    return Feature_WebThreatDefenseToggle__private_IsEnabledFallback(
             (unsigned int)Feature_WebThreatDefenseToggle__private_featureState,
             3LL);
}

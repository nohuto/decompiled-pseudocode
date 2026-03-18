/*
 * XREFs of GetPenDoubleClickTime @ 0x1C01F3A04
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0049950 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenDoubleClickTime()
{
  __int64 v0; // rcx
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *(unsigned int *)(SGDGetUserSessionState(v0) + 14360);
  result = *((unsigned int *)off_1C0354038 + 11);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C0354038 + 10);
  return result;
}

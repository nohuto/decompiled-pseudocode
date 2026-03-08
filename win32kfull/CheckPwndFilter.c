/*
 * XREFs of CheckPwndFilter @ 0x1C00E10D0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01C61D4 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     _IsChild @ 0x1C00164BC (_IsChild.c)
 */

__int64 __fastcall CheckPwndFilter(__int64 a1, __int64 a2)
{
  if ( !a2 || a2 == a1 || a2 == 1 && !a1 )
    return 1LL;
  else
    return IsChild(a2, a1);
}

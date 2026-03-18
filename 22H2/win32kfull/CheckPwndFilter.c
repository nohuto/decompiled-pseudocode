/*
 * XREFs of CheckPwndFilter @ 0x1C00AA000
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01C5070 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     _IsChild @ 0x1C0016C4C (_IsChild.c)
 */

__int64 __fastcall CheckPwndFilter(__int64 a1, __int64 a2)
{
  if ( !a2 || a2 == a1 || a2 == 1 && !a1 )
    return 1LL;
  else
    return IsChild(a2, a1);
}

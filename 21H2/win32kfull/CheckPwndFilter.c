/*
 * XREFs of CheckPwndFilter @ 0x1C005C1A8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DoTimer @ 0x1C005BF94 (DoTimer.c)
 *     xxxDoPaint @ 0x1C005C838 (xxxDoPaint.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01EB168 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     _IsChild @ 0x1C011631C (_IsChild.c)
 */

__int64 __fastcall CheckPwndFilter(__int64 a1, __int64 a2)
{
  if ( !a2 || a2 == a1 || a2 == 1 && !a1 )
    return 1LL;
  else
    return IsChild(a2, a1);
}

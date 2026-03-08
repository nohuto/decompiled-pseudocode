/*
 * XREFs of ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01436FA
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01B7B10 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

__int64 __fastcall GetMiPWindowFlags(struct tagWND *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return GetProp((__int64)a1, gatomMiPFlags, 1u);
  return result;
}

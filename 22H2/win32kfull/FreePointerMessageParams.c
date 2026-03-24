/*
 * XREFs of FreePointerMessageParams @ 0x1C01EF458
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0057C00 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     FreeQEntry @ 0x1C0065CB8 (FreeQEntry.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C010D500 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreePointerMessageParams(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) != 595 )
  {
    v1 = 2LL;
    if ( *(_DWORD *)(a1 + 96) )
      v1 = 3LL;
    return CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(a1 + 40), v1, a1);
  }
  return result;
}

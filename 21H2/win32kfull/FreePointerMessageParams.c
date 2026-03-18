/*
 * XREFs of FreePointerMessageParams @ 0x1C01EA2A8
 * Callers:
 *     FreeQEntry @ 0x1C0002D54 (FreeQEntry.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0057600 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
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

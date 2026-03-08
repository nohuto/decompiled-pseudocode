/*
 * XREFs of HdlspSendStringAtBaud @ 0x140AE8474
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140AE6D84 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140AE75C4 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140AE7690 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140AE8194 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140AE830C (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140AE83D0 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1406771D8 (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1, __int64 a2, __int64 a3)
{
  char result; // al
  _BYTE *v4; // rbx

  result = *a1;
  v4 = a1;
  while ( result )
  {
    LOBYTE(a2) = result;
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14), a2, a3);
    result = *++v4;
  }
  return result;
}

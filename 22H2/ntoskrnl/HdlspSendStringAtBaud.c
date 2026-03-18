/*
 * XREFs of HdlspSendStringAtBaud @ 0x140AEC474
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140AEAD84 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140AEAEB0 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140AEB5C4 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140AEB690 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140AEC194 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140AEC30C (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140AEC3D0 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x140679828 (InbvPortPutByte.c)
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

/*
 * XREFs of HdlspSendStringAtBaud @ 0x1409F0350
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1409EED54 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1409EEE80 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x1409EF52C (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1409EF5F8 (HdlspGetLine.c)
 *     HdlspPutString @ 0x1409F00C0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x1409F01E8 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x1409F02AC (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1405C9E2C (InbvPortPutByte.c)
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

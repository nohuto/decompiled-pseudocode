/*
 * XREFs of HdlspEnableTerminal @ 0x140AE75C4
 * Callers:
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 *     HeadlessInit @ 0x140B484E0 (HeadlessInit.c)
 * Callees:
 *     InbvPortInitialize @ 0x14067701C (InbvPortInitialize.c)
 *     InbvPortTerminate @ 0x140677218 (InbvPortTerminate.c)
 *     HdlspSendStringAtBaud @ 0x140AE8474 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspEnableTerminal(char a1)
{
  unsigned int v1; // edx
  char v2; // r8
  int v3; // ecx
  PKSPIN_LOCK v4; // rax
  __int64 v6; // r8

  if ( a1 == 1 )
  {
    v1 = *((_DWORD *)HeadlessGlobals + 12);
    if ( (v1 & 1) == 0 )
    {
      v2 = *((_BYTE *)HeadlessGlobals + 116);
      if ( !v2 || (v1 & 2) == 0 )
      {
        v3 = (unsigned __int8)InbvPortInitialize(
                                *((_DWORD *)HeadlessGlobals + 13),
                                (v1 >> 9) & 7,
                                HeadlessGlobals[8],
                                (_DWORD *)HeadlessGlobals + 14,
                                v2,
                                *((_BYTE *)HeadlessGlobals + 85),
                                *((_BYTE *)HeadlessGlobals + 86),
                                *((_BYTE *)HeadlessGlobals + 87));
        v4 = HeadlessGlobals;
        *((_DWORD *)HeadlessGlobals + 12) ^= (*((_DWORD *)HeadlessGlobals + 12) ^ v3) & 1;
        if ( (v4[6] & 1) == 0 )
          return 3221225473LL;
        HdlspSendStringAtBaud("\x1B[2J");
        HdlspSendStringAtBaud("\x1B[H");
      }
    }
  }
  else if ( !a1 )
  {
    InbvPortTerminate(*((_DWORD *)HeadlessGlobals + 14));
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 48) &= ~1u;
  }
  return 0LL;
}

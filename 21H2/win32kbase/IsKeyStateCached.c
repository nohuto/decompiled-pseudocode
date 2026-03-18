/*
 * XREFs of IsKeyStateCached @ 0x1C002CFA0
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetKeyState @ 0x1C002CDC0 (NtUserGetKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C0030120 (NtUserGetKeyboardState.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsKeyStateCached(unsigned __int8 a1)
{
  int v1; // edx
  _BYTE *i; // rax

  if ( a1 >= 0x20u )
  {
    v1 = 0;
    for ( i = &unk_1C02533C8; *i != a1; ++i )
    {
      if ( (unsigned int)++v1 >= 0xE )
        return a1 >= 0x5Bu && (a1 <= 0x5Cu || (unsigned __int8)(a1 + 96) <= 5u);
    }
  }
  return 1;
}

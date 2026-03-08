/*
 * XREFs of ApiSetEditionPostKeyboardInputMessage @ 0x1C02419A0
 * Callers:
 *     NtUserPostKeyboardInputMessage @ 0x1C0175720 (NtUserPostKeyboardInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     EditionPostKeyboardInputMessage @ 0x1C0271CB0 (EditionPostKeyboardInputMessage.c)
 */

__int64 __fastcall ApiSetEditionPostKeyboardInputMessage(
        int a1,
        char a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6,
        __int16 a7,
        int a8,
        __int16 a9,
        __int64 a10)
{
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // r8d

  v13 = -1073741637;
  if ( qword_1C02D7F80 && (int)qword_1C02D7F80() >= 0 )
  {
    LOBYTE(v14) = a2;
    return (unsigned int)EditionPostKeyboardInputMessage(a1, v14, v15, a4, a5, a6, a7, a8, a9, a10);
  }
  return v13;
}

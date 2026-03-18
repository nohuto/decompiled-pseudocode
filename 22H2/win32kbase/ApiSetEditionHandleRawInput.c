/*
 * XREFs of ApiSetEditionHandleRawInput @ 0x1C0206660
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     EditionHandleRawInput @ 0x1C00B06B0 (EditionHandleRawInput.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleRawInput(
        unsigned int a1,
        unsigned int a2,
        char a3,
        char a4,
        int a5,
        __int64 a6,
        __int16 a7,
        unsigned __int16 a8,
        int a9,
        __int64 a10)
{
  unsigned int v10; // ebx
  __int64 v15; // r8

  v10 = 0;
  if ( qword_1C0296740 && (int)qword_1C0296740() >= 0 )
  {
    LOBYTE(v15) = a3;
    return (unsigned int)EditionHandleRawInput(a1, a2, v15, a4, a5, a6, a7, a8, a9, a10);
  }
  return v10;
}

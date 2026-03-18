/*
 * XREFs of ApiSetEditionKeyEventLLHook @ 0x1C006B208
 * Callers:
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 * Callees:
 *     EditionKeyEventLLHook @ 0x1C00B0040 (EditionKeyEventLLHook.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionKeyEventLLHook(
        int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        int a4,
        char a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  unsigned int v12; // ebx

  v12 = 0;
  if ( qword_1C0296760 && (int)qword_1C0296760() >= 0 )
    return (unsigned int)EditionKeyEventLLHook(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return v12;
}

/*
 * XREFs of ApiSetEditionIsSAS @ 0x1C0206B2C
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00B4C60 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsSAS(char a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( qword_1C02966F0 && (int)qword_1C02966F0() >= 0 && qword_1C02966F8 )
  {
    LOBYTE(v5) = a1;
    return (unsigned int)qword_1C02966F8(v5, a2);
  }
  return v2;
}

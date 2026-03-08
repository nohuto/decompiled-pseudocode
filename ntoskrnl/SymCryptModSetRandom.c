/*
 * XREFs of SymCryptModSetRandom @ 0x1403F3DE4
 * Callers:
 *     SymCryptEcpointGenericSetRandom @ 0x1403F8750 (SymCryptEcpointGenericSetRandom.c)
 * Callees:
 *     SymCryptFdefModSetRandomGeneric @ 0x1403FF2CC (SymCryptFdefModSetRandomGeneric.c)
 */

void __fastcall __noreturn SymCryptModSetRandom(int a1, int a2, int a3, int a4, __int64 a5)
{
  SymCryptFdefModSetRandomGeneric(a1, a2, a3, a4, a5);
}

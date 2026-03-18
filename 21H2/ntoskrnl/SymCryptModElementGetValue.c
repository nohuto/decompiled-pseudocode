/*
 * XREFs of SymCryptModElementGetValue @ 0x140400F64
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGetValue @ 0x140406980 (SymCryptEcpointGetValue.c)
 * Callees:
 *     SymCryptFdefModElementGetValue @ 0x14040BAF8 (SymCryptFdefModElementGetValue.c)
 */

__int64 __fastcall SymCryptModElementGetValue(int a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  return SymCryptFdefModElementGetValue(a1, a2, a3, a4, a5, a6, a7);
}

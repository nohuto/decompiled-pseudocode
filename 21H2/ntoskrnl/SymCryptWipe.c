/*
 * XREFs of SymCryptWipe @ 0x1403EF7A4
 * Callers:
 *     SymCryptSha256Result @ 0x1403EDB90 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1403EF3A0 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1403EF430 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403EF4B0 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1403EF7BC (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EFA6C (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1403EF520 (SymCryptWipeAsm.c)
 */

__int64 __fastcall SymCryptWipe(__int64 a1, unsigned __int64 a2)
{
  return SymCryptWipeAsm(a1, a2);
}

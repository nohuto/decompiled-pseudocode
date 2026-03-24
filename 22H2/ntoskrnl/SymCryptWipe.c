/*
 * XREFs of SymCryptWipe @ 0x1403EEF34
 * Callers:
 *     SymCryptSha256Result @ 0x1403ED320 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1403EEB30 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1403EEBC0 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403EEC40 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1403EEF4C (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EF1FC (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1403EECB0 (SymCryptWipeAsm.c)
 */

__int64 __fastcall SymCryptWipe(__int64 a1, unsigned __int64 a2)
{
  return SymCryptWipeAsm(a1, a2);
}

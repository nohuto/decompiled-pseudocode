/*
 * XREFs of MiInitializeCrashDumpPtes @ 0x140A92264
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiInitializeCrashDumpPtes(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4EF40, 0x20u, a3, a4);
  qword_140C4E730 = result;
  return result;
}

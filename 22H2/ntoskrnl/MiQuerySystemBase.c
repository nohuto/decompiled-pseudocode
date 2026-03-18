/*
 * XREFs of MiQuerySystemBase @ 0x14036EA74
 * Callers:
 *     MiInitializeSystemCache @ 0x14085C7EC (MiInitializeSystemCache.c)
 *     MmMarkHiberPhase @ 0x140AACDA0 (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_140C6A5D8[2 * a1];
}

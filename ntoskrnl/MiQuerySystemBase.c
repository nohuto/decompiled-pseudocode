/*
 * XREFs of MiQuerySystemBase @ 0x1403030C4
 * Callers:
 *     MiInitializeSystemCache @ 0x140858B28 (MiInitializeSystemCache.c)
 *     MmMarkHiberPhase @ 0x140AA9B70 (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_140C6A158[2 * a1];
}

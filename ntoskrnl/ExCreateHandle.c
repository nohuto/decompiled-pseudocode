/*
 * XREFs of ExCreateHandle @ 0x1407D8FEC
 * Callers:
 *     PsAssignThreadId @ 0x140352ED4 (PsAssignThreadId.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     ExCreateHandleEx @ 0x1407D8ABC (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}

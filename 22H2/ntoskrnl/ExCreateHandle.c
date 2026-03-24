/*
 * XREFs of ExCreateHandle @ 0x14094C680
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x14071E360 (NtCreateJobObject.c)
 * Callees:
 *     ExCreateHandleEx @ 0x140664860 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}

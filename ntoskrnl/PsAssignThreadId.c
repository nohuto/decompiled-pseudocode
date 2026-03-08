/*
 * XREFs of PsAssignThreadId @ 0x140352ED4
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x140371F1C (KiAllocateDpcDelegateThread.c)
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 * Callees:
 *     ExCreateHandle @ 0x1407D8FEC (ExCreateHandle.c)
 */

__int64 __fastcall PsAssignThreadId(__int64 a1)
{
  __int64 Handle; // rax

  Handle = ExCreateHandle(PspCidTable, a1);
  *(_QWORD *)(a1 + 1232) = Handle;
  return Handle == 0 ? 0xC000009A : 0;
}

/*
 * XREFs of PsAssignThreadId @ 0x1402BEA6C
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x14037716C (KiAllocateDpcDelegateThread.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 * Callees:
 *     ExCreateHandle @ 0x14073FD34 (ExCreateHandle.c)
 */

__int64 __fastcall PsAssignThreadId(__int64 a1)
{
  __int64 Handle; // rax

  Handle = ExCreateHandle(PspCidTable, a1);
  *(_QWORD *)(a1 + 1232) = Handle;
  return Handle == 0 ? 0xC000009A : 0;
}

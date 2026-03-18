/*
 * XREFs of PsAssignThreadId @ 0x1402F3684
 * Callers:
 *     KiStartDpcDelegateThread @ 0x1403C13E4 (KiStartDpcDelegateThread.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 * Callees:
 *     ExCreateHandle @ 0x1407A347C (ExCreateHandle.c)
 */

__int64 __fastcall PsAssignThreadId(__int64 a1)
{
  __int64 Handle; // rax

  Handle = ExCreateHandle(PspCidTable, a1);
  *(_QWORD *)(a1 + 1232) = Handle;
  return Handle == 0 ? 0xC000009A : 0;
}

/*
 * XREFs of FirstEntrySList @ 0x140420450
 * Callers:
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall FirstEntrySList(PSLIST_HEADER SListHead)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)SListHead->Region;
  LOBYTE(result) = (unsigned __int8)result & 0xF0;
  return result;
}

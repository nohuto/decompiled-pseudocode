/*
 * XREFs of PspDeleteKernelStack @ 0x14031BEC0
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1402AB200 (MmDeleteKernelStack.c)
 */

signed __int64 __fastcall PspDeleteKernelStack(__int64 a1, unsigned __int64 *a2)
{
  return MmDeleteKernelStack(*a2, (struct _LIST_ENTRY *)2);
}

/*
 * XREFs of KeSwapProcessOrStack @ 0x140391CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiInSwapKernelStacks @ 0x1402A72E0 (KiInSwapKernelStacks.c)
 *     KiOutSwapKernelStacks @ 0x1402A7380 (KiOutSwapKernelStacks.c)
 *     KiOutSwapProcesses @ 0x1402BFE74 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  _QWORD *v0; // rdx
  int v1; // r8d
  _DWORD *v2; // r9
  signed __int64 *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  *(_QWORD *)&KeSwapProcessOrStackThread = KeGetCurrentThread();
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks();
    v3 = (signed __int64 *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v3 )
      KiOutSwapProcesses(v3);
    v4 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v4 )
      KiInSwapProcesses(v4, v0, v1, v2);
    v5 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    if ( v5 )
      KiInSwapKernelStacks(v5);
  }
}

/*
 * XREFs of ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C001D054
 * Callers:
 *     GreCreateRectRgn @ 0x1C0019F70 (GreCreateRectRgn.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 */

__int64 GrepIsPreviousModeKernel(void)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( (unsigned int)IsThreadCrossSessionAttached() )
    return 1;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return 1;
  v3 = *ThreadWin32Thread;
  if ( !v3 || (*(_DWORD *)(v3 + 328) & 0x10) != 0 )
    return 1;
  return v1;
}

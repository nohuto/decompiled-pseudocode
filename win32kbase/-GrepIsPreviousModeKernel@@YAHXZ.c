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

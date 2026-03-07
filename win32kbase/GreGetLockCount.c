__int64 GreGetLockCount()
{
  __int64 *ThreadWin32Thread; // rax
  __int64 v1; // rax

  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v1 = *ThreadWin32Thread) != 0 )
    return *(unsigned int *)(v1 + 104);
  else
    return 0LL;
}

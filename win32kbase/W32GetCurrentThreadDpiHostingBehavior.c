__int64 W32GetCurrentThreadDpiHostingBehavior()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v3; // rcx

  v0 = 0;
  v1 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v1 = *ThreadWin32Thread;
  if ( v1 )
  {
    v3 = *(_DWORD **)(v1 + 368);
    if ( v3 )
    {
      if ( v3[1] )
      {
        if ( *v3 <= 1u )
          *(_DWORD *)(v1 + 344) = *v3;
        v3[1] = 0;
      }
      return *(unsigned int *)(v1 + 344);
    }
  }
  return v0;
}

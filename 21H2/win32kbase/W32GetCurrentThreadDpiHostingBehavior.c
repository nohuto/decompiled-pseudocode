/*
 * XREFs of W32GetCurrentThreadDpiHostingBehavior @ 0x1C009AC30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 W32GetCurrentThreadDpiHostingBehavior()
{
  __int64 ThreadWin32Thread; // rcx
  __int64 result; // rax
  _DWORD *v2; // rdx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = 0LL;
  if ( ThreadWin32Thread )
  {
    v2 = *(_DWORD **)(ThreadWin32Thread + 368);
    if ( v2 )
    {
      if ( v2[1] )
      {
        if ( *v2 <= 1u )
          *(_DWORD *)(ThreadWin32Thread + 344) = *v2;
        v2[1] = 0;
      }
      return *(unsigned int *)(ThreadWin32Thread + 344);
    }
  }
  return result;
}

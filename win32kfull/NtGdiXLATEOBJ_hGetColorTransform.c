struct UMPDOBJ *__fastcall NtGdiXLATEOBJ_hGetColorTransform(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  struct UMPDOBJ *v4; // rbx
  BRUSHOBJ *v5; // rax
  HANDLE ColorTransform; // r9

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = result;
  if ( result )
  {
    ++*((_DWORD *)result + 105);
    v5 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)result, a1);
    if ( v5 )
      ColorTransform = BRUSHOBJ_hGetColorTransform(v5);
    --*((_DWORD *)v4 + 105);
    return (struct UMPDOBJ *)ColorTransform;
  }
  return result;
}

struct UMPDOBJ *__fastcall NtGdiBRUSHOBJ_pvGetRbrush(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  struct UMPDOBJ *v4; // rbx
  struct _BRUSHOBJ *v5; // rax
  PVOID RbrushUMPD; // r9

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = result;
  if ( result )
  {
    ++*((_DWORD *)result + 105);
    v5 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)result, a1);
    if ( v5 )
      RbrushUMPD = BRUSHOBJ_pvGetRbrushUMPD(v5);
    --*((_DWORD *)v4 + 105);
    return (struct UMPDOBJ *)RbrushUMPD;
  }
  return result;
}

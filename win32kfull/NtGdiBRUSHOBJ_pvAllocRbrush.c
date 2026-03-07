struct UMPDOBJ *__fastcall NtGdiBRUSHOBJ_pvAllocRbrush(__int64 a1, unsigned int a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  struct UMPDOBJ *v6; // rbx
  struct _BRUSHOBJ *v7; // rax
  PVOID v8; // r9

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = result;
  if ( result )
  {
    ++*((_DWORD *)result + 105);
    v7 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)result, a1);
    if ( v7 )
      v8 = BRUSHOBJ_pvAllocRbrushUMPD(v7, a2);
    --*((_DWORD *)v6 + 105);
    return (struct UMPDOBJ *)v8;
  }
  return result;
}

struct _SURFOBJ *__fastcall NtGdiEngLockSurface(HSURF a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ *result; // rax
  struct DHPDEV__ *v4; // rcx
  struct _SURFOBJ *v5; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = (struct _SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = result;
  if ( result )
  {
    ++HIDWORD(result[5].dhpdev);
    result = UMPDOBJ::LockSurface(v4, a1);
    --HIDWORD(v5[5].dhpdev);
  }
  return result;
}

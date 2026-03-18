/*
 * XREFs of NtGdiEngLockSurface @ 0x1C014DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x1C014DB34 (-LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z.c)
 */

struct _SURFOBJ *__fastcall NtGdiEngLockSurface(HSURF a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  UMPDOBJ *v3; // rcx
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  struct _SURFOBJ *result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  result = 0LL;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    result = UMPDOBJ::LockSurface(v3, a1);
    --*((_DWORD *)ThreadCurrentObj + 105);
  }
  return result;
}

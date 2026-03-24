/*
 * XREFs of ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027C5EC
 * Callers:
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027B734 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C008E5D8 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008E8EC (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 */

void __fastcall DEVLOCKOBJ::vDestructorNULL(DEVLOCKOBJ *this)
{
  int v2; // eax
  __int64 ThreadWin32Thread; // rax
  int v4; // eax
  __int64 v5; // rdx

  DEVLOCKOBJ::bDisposeTrgDcoWorker(this);
  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  else if ( (v2 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  v4 = *((_DWORD *)this + 6);
  if ( (v4 & 8) != 0 )
    *((_DWORD *)this + 6) = v4 & 0xFFFFFFF7;
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v5);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  UntrapAppContainerRenderingWorker(
    (HDC *)this + 13,
    (HSURF *)this + 12,
    (HSURF *)this + 11,
    (const unsigned int *)this + 7);
}

/*
 * XREFs of ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027A1EC
 * Callers:
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027790C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0050FF4 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00510A0 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructorNULL(DEVLOCKOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 ThreadWin32Thread; // rax
  int v8; // eax

  DEVLOCKOBJ::bDisposeTrgDco(this);
  v6 = *((_DWORD *)this + 6);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDecLockCount(v3, v2, v4, v5);
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  else if ( (v6 & 0x800000) != 0 )
  {
    GreDecLockCount(v3, v2, v4, v5);
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = *((_DWORD *)this + 6);
  if ( (v8 & 8) != 0 )
    *((_DWORD *)this + 6) = v8 & 0xFFFFFFF7;
  if ( *((_QWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  UntrapAppContainerRendering((HDC *)this + 9, (HSURF *)this + 8, (HSURF *)this + 7, (unsigned int *)this + 7);
}

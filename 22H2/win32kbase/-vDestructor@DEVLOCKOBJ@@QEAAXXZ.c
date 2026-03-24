/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003C54C
 * Callers:
 *     GreGetNearestColor @ 0x1C0021710 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x1C003B540 (GreGetClipBox.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003C518 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BE880 (pProcessDfbSurfacesInternal.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C013E41C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C0149888 (GreSetMagicColors.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     GreDecLockCount @ 0x1C003ED30 (GreDecLockCount.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  struct _ERESOURCE *v7; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v10; // rax
  __int64 v11; // rax

  v2 = -1073741637;
  if ( qword_1C0255320 )
    v3 = qword_1C0255320();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0255328 )
    qword_1C0255328(this);
  v4 = *((_DWORD *)this + 6);
  if ( (v4 & 0x1000) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
      --*(_DWORD *)(ThreadWin32Thread + 104);
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      v10 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v10 )
      {
        v11 = *v10;
        if ( v11 )
        {
          *(_QWORD *)(v11 + 320) = 0LL;
          *(_QWORD *)(v11 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v4 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion();
    }
  }
  v5 = *((_DWORD *)this + 6);
  if ( (v5 & 8) != 0 )
    *((_DWORD *)this + 6) = v5 & 0xFFFFFFF7;
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v6);
    v7 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion();
    }
  }
  if ( qword_1C0255330 )
    v2 = qword_1C0255330();
  if ( v2 >= 0 )
  {
    if ( qword_1C0255338 )
      qword_1C0255338((char *)this + 104, (char *)this + 96, (char *)this + 88, (char *)this + 28);
  }
}

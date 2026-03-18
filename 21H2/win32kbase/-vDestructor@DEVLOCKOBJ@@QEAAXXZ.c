/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BAA4
 * Callers:
 *     GreGetClipBox @ 0x1C001BC60 (GreGetClipBox.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 *     GreGetNearestColor @ 0x1C0062D20 (GreGetNearestColor.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C016AAA0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C016B0B8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C0175868 (GreSetMagicColors.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this, __int64 a2, int a3)
{
  int v4; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r9
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rax

  if ( qword_1C029B0A0 && (int)qword_1C029B0A0() >= 0 && qword_1C029B0A8 )
    qword_1C029B0A8(this);
  v4 = *((_DWORD *)this + 6);
  if ( (v4 & 0x1000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v6 = *ThreadWin32Thread;
      if ( v6 )
        --*(_DWORD *)(v6 + 104);
    }
    *((_DWORD *)this + 6) &= ~0x1000u;
    v7 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v7 )
    {
      v8 = *v7;
      if ( v8 )
      {
        *(_QWORD *)(v8 + 320) = 0LL;
        *(_QWORD *)(v8 + 312) = 0LL;
      }
    }
  }
  else if ( (v4 & 0x800000) != 0 )
  {
    v12 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v12 )
      --*(_DWORD *)(v12 + 104);
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
  v9 = *((_DWORD *)this + 6);
  if ( (v9 & 8) != 0 )
    *((_DWORD *)this + 6) = v9 & 0xFFFFFFF7;
  v10 = *((_QWORD *)this + 1);
  if ( v10 )
  {
    v11 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( !gbLockEtw
      || (Microsoft_Windows_Win32kEnableBits & 0x10) == 0
      || (McTemplateK0pz_EtwWriteTransfer((_DWORD)v11, (unsigned int)&LockRelease, a3, v10, (__int64)L"hsemDMC"),
          (v11 = (struct _ERESOURCE *)*((_QWORD *)this + 1)) != 0LL) )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion();
    }
  }
  if ( qword_1C029B0B0 && (int)qword_1C029B0B0() >= 0 )
  {
    if ( qword_1C029B0B8 )
      qword_1C029B0B8((char *)this + 104, (char *)this + 96, (char *)this + 88, (char *)this + 28);
  }
}

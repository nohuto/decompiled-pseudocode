/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00B7948
 * Callers:
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C00B6084 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01458A4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008D720 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00B7D98 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00B8014 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, DC **a2)
{
  _QWORD *v2; // r15
  int v5; // esi
  DC *v6; // rdx
  __int64 ThreadWin32Thread; // rax
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edx
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 28) = 1;
  v2 = (_QWORD *)((char *)this + 240);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v5 = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = *(_QWORD *)*a2;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 31, (HSURF *)this + 30, (unsigned int *)this + 29) )
    return 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
  {
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x800000u;
      GreIncLockCount();
    }
    goto LABEL_14;
  }
  *((_QWORD *)this + 2) = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    v5 = 1;
  }
  v6 = *a2;
  v18 = *((_QWORD *)*a2 + 6);
  if ( (**((_DWORD **)v6 + 122) & 1) != 0 || (*((_DWORD *)v6 + 9) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) )
      goto LABEL_9;
    v6 = *a2;
  }
  v13 = *((_QWORD *)v6 + 8);
  *(_QWORD *)this = v13;
  *((_QWORD *)this + 3) = *((_QWORD *)*a2 + 6);
  v14 = v13;
  if ( v5 && v13 == ghsemGreLock )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
    v14 = *(_QWORD *)this;
    v5 = 0;
  }
  GreAcquireSemaphore(v14);
  v15 = 2LL;
  if ( *(_QWORD *)this != ghsemGreLock )
    v15 = 11LL;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v15);
  v16 = *((_DWORD *)this + 28);
  if ( (v16 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
    *((_DWORD *)this + 28) = v16 | 0x200;
LABEL_9:
  if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
    GreIncLockCount();
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  }
  v8 = *((_DWORD *)*a2 + 9);
  if ( (v8 & 0x1000) != 0 && (v8 & 0x4000) == 0 )
  {
    v17 = *((_DWORD *)this + 28);
    if ( (v17 & 0x1000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v17 = *((_DWORD *)this + 28);
    }
    *((_DWORD *)this + 28) = v17 & 0xFFFFFFFE;
LABEL_57:
    if ( v5 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    return 0LL;
  }
LABEL_14:
  v9 = *((_DWORD *)this + 28);
  if ( (v9 & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v9 = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = v9 & 0xFFFFFFFE;
      goto LABEL_57;
    }
  }
  else if ( *((_QWORD *)this + 2) )
  {
    goto LABEL_17;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !DC::bCompute(*a2) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
    *((_DWORD *)this + 28) &= ~1u;
    goto LABEL_57;
  }
LABEL_17:
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_27;
    if ( !*v2 )
      DC::vSetRendering(*a2);
    v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11 = v10;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 312) = (char *)this + 120;
      if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
      {
        *(_DWORD *)(v10 + 328) |= 1u;
        *((_QWORD *)*a2 + 248) = 0LL;
        GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        *(_DWORD *)(v11 + 336) = giVisRgnUniqueness;
        EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
      }
    }
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_27:
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0
    && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 0) )
  {
    *((_DWORD *)this + 28) &= ~1u;
    return 0LL;
  }
  if ( (*((_DWORD *)this + 28) & 0x801000) != 0 )
    DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)*a2);
  return 1LL;
}

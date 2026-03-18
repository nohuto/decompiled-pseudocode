/*
 * XREFs of GreMovePointer @ 0x1C0086EF0
 * Callers:
 *     GreHidePointer @ 0x1C0026210 (GreHidePointer.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0086CD0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C010A35C (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreMovePointer(HDEV a1, int a2, int a3, int a4)
{
  int v6; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r13
  __int64 v14; // r15
  HDEV v15; // rax
  int v16; // r9d
  __int64 **v17; // rcx
  __int64 *v18; // rsi
  __int64 v19; // rbx
  int v20; // r9d
  int v21; // r8d
  int v22; // edx
  bool v23; // zf
  HDEV v24; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v25[8]; // [rsp+28h] [rbp-8h] BYREF
  int v26; // [rsp+70h] [rbp+40h]
  int v27; // [rsp+78h] [rbp+48h] BYREF
  int v28; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int8 v29; // [rsp+88h] [rbp+58h]

  v28 = a3;
  v27 = a2;
  v24 = a1;
  v6 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v29 = 0;
  v8 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    v9 = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_DWORD *)(v8 + 328) &= ~1u;
    v29 = v9;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v24) )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphore(*((_QWORD *)v24 + 7));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)v24 + 7), 4LL);
  DrvUniformSpaceToPixelSpacePoint(&v27, &v28);
  v10 = v27;
  v11 = v28;
  dword_1C0337C70 = v27;
  dword_1C0337C74 = v28;
  gCachedMovePointerState = a1;
  dword_1C0337C78 = a4;
  if ( gulCachedPointerRefs )
  {
    v14 = 0LL;
    bCachedMovePointerRefs = 1;
    v12 = 1;
    v13 = 1LL;
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
    {
      v6 = 1;
      v14 = 1LL;
    }
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
  }
  v15 = v24;
  if ( ((_DWORD)v24[10] & 0x20000) != 0 )
  {
    v17 = (__int64 **)*((_QWORD *)v24 + 221);
    v18 = *v17;
    v26 = *((_DWORD *)v17 + 4);
    while ( 1 )
    {
      v19 = v18[6];
      if ( v10 < *((_DWORD *)v18 + 7)
        || v10 >= *((_DWORD *)v18 + 9)
        || v11 < *((_DWORD *)v18 + 8)
        || v11 >= *((_DWORD *)v18 + 10) )
      {
        if ( v13 && (*(_DWORD *)(v19 + 2096) & 0x2000) == 0 )
          goto LABEL_38;
        GreAcquireSemaphore(*(_QWORD *)(v19 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 56), 4LL);
        v20 = a4;
        v21 = -1;
        v22 = -1;
      }
      else
      {
        if ( v13 && (*(_DWORD *)(v19 + 2096) & 0x2000) == 0 && !v14 )
          goto LABEL_38;
        GreAcquireSemaphore(*(_QWORD *)(v19 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 56), 4LL);
        v20 = a4 | 4;
        if ( !v14 )
          v20 = a4;
        v21 = v28 - *((_DWORD *)v18 + 8);
        v22 = v27 - *((_DWORD *)v18 + 7);
      }
      vMovePointer((HDEV)v18[6], v22, v21, v20);
      EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 56));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v19 + 56));
      v10 = v27;
      v11 = v28;
LABEL_38:
      v23 = v26-- == 1;
      v18 = (__int64 *)*v18;
      if ( v23 )
        goto LABEL_12;
    }
  }
  if ( !v12 || ((_DWORD)v24[524] & 0x2000) != 0 || v6 )
  {
    v16 = a4 | 4;
    if ( !v6 )
      v16 = a4;
    vMovePointer(a1, v27, v28, v16);
    v11 = v28;
    v10 = v27;
LABEL_12:
    v15 = v24;
  }
  *((_DWORD *)v15 + 16) = v10;
  *((_DWORD *)v24 + 17) = v11;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *((_QWORD *)v24 + 7));
  GreReleaseSemaphoreInternal(*((_QWORD *)v24 + 7));
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v24) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( v8 )
    *(_DWORD *)(v8 + 328) ^= (*(_DWORD *)(v8 + 328) ^ v29) & 1;
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
}

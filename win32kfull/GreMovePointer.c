/*
 * XREFs of GreMovePointer @ 0x1C001E270
 * Callers:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0021C48 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     GreHidePointer @ 0x1C002A524 (GreHidePointer.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C001DC84 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001F240 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bDontShowPointer@@YAHXZ @ 0x1C001F284 (-bDontShowPointer@@YAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

void __fastcall GreMovePointer(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r12d
  __int64 ThreadWin32Thread; // rax
  Gre::Base *v7; // rcx
  __int64 v8; // rsi
  unsigned __int8 v9; // al
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // di
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  HDEV v19; // rax
  char v20; // r9
  int v21; // r8d
  __int64 v22; // rcx
  bool v23; // zf
  __int64 **v24; // rcx
  __int64 v25; // rsi
  char v26; // r12
  __int64 *v27; // rdi
  int v28; // r13d
  __int64 v29; // rcx
  __int64 v30; // rbx
  char v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  HDEV v34; // [rsp+20h] [rbp-30h] BYREF
  __int64 v35; // [rsp+28h] [rbp-28h]
  __int64 v36; // [rsp+30h] [rbp-20h]
  __int64 v37; // [rsp+38h] [rbp-18h]
  _BYTE v38[16]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v39; // [rsp+90h] [rbp+40h]
  int v40; // [rsp+98h] [rbp+48h] BYREF
  int v41; // [rsp+A0h] [rbp+50h] BYREF
  int v42; // [rsp+A8h] [rbp+58h]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v34 = (HDEV)a1;
  v5 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v37 = ThreadWin32Thread;
  v8 = ThreadWin32Thread;
  v39 = 0;
  if ( ThreadWin32Thread )
  {
    v9 = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_DWORD *)(v8 + 328) &= ~1u;
    v39 = v9;
  }
  v10 = Gre::Base::Globals(v7);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v38, *((HSEMAPHORE *)v10 + 10));
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v34) )
  {
    GreAcquireSemaphore(*((_QWORD *)v10 + 15));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v10 + 15), 2LL);
  }
  GreAcquireSemaphore(*((_QWORD *)v34 + 7));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)v34 + 7), 4LL);
  DrvUniformSpaceToPixelSpacePoint(&v40, &v41);
  v11 = v41;
  v12 = v40;
  v14 = *(_QWORD *)(SGDGetSessionState(v13) + 32);
  *(_DWORD *)(v14 + 8660) = v11;
  v15 = v42;
  *(_DWORD *)(v14 + 8664) = v42;
  *(_QWORD *)(v14 + 8648) = a1;
  *(_DWORD *)(v14 + 8656) = v12;
  v16 = bDontShowPointer();
  v18 = v16;
  v35 = 0LL;
  if ( v16 )
  {
    v22 = *(_QWORD *)(SGDGetSessionState(v17) + 32);
    v23 = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) == 0;
    v35 = 0LL;
    *(_DWORD *)(v22 + 8680) = 1;
    if ( !v23 )
    {
      v5 = 1;
      v35 = 1LL;
    }
  }
  v19 = v34;
  if ( ((_DWORD)v34[10] & 0x20000) != 0 )
  {
    v24 = (__int64 **)*((_QWORD *)v34 + 221);
    v25 = v35;
    v26 = v42;
    v36 = v18;
    v27 = *v24;
    v28 = *((_DWORD *)v24 + 4);
    v29 = v18;
    while ( 1 )
    {
      v30 = v27[6];
      if ( v40 < *((_DWORD *)v27 + 7)
        || v40 >= *((_DWORD *)v27 + 9)
        || v41 < *((_DWORD *)v27 + 8)
        || v41 >= *((_DWORD *)v27 + 10) )
      {
        if ( v29 && (*(_DWORD *)(v30 + 2096) & 0x2000) == 0 )
          goto LABEL_37;
        GreAcquireSemaphore(*(_QWORD *)(v30 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v30 + 56), 4LL);
        v31 = v26;
        v32 = 0xFFFFFFFFLL;
        v33 = 0xFFFFFFFFLL;
      }
      else
      {
        if ( v29 && (*(_DWORD *)(v30 + 2096) & 0x2000) == 0 && !v25 )
          goto LABEL_37;
        GreAcquireSemaphore(*(_QWORD *)(v30 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v30 + 56), 4LL);
        v31 = v26 | 4;
        if ( !v25 )
          v31 = v26;
        v32 = (unsigned int)(v41 - *((_DWORD *)v27 + 8));
        v33 = (unsigned int)(v40 - *((_DWORD *)v27 + 7));
      }
      vMovePointer((_DWORD *)v27[6], v33, v32, v31);
      EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v30 + 56));
      v29 = v36;
LABEL_37:
      v27 = (__int64 *)*v27;
      if ( !--v28 )
      {
        v8 = v37;
        goto LABEL_11;
      }
    }
  }
  if ( !(_DWORD)v18 || ((_DWORD)v34[524] & 0x2000) != 0 || v5 )
  {
    v20 = v15 | 4;
    if ( !v5 )
      v20 = v15;
    vMovePointer(a1, (unsigned int)v40, (unsigned int)v41, v20);
LABEL_11:
    v19 = v34;
  }
  v21 = v41;
  *((_DWORD *)v19 + 16) = v40;
  *((_DWORD *)v34 + 17) = v21;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()");
  GreReleaseSemaphoreInternal(*((_QWORD *)v34 + 7));
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v34) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 15));
  }
  if ( v8 )
    *(_DWORD *)(v8 + 328) ^= (*(_DWORD *)(v8 + 328) ^ v39) & 1;
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v38);
}

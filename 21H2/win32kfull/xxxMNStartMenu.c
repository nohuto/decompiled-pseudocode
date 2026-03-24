/*
 * XREFs of xxxMNStartMenu @ 0x1C0222640
 * Callers:
 *     xxxMNLoop @ 0x1C0234A48 (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C0250A2C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxGetSysMenu @ 0x1C00DB164 (xxxGetSysMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockMenuNoModify @ 0x1C010280C (ThreadLockMenuNoModify.c)
 *     MNPositionSysMenu @ 0x1C0155B08 (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C0221788 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C0233AA8 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C0236ADC (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C023AAFC (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C023B474 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024ED74 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  BOOL v6; // edi
  _DWORD **v7; // rax
  unsigned __int64 *v8; // r14
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ecx
  __int64 v11; // r8
  struct tagMENU *InitMenuParam; // rax
  __int64 v13; // rcx
  __int64 SysMenu; // rax
  struct tagMENU *v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 CurrentProcessWin32Process; // r15
  int v24; // r8d
  __int64 v25; // rcx
  _QWORD v27[2]; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 *v28; // [rsp+40h] [rbp-19h]
  __int128 v29; // [rsp+48h] [rbp-11h] BYREF
  __int64 v30; // [rsp+58h] [rbp-1h]
  _QWORD v31[3]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v32; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v33; // [rsp+88h] [rbp+2Fh]
  int v34; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v6 = 0;
  v30 = 0LL;
  v33 = 0LL;
  v7 = (_DWORD **)*a1;
  v28 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  if ( (**v7 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_45;
  v8 = *(unsigned __int64 **)(*(_QWORD *)*a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v29 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v29;
  *((_QWORD *)&v29 + 1) = v8;
  if ( v8 )
    HMLockObject(v8);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v10 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | ((_GetKeyState(1LL) & 0x8000u) != 0LL ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(v10 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage((unsigned __int64)v8, 0x20u, *v8, (struct _LARGE_STRING *)2);
  if ( (**(_DWORD **)*a1 & 1) != 0 )
  {
    v34 = 0;
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v8, &v34);
    SmartObjStackRefBase<tagMENU>::operator=(v27, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v13);
      goto LABEL_45;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v27);
    **(_DWORD **)*a1 = (v34 != 0 ? 4 : 0) | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v34 )
    {
      SysMenu = xxxGetSysMenu((struct tagWND *)v8, 0);
      v28 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v27, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v27);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v15 = xxxGetInitMenuParam((struct tagWND *)v8, 0LL);
    else
      v15 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v28 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v27, (__int64)v15);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
    {
      v16 = 0LL;
    }
    else
    {
      v17 = v28;
      if ( !v28 )
        v17 = *(unsigned __int64 **)v27[0];
      v16 = *v17;
    }
    xxxSendMessage((unsigned __int64)v8, 0x116u, v16, 0LL);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v18 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v19 = *(_QWORD **)(*(_QWORD *)v18 + 40LL);
LABEL_27:
      MNPositionSysMenu((__int64)v8, v19, v11);
      goto LABEL_28;
    }
    if ( (**(_DWORD **)v18 & 1) != 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
    {
      ThreadLockMenuNoModify(*(_QWORD *)(*(_QWORD *)*a1 + 40LL), &v32);
      SmartObjStackRefBase<tagMENU>::Init(v31, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v31[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v8, v31);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v31);
      v20 = *(_QWORD *)(*((_QWORD *)&v32 + 1) + 40LL);
      *(_DWORD *)(v20 + 40) &= ~0x200u;
      ThreadUnlock1(v20);
      v19 = *(_QWORD **)(*(_QWORD *)*a1 + 48LL);
      goto LABEL_27;
    }
  }
LABEL_28:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
    if ( (*(_DWORD *)(v21 + 40) & 0x20000000) == 0 )
      goto LABEL_37;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v22) < 0 )
      {
LABEL_37:
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_41;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_37;
  }
LABEL_41:
  if ( (**(_DWORD **)*a1 & 4) != 0 )
    v24 = -1;
  else
    v24 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, (struct tagWND *)v8, v24, 0, 0);
  ThreadUnlock1(v25);
  v6 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_45:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v27);
  return v6;
}

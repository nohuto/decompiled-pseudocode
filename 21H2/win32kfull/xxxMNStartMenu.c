/*
 * XREFs of xxxMNStartMenu @ 0x1C021C1CC
 * Callers:
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MNPositionSysMenu @ 0x1C0146938 (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C021B8C8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C022D320 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C02300E8 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C023346C (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C0233B40 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024A058 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  BOOL v6; // edi
  _DWORD **v7; // rax
  struct tagWND *v8; // r14
  unsigned int v9; // ecx
  struct tagMENU *InitMenuParam; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 SysMenu; // rax
  struct tagMENU *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // r9d
  __int64 CurrentProcessWin32Process; // r15
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD v30[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v31; // [rsp+40h] [rbp-19h]
  _QWORD v32[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v33; // [rsp+60h] [rbp+7h] BYREF
  __int64 v34; // [rsp+70h] [rbp+17h]
  __int128 v35; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v36; // [rsp+88h] [rbp+2Fh]
  int v37; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v30, 0LL);
  v6 = 0;
  v36 = 0LL;
  v34 = 0LL;
  v7 = (_DWORD **)*a1;
  v31 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  if ( (**v7 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_38;
  v8 = *(struct tagWND **)(*(_QWORD *)*a1 + 8LL);
  ThreadLock((__int64)v8, (__int64 *)&v35);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v9 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | ((_GetKeyState(1LL) & 0x8000u) != 0LL ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage((ULONG_PTR)v8);
  if ( (**(_DWORD **)*a1 & 1) != 0 )
  {
    v37 = 0;
    InitMenuParam = xxxGetInitMenuParam(v8, &v37);
    v31 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v30, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v30) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v12, v11, v13);
      goto LABEL_38;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v30);
    **(_DWORD **)*a1 = (v37 != 0 ? 4 : 0) | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v37 )
    {
      SysMenu = xxxGetSysMenu(v8, 0);
      v31 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v30, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v30);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v15 = xxxGetInitMenuParam(v8, 0LL);
    else
      v15 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v31 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v30, (__int64)v15);
    SmartObjStackRef<tagMENU>::operator==((__int64)v30);
    xxxSendMessage((ULONG_PTR)v8);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v16 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v17 = *(_QWORD **)(*(_QWORD *)v16 + 40LL);
LABEL_20:
      MNPositionSysMenu((__int64)v8, v17);
      goto LABEL_21;
    }
    if ( (**(_DWORD **)v16 & 1) != 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)*a1 + 40LL);
      *(_DWORD *)(*(_QWORD *)(v18 + 40) + 40LL) |= 0x200u;
      ThreadLock(v18, (__int64 *)&v33);
      SmartObjStackRefBase<tagMENU>::Init(v32, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v32[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v8, v32);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
      v19 = *(_QWORD *)(*((_QWORD *)&v33 + 1) + 40LL);
      *(_DWORD *)(v19 + 40) &= ~0x200u;
      ThreadUnlock1(v19, v20, v21);
      v17 = *(_QWORD **)(*(_QWORD *)*a1 + 48LL);
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
    if ( (*(_DWORD *)(v22 + 40) & 0x20000000) == 0 )
      goto LABEL_30;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v23) < 0 )
      {
LABEL_30:
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_34;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_30;
  }
LABEL_34:
  if ( (**(_DWORD **)*a1 & 4) != 0 )
    v25 = -1;
  else
    v25 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v8, v25, 0, 0);
  ThreadUnlock1(v27, v26, v28);
  v6 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_38:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v30);
  return v6;
}

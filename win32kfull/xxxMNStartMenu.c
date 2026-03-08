/*
 * XREFs of xxxMNStartMenu @ 0x1C0202834
 * Callers:
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C0241E88 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C0201BA8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     MNPositionSysMenu @ 0x1C0202174 (MNPositionSysMenu.c)
 *     ThreadUnlockMenuNoModify @ 0x1C0202554 (ThreadUnlockMenuNoModify.c)
 *     LockPopupMenu @ 0x1C0219378 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C021C5E0 (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C021CCC4 (xxxMNSetCapture.c)
 *     xxxGetSysMenu @ 0x1C0224EB0 (xxxGetSysMenu.c)
 *     xxxClientLoadOLE @ 0x1C0234524 (xxxClientLoadOLE.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023BD88 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  _DWORD **v6; // rax
  struct tagWND *v7; // rsi
  unsigned int v8; // ecx
  struct tagMENU *InitMenuParam; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 SysMenu; // rax
  struct tagMENU *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  BOOL v25; // ebx
  _QWORD v26[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v27; // [rsp+40h] [rbp-19h]
  _QWORD v28[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v29; // [rsp+60h] [rbp+7h] BYREF
  __int64 v30; // [rsp+70h] [rbp+17h]
  __int128 v31; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v32; // [rsp+88h] [rbp+2Fh]
  int v33; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
  v32 = 0LL;
  v30 = 0LL;
  v6 = (_DWORD **)*a1;
  v27 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  if ( (**v6 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_6;
  v7 = *(struct tagWND **)(*(_QWORD *)*a1 + 8LL);
  ThreadLock(v7, &v31);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v8 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | ((_GetKeyState(1LL) & 0x8000u) != 0LL ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage(v7, 0x20u);
  if ( (**(_DWORD **)*a1 & 1) != 0 )
  {
    v33 = 0;
    InitMenuParam = xxxGetInitMenuParam(v7, &v33);
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v26, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v26) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v11, v10, v12);
LABEL_6:
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
      return 0LL;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v26);
    **(_DWORD **)*a1 = (v33 != 0 ? 4 : 0) | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v33 )
    {
      SysMenu = xxxGetSysMenu(v7, 0LL);
      v27 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v26, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v26);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v15 = xxxGetInitMenuParam(v7, 0LL);
    else
      v15 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v26, (__int64)v15);
    SmartObjStackRef<tagMENU>::operator==((__int64)v26);
    xxxSendMessage(v7, 0x116u);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v16 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v17 = *(_QWORD **)(*(_QWORD *)v16 + 40LL);
    }
    else
    {
      if ( (**(_DWORD **)v16 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
        goto LABEL_22;
      v18 = *(_QWORD *)(*(_QWORD *)*a1 + 40LL);
      *(_DWORD *)(*(_QWORD *)(v18 + 40) + 40LL) |= 0x200u;
      ThreadLock(v18, &v29);
      SmartObjStackRefBase<tagMENU>::Init(v28, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v28[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v7, v28);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v28);
      ThreadUnlockMenuNoModify((__int64)&v29, v19, v20);
      v17 = *(_QWORD **)(*(_QWORD *)*a1 + 48LL);
    }
    MNPositionSysMenu((__int64)v7, v17);
  }
LABEL_22:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x20000000) != 0
      && (int)xxxClientLoadOLE() >= 0 )
    {
      *(_DWORD *)(a2 + 8) |= 0x400u;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x10000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x800u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x8000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x20000u;
  }
  if ( (**(_DWORD **)*a1 & 4) != 0 )
    v21 = -1;
  else
    v21 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v7, v21, 0, 0);
  ThreadUnlock1(v23, v22, v24);
  v25 = (**(_DWORD **)*a1 & 0x8000) == 0;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
  return v25;
}

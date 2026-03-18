/*
 * XREFs of xxxMNMouseMove @ 0x1C0232340
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     TrackMouseEvent @ 0x1C00F8E74 (TrackMouseEvent.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C022F1A4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022F938 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0230060 (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C02304EC (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0233F20 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02458A8 (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3)
{
  __int64 *v4; // rdx
  int v6; // eax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  char v15; // al
  struct tagWND *v16; // rbx
  __int64 *v18[2]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h]
  unsigned int v24; // [rsp+80h] [rbp+20h] BYREF
  int v25; // [rsp+90h] [rbp+30h]

  v25 = a3;
  v24 = 0;
  v4 = *a1;
  v22 = 0LL;
  v23 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, *v4);
  if ( *v18[0] == *(_QWORD *)(*v18[0] + 64) && __PAIR64__(SHIWORD(v25), (__int16)a3) != *(_QWORD *)(a2 + 12) )
  {
    v6 = SHIWORD(v25);
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = v6;
    v7 = (__int64 *)xxxMNFindWindowFromPoint(v18, &v24, a3);
    if ( IsMFMWFPWindow((__int64)v7) )
      ThreadLock(v8, (__int64 *)&v22);
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
      xxxMNUpdateDraggingInfo(a2, v7, v24);
    if ( *(_DWORD *)(a2 + 20) != 1 )
    {
LABEL_13:
      if ( v7 == (__int64 *)4294967291LL )
      {
        if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
        {
          xxxMNSwitchToAlternateMenu(v18, a2);
LABEL_17:
          xxxMNButtonDown((__int64 *)v18, a2, v24, 0);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18);
        }
      }
      else
      {
        if ( v7 == (__int64 *)0xFFFFFFFFLL )
          goto LABEL_17;
        if ( v7 )
        {
          v9 = safe_cast_fnid_to_PMENUWND((__int64)v7);
          if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v7) && v9 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v18, *(_QWORD *)(v9 + 8));
            v13 = *(_DWORD *)(a2 + 8);
            if ( (v13 & 0x100) != 0 && (v13 & 0x8000) == 0 && (**(_DWORD **)v18[0] & 0x100000) == 0 )
            {
              v14 = *v7;
              v19[0] = 0;
              v21 = 0LL;
              v19[1] = 2;
              v20 = v14;
              TrackMouseEvent((__int64)v19);
              **(_DWORD **)v18[0] |= 0x100000u;
              xxxSendMessage((ULONG_PTR)v7);
            }
            v15 = xxxSendMessage((ULONG_PTR)v7);
            if ( (v15 & 0x10) != 0 && (v15 & 3) == 0 && !xxxSendMessage((ULONG_PTR)v7) )
            {
              v11 = *v18[0];
              if ( *(_QWORD *)(v9 + 8) == *v18[0] )
                xxxMNHideNextHierarchy((__int64 *)v18);
            }
          }
LABEL_32:
          ThreadUnlock1(v11, v10, v12);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18);
        }
      }
      if ( !*(_QWORD *)(*v18[0] + 56) )
      {
        xxxMNSelectItem(v18, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18);
      }
      v16 = *(struct tagWND **)(*v18[0] + 56);
      ThreadLock((__int64)v16, (__int64 *)&v22);
      xxxSendMessage((ULONG_PTR)v16);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v16);
      goto LABEL_32;
    }
    if ( v7
      && (v7 != (__int64 *)0xFFFFFFFFLL
       || !*(_QWORD *)(*v18[0] + 8)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v18[0] + 8) + 40LL) + 31LL) & 0x20) == 0) )
    {
      *(_DWORD *)(a2 + 20) = -1;
      goto LABEL_13;
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18);
}

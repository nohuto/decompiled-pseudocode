/*
 * XREFs of xxxMNMouseMove @ 0x1C023913C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02339B8 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     TrackMouseEvent @ 0x1C002C760 (TrackMouseEvent.c)
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02353FC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235CAC (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0236498 (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0236CBC (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238110 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C023A5BC (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B334 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0249B78 (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3)
{
  __int64 *v4; // rdx
  unsigned __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // rax
  char v14; // al
  struct tagWND *v15; // rbx
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v26; // rax
  _QWORD *result; // rax
  __int64 *v28[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v29; // [rsp+30h] [rbp-30h] BYREF
  __int64 v30; // [rsp+40h] [rbp-20h]
  _DWORD v31[2]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-10h]
  __int64 v33; // [rsp+58h] [rbp-8h]
  unsigned int v34; // [rsp+80h] [rbp+20h] BYREF
  int v35; // [rsp+90h] [rbp+30h]

  v35 = a3;
  v34 = 0;
  v4 = *a1;
  v29 = 0LL;
  v30 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, *v4);
  v6 = *v28[0];
  if ( v6 != *(_QWORD *)(v6 + 64) )
    goto LABEL_37;
  v6 = (unsigned int)(__int16)a3;
  if ( __PAIR64__(SHIWORD(v35), v6) == *(_QWORD *)(a2 + 12) )
    goto LABEL_37;
  v7 = SHIWORD(v35);
  *(_DWORD *)(a2 + 12) = v6;
  *(_DWORD *)(a2 + 16) = v7;
  v8 = (unsigned __int64 *)xxxMNFindWindowFromPoint(v28, &v34, a3);
  if ( IsMFMWFPWindow((__int64)v8) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v29 = *(_QWORD *)(ThreadWin32Thread + 416);
    v6 = (unsigned __int64)&v29;
    *(_QWORD *)(ThreadWin32Thread + 416) = &v29;
    *((_QWORD *)&v29 + 1) = v8;
    if ( v8 )
      HMLockObject(v8);
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
    xxxMNUpdateDraggingInfo(a2, v8, v34);
  if ( *(_DWORD *)(a2 + 20) == 1 )
  {
    if ( !v8 )
      goto LABEL_37;
    if ( v8 == (unsigned __int64 *)0xFFFFFFFFLL )
    {
      if ( *(_QWORD *)(*v28[0] + 8) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*v28[0] + 8) + 40LL);
        if ( (*(_BYTE *)(v6 + 31) & 0x20) != 0 )
          goto LABEL_37;
      }
    }
    *(_DWORD *)(a2 + 20) = -1;
  }
  if ( v8 == (unsigned __int64 *)4294967291LL )
  {
    if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
    {
      xxxMNSwitchToAlternateMenu(v28, a2);
LABEL_18:
      xxxMNButtonDown((__int64 *)v28, a2, v34, 0);
      goto LABEL_37;
    }
  }
  else
  {
    if ( v8 == (unsigned __int64 *)0xFFFFFFFFLL )
      goto LABEL_18;
    if ( v8 )
    {
      v10 = safe_cast_fnid_to_PMENUWND((__int64)v8);
      if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v8) && v10 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v28, *(_QWORD *)(v10 + 8));
        v12 = *(_DWORD *)(a2 + 8);
        if ( (v12 & 0x100) != 0 && (v12 & 0x8000) == 0 && (**(_DWORD **)v28[0] & 0x100000) == 0 )
        {
          v13 = *v8;
          v31[0] = 0;
          v33 = 0LL;
          v31[1] = 2;
          v32 = v13;
          TrackMouseEvent((__int64)v31);
          **(_DWORD **)v28[0] |= 0x100000u;
          xxxSendMessage((unsigned __int64)v8, 0x20u, *v8, (struct _LARGE_STRING *)2);
        }
        v14 = xxxSendMessage((unsigned __int64)v8, 0x1E5u, v34, 0LL);
        if ( (v14 & 0x10) != 0 && (v14 & 3) == 0 && !xxxSendMessage((unsigned __int64)v8, 0x1F0u, 0LL, 0LL) )
        {
          v11 = *v28[0];
          if ( *(_QWORD *)(v10 + 8) == *v28[0] )
            xxxMNHideNextHierarchy((__int64 *)v28);
        }
      }
      goto LABEL_35;
    }
  }
  if ( *(_QWORD *)(*v28[0] + 56) )
  {
    v15 = *(struct tagWND **)(*v28[0] + 56);
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v29 = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = &v29;
    *((_QWORD *)&v29 + 1) = v15;
    if ( v15 )
      HMLockObject(v15);
    xxxSendMessage((unsigned __int64)v15, 0x1E5u, 0xFFFFFFFFuLL, 0LL);
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v15);
LABEL_35:
    ThreadUnlock1(v11);
    goto LABEL_37;
  }
  xxxMNSelectItem(v28, a2);
LABEL_37:
  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v26 )
      v18 = *v26;
  }
  if ( v28[0] != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v28[0] + 2) )
  {
    if ( *((_BYTE *)v28[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v28[0]);
  }
  result = *(_QWORD **)(v18 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v18 + 1472) = result;
  }
  return result;
}

/*
 * XREFs of xxxMNLoop @ 0x1C0234A48
 * Callers:
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C0250A2C (xxxMNKeyFilter.c)
 * Callees:
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     IsShellFrameHangResilient @ 0x1C003CDB4 (IsShellFrameHangResilient.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     xxxGetSysMenuPtr @ 0x1C00619AC (xxxGetSysMenuPtr.c)
 *     xxxDispatchMessage @ 0x1C006AE54 (xxxDispatchMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     _GetMenuState @ 0x1C00DB120 (_GetMenuState.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C01107D0 (xxxTranslateMessage.c)
 *     FindNCHit @ 0x1C0122508 (FindNCHit.c)
 *     SlowAppThreadInShellFrame @ 0x1C0125054 (SlowAppThreadInShellFrame.c)
 *     _IsChild @ 0x1C012BB3C (_IsChild.c)
 *     TryDetachShellFrame @ 0x1C01E2264 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E2B58 (xxxWaitMessageEx.c)
 *     xxxCallMsgFilter @ 0x1C01E6F9C (xxxCallMsgFilter.c)
 *     MNFlushDestroyedPopups @ 0x1C0221AF0 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C0222640 (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C0233D00 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C023AAFC (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r12d
  int v9; // eax
  __int16 KeyState; // ax
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rax
  int v18; // eax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rax
  struct _LARGE_STRING *v26; // r9
  __int64 v27; // rcx
  bool v28; // zf
  struct tagTHREADINFO *v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 SysMenuPtr; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int128 v35; // [rsp+38h] [rbp-29h] BYREF
  __int64 v36; // [rsp+48h] [rbp-19h]
  _QWORD v37[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v38; // [rsp+60h] [rbp-1h]
  __int64 v39[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v40; // [rsp+78h] [rbp+17h]
  __int128 v41; // [rsp+88h] [rbp+27h]
  int v42; // [rsp+D0h] [rbp+6Fh] BYREF

  *(_DWORD *)(a2 + 8) |= 4u;
  v36 = 0LL;
  *(_OWORD *)v39 = 0LL;
  v5 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  v40 = 0LL;
  v41 = 0LL;
  v35 = 0LL;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 764LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 768LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x40u;
  v9 = *(_DWORD *)(a2 + 8);
  if ( (v9 & 1) == 0 )
  {
    KeyState = _GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1);
    v11 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v11 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v12 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v35 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v35;
        *((_QWORD *)&v35 + 1) = v12;
        HMLockObject(v12);
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v14 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v14 = 0LL;
        xxxSendNotifyMessage(*(_QWORD *)(**a1 + 8), 0x212u, v14, 0LL, 1);
        ThreadUnlock1(v15);
      }
      goto LABEL_84;
    }
    if ( (*v11 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_84:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage(v39, 0LL, 0x200u, 0x200u, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      *(_QWORD *)&v40 = 2LL;
      v16 = a4 != 0 ? 518 : 516;
    }
    else
    {
      *(_QWORD *)&v40 = 1LL;
      v16 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v39[1]) = v16;
    v17 = *a1;
    *((_QWORD *)&v40 + 1) = a3;
    if ( *(_QWORD *)(*v17 + 16) )
      v39[0] = **(_QWORD **)(**a1 + 16);
    else
      v39[0] = 0LL;
    xxxHandleMenuMessages((__int64)v39, a2, a1);
    v9 = *(_DWORD *)(a2 + 8);
  }
  if ( (v9 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v9 & 4) == 0 )
        goto LABEL_84;
      if ( !(unsigned int)xxxInternalGetMessage(v39, 0LL, 0, 0, 2, 0) )
        goto LABEL_60;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_84;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_84;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( v20 != *(_QWORD *)(**a1 + 8)
          && (!v20
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_84;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_37;
      v21 = v39[1];
      if ( LODWORD(v39[1]) == 515 )
        break;
LABEL_38:
      if ( v21 == 513 || v21 == 516 || v21 == 161 || v21 == 164 )
      {
        v22 = 1;
        goto LABEL_47;
      }
LABEL_42:
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x200000u;
      v22 = 0;
      if ( !(unsigned int)xxxInternalGetMessage(v39, 0LL, v39[1], v39[1], 1, 0) )
      {
        v23 = *(_DWORD *)(gptiCurrent + 488LL);
        if ( (v23 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) = v23 & 0xFFDFFFFF;
LABEL_60:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_84;
          if ( (*(_DWORD *)**a1 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups((_DWORD *)**a1);
            *(_DWORD *)**a1 &= ~0x20000u;
          }
          if ( v5 )
          {
            if ( *(_QWORD *)(**a1 + 8) )
            {
              v24 = *(_QWORD *)(**a1 + 8);
              v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v35 = *(_QWORD *)(v25 + 416);
              *(_QWORD *)(v25 + 416) = &v35;
              *((_QWORD *)&v35 + 1) = v24;
              HMLockObject(v24);
              if ( *(_QWORD *)(**a1 + 56) )
                v26 = **(struct _LARGE_STRING ***)(**a1 + 56);
              else
                v26 = 0LL;
              xxxSendMessage(*(_QWORD *)(**a1 + 8), 0x121u, 2uLL, v26);
              ThreadUnlock1(v27);
            }
            v5 = 0;
          }
          else
          {
            v28 = *(_QWORD *)(a2 + 96) == 0LL;
            v42 = 0;
            xxxWaitMessageEx(15615LL, !v28, (enum SLEEP_STATUS *)&v42);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              if ( v42 )
              {
                v29 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v29 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v29, v42 == 2, 0);
              }
            }
          }
          goto LABEL_75;
        }
      }
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200000u;
LABEL_47:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v39, 2) )
      {
        if ( v22 )
          xxxInternalGetMessage(v39, 0LL, v39[1], v39[1], 1, 0);
LABEL_59:
        v5 = 1;
        goto LABEL_75;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v39, a2, a1) )
      {
        xxxTranslateMessage((__int64)v39, 0);
        xxxDispatchMessage((__int64)v39);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x40) != 0 )
      {
        goto LABEL_84;
      }
      if ( LODWORD(v39[1]) == 280 )
        goto LABEL_60;
      if ( LODWORD(v39[1]) != 275 && LODWORD(v39[1]) != 15 )
        goto LABEL_59;
LABEL_75:
      v9 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_42;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), SDWORD2(v40)) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v37, 0LL);
      v38 = 0LL;
      xxxInternalGetMessage(v39, 0LL, v39[1], v39[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_83;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v30 = *(_QWORD **)(**a1 + 8);
        v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v35 = *(_QWORD *)(v31 + 416);
        *(_QWORD *)(v31 + 416) = &v35;
        *((_QWORD *)&v35 + 1) = v30;
        HMLockObject(v30);
        SysMenuPtr = xxxGetSysMenuPtr(v30);
        v38 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v37, SysMenuPtr);
        v33 = v38;
        if ( !v38 )
          v33 = *(_QWORD *)v37[0];
        if ( (GetMenuState(v33, 0xF120u) & 3) == 0 )
          PostMessage((int)v30, 274, 61728, 0);
        ThreadUnlock1(v34);
LABEL_83:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v37);
        goto LABEL_84;
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v37);
    }
LABEL_37:
    v21 = v39[1];
    goto LABEL_38;
  }
  xxxMNReleaseCapture(a2);
  v18 = *(_DWORD *)(a2 + 8);
  if ( (v18 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v18 & 0xFDFFFFFF;
  }
  return 0LL;
}

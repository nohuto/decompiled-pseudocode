/*
 * XREFs of xxxMNLoop @ 0x1C021726C
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C0241E88 (xxxMNKeyFilter.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C0006D64 (IsShellFrameHangResilient.c)
 *     _IsChild @ 0x1C00164BC (_IsChild.c)
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     xxxInternalGetMessage @ 0x1C00946B0 (xxxInternalGetMessage.c)
 *     xxxGetSysMenuPtr @ 0x1C00A4DFC (xxxGetSysMenuPtr.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     xxxTranslateMessage @ 0x1C00E4F1C (xxxTranslateMessage.c)
 *     FindNCHit @ 0x1C00E609C (FindNCHit.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     xxxCallMsgFilter @ 0x1C014538E (xxxCallMsgFilter.c)
 *     SlowAppThreadInShellFrame @ 0x1C01B7C3C (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01B7EFC (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01B84F0 (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C0201F10 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C0216810 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C021C5E0 (xxxMNReleaseCapture.c)
 *     _GetMenuState @ 0x1C024E814 (_GetMenuState.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r12d
  __int16 KeyState; // ax
  _DWORD *v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // zf
  struct tagTHREADINFO *v28; // rax
  _QWORD *v29; // rsi
  __int64 SysMenuPtr; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD v35[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v36; // [rsp+48h] [rbp-19h]
  __int128 v37; // [rsp+50h] [rbp-11h] BYREF
  __int64 v38; // [rsp+60h] [rbp-1h]
  __int64 v39[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v40; // [rsp+78h] [rbp+17h]
  __int128 v41; // [rsp+88h] [rbp+27h]
  int v42; // [rsp+D0h] [rbp+6Fh] BYREF

  *(_DWORD *)(a2 + 8) |= 4u;
  v38 = 0LL;
  *(_OWORD *)v39 = 0LL;
  v5 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  v40 = 0LL;
  v41 = 0LL;
  v37 = 0LL;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 764LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 768LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    KeyState = _GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1);
    v10 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v10 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v37);
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v11 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v11 = 0LL;
        xxxSendNotifyMessage(*(struct tagTHREADINFO ***)(**a1 + 8), 0x212u, v11, 0LL, 1);
        ThreadUnlock1(v13, v12, v14);
      }
      goto LABEL_80;
    }
    if ( (*v10 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_80:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage(v39, 0LL, 0x200u, 0x200u, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      *(_QWORD *)&v40 = 2LL;
      v15 = a4 != 0 ? 518 : 516;
    }
    else
    {
      *(_QWORD *)&v40 = 1LL;
      v15 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v39[1]) = v15;
    v16 = *a1;
    *((_QWORD *)&v40 + 1) = a3;
    if ( *(_QWORD *)(*v16 + 16) )
      v39[0] = **(_QWORD **)(**a1 + 16);
    else
      v39[0] = 0LL;
    xxxHandleMenuMessages((__int64)v39, a2, a1);
  }
  v17 = *(_DWORD *)(a2 + 8);
  if ( (v17 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v17 & 4) == 0 )
        goto LABEL_80;
      if ( !(unsigned int)xxxInternalGetMessage(v39, 0LL, 0, 0, 2, 0) )
        goto LABEL_61;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_80;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_80;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
        if ( v20 != *(_QWORD *)(**a1 + 8)
          && (!v20
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_80;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_38;
      v21 = v39[1];
      if ( LODWORD(v39[1]) == 515 )
        break;
LABEL_39:
      if ( v21 == 513 || v21 == 516 || v21 == 161 || v21 == 164 )
      {
        v23 = 1;
        goto LABEL_48;
      }
LABEL_43:
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x200000u;
      if ( !(unsigned int)xxxInternalGetMessage(v39, 0LL, v39[1], v39[1], 1, 0) )
      {
        v22 = *(_DWORD *)(gptiCurrent + 488LL);
        if ( (v22 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) = v22 & 0xFFDFFFFF;
LABEL_61:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_80;
          if ( (*(_DWORD *)**a1 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups((_DWORD *)**a1);
            *(_DWORD *)**a1 &= ~0x20000u;
          }
          if ( v5 )
          {
            if ( *(_QWORD *)(**a1 + 8) )
            {
              ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v37);
              xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x121u);
              ThreadUnlock1(v25, v24, v26);
            }
            v5 = 0;
          }
          else
          {
            v27 = *(_QWORD *)(a2 + 96) == 0LL;
            v42 = 0;
            xxxWaitMessageEx(0x3CFFu, !v27, (enum SLEEP_STATUS *)&v42);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              if ( v42 )
              {
                v28 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v28 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v28, v42 == 2, 0);
              }
            }
          }
          goto LABEL_73;
        }
      }
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200000u;
      v23 = 0;
LABEL_48:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v39, 2u) )
      {
        if ( v23 )
          xxxInternalGetMessage(v39, 0LL, v39[1], v39[1], 1, 0);
LABEL_60:
        v5 = 1;
        goto LABEL_73;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v39, a2, a1) )
      {
        xxxTranslateMessage((__int64)v39, 0);
        xxxDispatchMessage(v39);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x40) != 0 )
      {
        goto LABEL_80;
      }
      if ( LODWORD(v39[1]) == 280 )
        goto LABEL_61;
      if ( LODWORD(v39[1]) != 275 && LODWORD(v39[1]) != 15 )
        goto LABEL_60;
LABEL_73:
      v17 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_43;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), SDWORD2(v40)) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v35, 0LL);
      v36 = 0LL;
      xxxInternalGetMessage(v39, 0LL, v39[1], v39[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_79;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v29 = *(_QWORD **)(**a1 + 8);
        ThreadLockAlways(v29, &v37);
        SysMenuPtr = xxxGetSysMenuPtr(v29);
        v36 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v35, SysMenuPtr);
        v31 = v36;
        if ( !v36 )
          v31 = *(_QWORD *)v35[0];
        if ( (GetMenuState(v31, 61728LL) & 3) == 0 )
          PostMessage((unsigned __int64)v29, 0x112u, 0xF120uLL, 0LL);
        ThreadUnlock1(v33, v32, v34);
LABEL_79:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v35);
        goto LABEL_80;
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v35);
    }
LABEL_38:
    v21 = v39[1];
    goto LABEL_39;
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

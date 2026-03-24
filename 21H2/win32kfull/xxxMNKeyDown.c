/*
 * XREFs of xxxMNKeyDown @ 0x1C0238A98
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02378A4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0238A98 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _GetSubMenu @ 0x1C00DCAFC (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235370 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02360A8 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C0236ADC (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C0236BFC (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0236FDC (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0237494 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237D20 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C0238A98 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023AB7C (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C023B474 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B8F4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C025067C (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C0250708 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C0250818 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  int MenuInheritedContextHelpId; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edi
  int v15; // r12d
  int v16; // r13d
  int v17; // eax
  _BOOL8 v18; // r9
  __int64 v19; // r8
  int v20; // r15d
  struct _KTHREAD *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // r8
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 *SubMenu; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // r15
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // esi
  __int64 v49; // rcx
  __int64 *v50; // rax
  __int64 *v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v64; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  _QWORD *v69; // r8
  int v70; // ecx
  struct _KTHREAD *v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  int v77; // ebx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 *v80; // rax
  _QWORD *result; // rax
  __int128 v82; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v83; // [rsp+40h] [rbp-C0h]
  _QWORD v84[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v85; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v86[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v87; // [rsp+78h] [rbp-88h] BYREF
  __int128 v88; // [rsp+80h] [rbp-80h]
  _QWORD v89[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v90[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v91[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v92[3]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v93[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v94[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v95[10]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v96; // [rsp+178h] [rbp+78h]
  BOOL v97; // [rsp+180h] [rbp+80h]
  int v98; // [rsp+188h] [rbp+88h]

  v82 = 0LL;
  v83 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v84, 0LL);
  v6 = *(unsigned int *)(a2 + 8);
  v96 = a3;
  if ( (v6 & 8) != 0 && a3 != 112 )
  {
    if ( (v6 & 0x80u) != 0LL && a3 == 27 )
    {
      LODWORD(v6) = v6 | 0x2000;
      *(_DWORD *)(a2 + 8) = v6;
    }
    goto LABEL_135;
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v69 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v70 = *(_DWORD *)(*v69 + 4LL) & 3;
        if ( v69[2] )
        {
          if ( !v70 )
            goto LABEL_131;
        }
        else if ( !v70 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v69, *(_DWORD *)(**a1 + 80));
          goto LABEL_135;
        }
      }
      goto LABEL_134;
    case 0x12u:
LABEL_15:
      if ( (v6 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      goto LABEL_135;
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0
        && **a1 != *(_QWORD *)(**a1 + 64)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
      {
        if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v85, *(_QWORD *)(**a1 + 64));
          **(_DWORD **)v85 &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          else
            xxxMNCloseHierarchy(*(_QWORD *)v85, a2);
          CurrentThread = KeGetCurrentThread();
          v22 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v57)
            || (CurrentProcess = PsGetCurrentProcess(v60, v59, v61),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v64),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v22 = *ThreadWin32Thread;
          }
          if ( v85 == gSmartObjNullRef )
            goto LABEL_62;
          if ( --*(_DWORD *)(v85 + 8) || !*(_BYTE *)(v85 + 12) )
            goto LABEL_62;
          v32 = v85;
          goto LABEL_61;
        }
        v67 = *(_QWORD *)(**a1 + 32);
        v68 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v82 = *(_QWORD *)(v68 + 416);
        *(_QWORD *)(v68 + 416) = &v82;
        *((_QWORD *)&v82 + 1) = v67;
        if ( v67 )
          HMLockObject(v67);
        v37 = 484;
        v36 = 0LL;
        goto LABEL_72;
      }
LABEL_134:
      xxxMNCancel(a2, 0, 0, 0LL);
      goto LABEL_135;
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
      goto LABEL_22;
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 != 112 )
        {
          if ( a3 != 121 )
            goto LABEL_135;
          goto LABEL_15;
        }
        v7 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
        v6 = (__int64)*a1;
        if ( !*(_QWORD *)(**a1 + 8) || !v7 )
          goto LABEL_135;
        v8 = *(_QWORD *)(**a1 + 8);
        v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v82 = *(_QWORD *)(v9 + 416);
        *(_QWORD *)(v9 + 416) = &v82;
        *((_QWORD *)&v82 + 1) = v8;
        HMLockObject(v8);
        v10 = **a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
        xxxSendHelpMessage(*(_QWORD *)(v10 + 8), MenuInheritedContextHelpId);
LABEL_21:
        ThreadUnlock1(v12);
        goto LABEL_135;
      }
LABEL_22:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v13 = 0xFFFFFFFFLL;
        if ( a3 != 38 )
          v13 = 1LL;
        MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v13, 0LL);
LABEL_68:
        xxxMNSelectItem(a1, a2);
        goto LABEL_135;
      }
LABEL_131:
      xxxMNOpenHierarchy(a1, a2);
      goto LABEL_135;
    }
  }
  v14 = 1;
  v15 = 39;
  v16 = (*(_DWORD *)**a1 >> 22) & 1;
  v98 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v98 != v16 )
  {
    v17 = 39;
    if ( a3 != 37 )
      v17 = 37;
    a3 = v17;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (v6 = **a1, (*(_DWORD *)v6 & 0x20) == 0) )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v97 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        goto LABEL_135;
      }
    }
    else
    {
      v97 = (*(_DWORD *)**a1 & 0x400) != 0;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v84, **a1);
    v18 = (*(_DWORD *)**a1 & 2) != 0 && **a1 == *(_QWORD *)(**a1 + 64);
    v19 = -1LL;
    if ( a3 != 37 )
      v19 = 1LL;
    v20 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v19, v18);
    if ( v20 != -1 )
      goto LABEL_66;
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v98 != v16 )
      {
        if ( a3 != 37 )
          v15 = 37;
        a3 = v15;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v86, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(v86, a2, a3);
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v23)
        || (v27 = PsGetCurrentProcess(v25, v24, v26),
            v28 = PsGetProcessSessionIdEx(v27),
            v30 = PsGetCurrentThreadProcess(v29),
            v28 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
      {
        v31 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v31 )
          v22 = *v31;
      }
      if ( v86[0] == gSmartObjNullRef )
        goto LABEL_62;
      if ( --*(_DWORD *)(v86[0] + 8LL) || !*(_BYTE *)(v86[0] + 12LL) )
        goto LABEL_62;
      v32 = v86[0];
LABEL_61:
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v32);
LABEL_62:
      v33 = *(_QWORD **)(v22 + 1472);
      if ( v33 )
        *(_QWORD *)(v22 + 1472) = *v33;
      goto LABEL_135;
    }
    v6 = **a1;
    if ( v6 == *(_QWORD *)(v6 + 64) )
    {
      if ( (*(_DWORD *)v6 & 1) == 0 )
        goto LABEL_135;
LABEL_66:
      v6 = **a1;
      if ( (*(_DWORD *)v6 & 1) == 0 )
      {
        if ( v20 == -1 )
          goto LABEL_135;
        goto LABEL_68;
      }
      if ( v20 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
        {
          v91[2] = 0LL;
          v92[2] = 0LL;
          v88 = 0LL;
          v38 = **a1;
          if ( (*(_DWORD *)v38 & 4) != 0 )
            SubMenu = (__int64 *)GetSubMenu(*(_QWORD *)(v38 + 40));
          else
            SubMenu = *(__int64 **)(v38 + 40);
          if ( SubMenu )
            v87 = *SubMenu;
          else
            v87 = 0LL;
          v40 = *(_QWORD *)(**a1 + 8);
          v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v82 = *(_QWORD *)(v41 + 416);
          *(_QWORD *)(v41 + 416) = &v82;
          *((_QWORD *)&v82 + 1) = v40;
          if ( v40 )
            HMLockObject(v40);
          xxxSendMessage(*(_QWORD *)(**a1 + 8), 0x213u, v96, (struct _LARGE_STRING *)&v87);
          ThreadUnlock1(v42);
          v43 = HMValidateHandleNoSecure(*((unsigned __int64 *)&v88 + 1), 1);
          v44 = (_QWORD *)v43;
          if ( v43 )
          {
            if ( *(_QWORD *)(v43 + 16) == gptiCurrent )
            {
              v45 = HMValidateHandleNoRip(v88, 2);
              if ( v45 )
              {
                v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v91[0] = *(_QWORD *)(v46 + 416);
                *(_QWORD *)(v46 + 416) = v91;
                v91[1] = v45;
                HMLockObject(v45);
                v47 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v92[0] = *(_QWORD *)(v47 + 416);
                *(_QWORD *)(v47 + 416) = v92;
                v92[1] = v44;
                HMLockObject(v44);
                v48 = v97;
                if ( (*(_BYTE *)(v44[5] + 31LL) & 0x20) != 0 )
                  v48 = 1;
                xxxMNSelectItem(a1, a2);
                *(_DWORD *)(a2 + 8) |= 2u;
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                *(_DWORD *)**a1 &= ~0x80u;
                v49 = v44[20];
                if ( v49 && GetSubMenu(v49) == v45 )
                  v45 = v44[20];
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                v50 = *a1;
                v89[1] = v44;
                v89[0] = *v50 + 8;
                HMAssignmentLock(v89);
                v51 = *a1;
                v90[1] = v44;
                v90[0] = *v51 + 16;
                HMAssignmentLock(v90);
                SmartObjStackRefBase<tagMENU>::Init(v93, v45);
                v52 = *a1;
                v93[2] = 0LL;
                LockPopupMenu((__int64)a1, (__int64 *)(*v52 + 40), (__int64)v93);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v93);
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
                  xxxMNSetCapture(a1, a2);
                }
                if ( (*(_BYTE *)(v44[5] + 31LL) & 0x40) == 0 )
                {
                  v53 = **a1;
                  if ( *(_QWORD *)(v53 + 40) )
                  {
                    if ( v44[21] == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v94, v44[20]);
                      v54 = *a1;
                      v94[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v54 + 48), (__int64)v94);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v94);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v95, v44[21]);
                      v55 = *a1;
                      v95[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v55 + 48), (__int64)v95);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v95);
                    }
                  }
                }
                ThreadUnlock1(v53);
                ThreadUnlock1(v56);
                *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
LABEL_105:
                if ( *(_QWORD *)(*(_QWORD *)v84[0] + 24LL) )
                  xxxMNCloseHierarchy(*(_QWORD *)v84[0], a2);
                xxxMNSelectItem(a1, a2);
                if ( v48 )
                  goto LABEL_131;
                goto LABEL_135;
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          goto LABEL_135;
        if ( a3 != 39 )
          v14 = -1;
        if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v14, 0LL) == -1 )
          goto LABEL_135;
      }
      v48 = v97;
      goto LABEL_105;
    }
    v34 = *(_QWORD *)(v6 + 32);
    v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v82 = *(_QWORD *)(v35 + 416);
    *(_QWORD *)(v35 + 416) = &v82;
    *((_QWORD *)&v82 + 1) = v34;
    if ( v34 )
      HMLockObject(v34);
    v36 = v96;
    v37 = 256;
LABEL_72:
    xxxSendMessage(*(_QWORD *)(**a1 + 32), v37, v36, 0LL);
    goto LABEL_21;
  }
LABEL_135:
  v71 = KeGetCurrentThread();
  v72 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (v76 = PsGetCurrentProcess(v74, v73, v75),
        v77 = PsGetProcessSessionIdEx(v76),
        v79 = PsGetCurrentThreadProcess(v78),
        v77 == (unsigned int)PsGetProcessSessionIdEx(v79)) )
  {
    v80 = (__int64 *)PsGetThreadWin32Thread(v71);
    if ( v80 )
      v72 = *v80;
  }
  if ( v84[0] != gSmartObjNullRef && !--*(_DWORD *)(v84[0] + 8LL) )
  {
    if ( *(_BYTE *)(v84[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v84[0]);
  }
  result = *(_QWORD **)(v72 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v72 + 1472) = result;
  }
  return result;
}

/*
 * XREFs of xxxMNKeyDown @ 0x1C021ABF8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0219CB8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetSubMenu @ 0x1C002165C (_GetSubMenu.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0217DF8 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0218A2C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C0219378 (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C02194AC (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0219608 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C021CCC4 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C021D0B4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C023C5F8 (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C0241B78 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C0241C80 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  int MenuInheritedContextHelpId; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int v13; // esi
  int v14; // r12d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // r15d
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // r15
  __int64 v29; // rax
  __int64 v30; // r13
  int v31; // r14d
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // r8
  int v46; // ecx
  _QWORD v48[2]; // [rsp+30h] [rbp-A9h] BYREF
  int v49; // [rsp+40h] [rbp-99h]
  _QWORD v50[2]; // [rsp+48h] [rbp-91h] BYREF
  __int64 v51; // [rsp+58h] [rbp-81h]
  _QWORD v52[2]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v53; // [rsp+70h] [rbp-69h]
  __int128 v54; // [rsp+78h] [rbp-61h]
  __int128 v55; // [rsp+88h] [rbp-51h] BYREF
  __int64 v56; // [rsp+98h] [rbp-41h]
  _QWORD v57[2]; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v58[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v59; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-1h]
  __int128 v61; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v62; // [rsp+F0h] [rbp+17h]
  BOOL v63; // [rsp+150h] [rbp+77h]
  int v64; // [rsp+158h] [rbp+7Fh]

  v55 = 0LL;
  v56 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v52, 0LL);
  v6 = *(_DWORD *)(a2 + 8);
  if ( (v6 & 8) != 0 )
  {
    if ( a3 != 112 )
    {
      if ( (v6 & 0x80u) != 0 && a3 == 27 )
        *(_DWORD *)(a2 + 8) = v6 | 0x2000;
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
    }
    goto LABEL_18;
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v45 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v46 = *(_DWORD *)(*v45 + 4LL) & 3;
        if ( v45[2] )
        {
          if ( !v46 )
            goto LABEL_108;
        }
        else if ( !v46 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v45, *(_DWORD *)(**a1 + 80));
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
        }
      }
      goto LABEL_111;
    case 0x12u:
LABEL_15:
      if ( (v6 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0
        && **a1 != *(_QWORD *)(**a1 + 64)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
      {
        if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v48, *(_QWORD *)(**a1 + 64));
          **(_DWORD **)v48[0] &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          else
            xxxMNCloseHierarchy(*(_QWORD *)v48[0], a2);
LABEL_53:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v48);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
        }
        ThreadLock(*(_QWORD *)(**a1 + 32), &v55);
        v21 = 484;
        goto LABEL_60;
      }
LABEL_111:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
      goto LABEL_21;
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 == 112 )
        {
LABEL_18:
          v7 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
          if ( !*(_QWORD *)(**a1 + 8) || !v7 )
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
          ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v55);
          MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
          xxxSendHelpMessage(*(struct tagWND **)(**a1 + 8), MenuInheritedContextHelpId);
LABEL_61:
          ThreadUnlock1(v10, v9, v11);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
        }
        if ( a3 != 121 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
        goto LABEL_15;
      }
LABEL_21:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v12 = -1LL;
        if ( a3 != 38 )
          v12 = 1LL;
        MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v12, 0LL);
LABEL_25:
        xxxMNSelectItem(a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
      }
LABEL_108:
      xxxMNOpenHierarchy(a1, a2);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
    }
  }
  v13 = 1;
  v14 = 39;
  v15 = **a1;
  v49 = (*(_DWORD *)v15 >> 22) & 1;
  v64 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v64 != v49 )
  {
    v16 = 39;
    if ( a3 != 37 )
      v16 = 37;
    a3 = v16;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (*(_DWORD *)**a1 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v63 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
      }
    }
    else
    {
      v63 = (*(_DWORD *)**a1 & 0x400) != 0;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v52, **a1);
    if ( (*(_DWORD *)**a1 & 2) == 0 || (v17 = 1LL, **a1 != *(_QWORD *)(**a1 + 64)) )
      v17 = 0LL;
    v18 = 0xFFFFFFFFLL;
    if ( a3 != 37 )
      v18 = 1LL;
    v19 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v18, v17);
    if ( v19 != -1 )
    {
LABEL_56:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        if ( v19 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
        goto LABEL_25;
      }
      if ( v19 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
        {
          v59 = 0LL;
          v54 = 0LL;
          v60 = 0LL;
          v62 = 0LL;
          v22 = *a1;
          v61 = 0LL;
          v23 = **a1;
          v24 = (*(_DWORD *)*v22 & 4) != 0 ? (_QWORD *)GetSubMenu(*(_QWORD *)(v23 + 40)) : *(_QWORD **)(v23 + 40);
          v53 = v24 ? *v24 : 0LL;
          ThreadLock(*(_QWORD *)(**a1 + 8), &v55);
          xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x213u);
          ThreadUnlock1(v26, v25, v27);
          v28 = (_QWORD *)HMValidateHandleNoSecure(SDWORD2(v54), 1);
          if ( v28 )
          {
            if ( v28[2] == gptiCurrent )
            {
              v29 = HMValidateHandleNoRip(v54, 2);
              v30 = v29;
              if ( v29 )
              {
                ThreadLock(v29, &v59);
                ThreadLock(v28, &v61);
                v31 = v63;
                if ( (*(_BYTE *)(v28[5] + 31LL) & 0x20) != 0 )
                  v31 = 1;
                xxxMNSelectItem(a1, a2);
                *(_DWORD *)(a2 + 8) |= 2u;
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                *(_DWORD *)**a1 &= ~0x80u;
                v32 = v28[20];
                if ( v32 && GetSubMenu(v32) == v30 )
                  v30 = v28[20];
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                v33 = *a1;
                v48[1] = v28;
                v48[0] = *v33 + 8;
                HMAssignmentLock(v48, 0LL);
                v34 = *a1;
                v57[1] = v28;
                v57[0] = *v34 + 16;
                HMAssignmentLock(v57, 0LL);
                SmartObjStackRefBase<tagMENU>::Init(v58, v30);
                v35 = *a1;
                v58[2] = 0LL;
                LockPopupMenu((__int64)a1, (__int64 *)(*v35 + 40), (__int64)v58);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v58);
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x100000u;
                  xxxMNSetCapture(a1, a2);
                }
                if ( (*(_BYTE *)(v28[5] + 31LL) & 0x40) == 0 )
                {
                  v37 = **a1;
                  if ( *(_QWORD *)(v37 + 40) )
                  {
                    v39 = v28[21];
                    if ( v39 == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v50, v28[20]);
                      v40 = *a1;
                      v51 = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v40 + 48), (__int64)v50);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v50);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v50, v39);
                      v41 = *a1;
                      v51 = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v41 + 48), (__int64)v50);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v50);
                    }
                  }
                }
                ThreadUnlock1(v37, v36, v38);
                ThreadUnlock1(v43, v42, v44);
                *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
LABEL_92:
                if ( *(_QWORD *)(*(_QWORD *)v52[0] + 24LL) )
                  xxxMNCloseHierarchy(*(_QWORD *)v52[0], a2);
                xxxMNSelectItem(a1, a2);
                if ( v31 )
                  goto LABEL_108;
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
        if ( a3 != 39 )
          v13 = -1;
        if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v13, 0LL) == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
      }
      v31 = v63;
      goto LABEL_92;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v64 != v49 )
      {
        if ( a3 != 37 )
          v14 = 37;
        a3 = v14;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v48, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(v48, a2, a3);
      goto LABEL_53;
    }
    v20 = **a1;
    if ( v20 == *(_QWORD *)(v20 + 64) )
    {
      if ( (*(_DWORD *)v20 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
      goto LABEL_56;
    }
    ThreadLock(*(_QWORD *)(v20 + 32), &v55);
    v21 = 256;
LABEL_60:
    xxxSendMessage(*(struct tagWND **)(**a1 + 32), v21);
    goto LABEL_61;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
}

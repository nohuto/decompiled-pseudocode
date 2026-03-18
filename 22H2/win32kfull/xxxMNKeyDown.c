/*
 * XREFs of xxxMNKeyDown @ 0x1C0218038
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02170F8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0218038 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00244B4 (HMValidateHandleNoRip.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _GetSubMenu @ 0x1C0066FE8 (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0215238 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0215E6C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C02167B8 (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C02168EC (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0216A48 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0216E04 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0217510 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C0218038 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0219AA0 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C021A104 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C021A4F4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C0239990 (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C023EEA8 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C023EFB0 (MNFindNextValidItem.c)
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
  __int64 *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // r15
  __int64 v28; // rax
  __int64 v29; // r13
  int v30; // r14d
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // r8
  int v45; // ecx
  _QWORD v47[2]; // [rsp+30h] [rbp-A9h] BYREF
  int v48; // [rsp+40h] [rbp-99h]
  _QWORD v49[2]; // [rsp+48h] [rbp-91h] BYREF
  __int64 v50; // [rsp+58h] [rbp-81h]
  _QWORD v51[2]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v52; // [rsp+70h] [rbp-69h]
  __int128 v53; // [rsp+78h] [rbp-61h]
  __int128 v54; // [rsp+88h] [rbp-51h] BYREF
  __int64 v55; // [rsp+98h] [rbp-41h]
  _QWORD v56[2]; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v57[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-1h]
  __int128 v60; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v61; // [rsp+F0h] [rbp+17h]
  BOOL v62; // [rsp+150h] [rbp+77h]
  int v63; // [rsp+158h] [rbp+7Fh]

  v54 = 0LL;
  v55 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, 0LL);
  v6 = *(_DWORD *)(a2 + 8);
  if ( (v6 & 8) != 0 )
  {
    if ( a3 != 112 )
    {
      if ( (v6 & 0x80u) != 0 && a3 == 27 )
        *(_DWORD *)(a2 + 8) = v6 | 0x2000;
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
    }
    goto LABEL_18;
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v44 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v45 = *(_DWORD *)(*v44 + 4LL) & 3;
        if ( v44[2] )
        {
          if ( !v45 )
            goto LABEL_108;
        }
        else if ( !v45 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v44, *(_DWORD *)(**a1 + 80));
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
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
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0
        && **a1 != *(_QWORD *)(**a1 + 64)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
      {
        if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v47, *(_QWORD *)(**a1 + 64));
          **(_DWORD **)v47[0] &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          else
            xxxMNCloseHierarchy(*(_QWORD *)v47[0], a2);
LABEL_53:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v47);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
        }
        ThreadLock(*(_QWORD *)(**a1 + 32), &v54);
        goto LABEL_60;
      }
LABEL_111:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
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
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
          ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v54);
          MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
          xxxSendHelpMessage(*(_QWORD *)(**a1 + 8), MenuInheritedContextHelpId);
LABEL_61:
          ThreadUnlock1(v10, v9, v11);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
        }
        if ( a3 != 121 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
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
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
      }
LABEL_108:
      xxxMNOpenHierarchy(a1, a2);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
    }
  }
  v13 = 1;
  v14 = 39;
  v15 = **a1;
  v48 = (*(_DWORD *)v15 >> 22) & 1;
  v63 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v63 != v48 )
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
      v62 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
      }
    }
    else
    {
      v62 = (*(_DWORD *)**a1 & 0x400) != 0;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v51, **a1);
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
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
        goto LABEL_25;
      }
      if ( v19 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
        {
          v58 = 0LL;
          v53 = 0LL;
          v59 = 0LL;
          v61 = 0LL;
          v21 = *a1;
          v60 = 0LL;
          v22 = **a1;
          v23 = (*(_DWORD *)*v21 & 4) != 0 ? (_QWORD *)GetSubMenu(*(_QWORD *)(v22 + 40)) : *(_QWORD **)(v22 + 40);
          v52 = v23 ? *v23 : 0LL;
          ThreadLock(*(_QWORD *)(**a1 + 8), &v54);
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v25, v24, v26);
          v27 = (_QWORD *)HMValidateHandleNoSecure(SDWORD2(v53), 1);
          if ( v27 )
          {
            if ( v27[2] == gptiCurrent )
            {
              v28 = HMValidateHandleNoRip(v53, 2);
              v29 = v28;
              if ( v28 )
              {
                ThreadLock(v28, &v58);
                ThreadLock(v27, &v60);
                v30 = v62;
                if ( (*(_BYTE *)(v27[5] + 31LL) & 0x20) != 0 )
                  v30 = 1;
                xxxMNSelectItem(a1, a2);
                *(_DWORD *)(a2 + 8) |= 2u;
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                *(_DWORD *)**a1 &= ~0x80u;
                v31 = v27[20];
                if ( v31 && GetSubMenu(v31) == v29 )
                  v29 = v27[20];
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                v32 = *a1;
                v47[1] = v27;
                v47[0] = *v32 + 8;
                HMAssignmentLock(v47, 0LL);
                v33 = *a1;
                v56[1] = v27;
                v56[0] = *v33 + 16;
                HMAssignmentLock(v56, 0LL);
                SmartObjStackRefBase<tagMENU>::Init(v57, v29);
                v34 = *a1;
                v57[2] = 0LL;
                LockPopupMenu((__int64)a1, (__int64 *)(*v34 + 40), (__int64)v57);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v57);
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x100000u;
                  xxxMNSetCapture(a1, a2);
                }
                if ( (*(_BYTE *)(v27[5] + 31LL) & 0x40) == 0 )
                {
                  v36 = **a1;
                  if ( *(_QWORD *)(v36 + 40) )
                  {
                    v38 = v27[21];
                    if ( v38 == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v49, v27[20]);
                      v39 = *a1;
                      v50 = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v39 + 48), (__int64)v49);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v49);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v49, v38);
                      v40 = *a1;
                      v50 = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v40 + 48), (__int64)v49);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v49);
                    }
                  }
                }
                ThreadUnlock1(v36, v35, v37);
                ThreadUnlock1(v42, v41, v43);
                *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
LABEL_92:
                if ( *(_QWORD *)(*(_QWORD *)v51[0] + 24LL) )
                  xxxMNCloseHierarchy(*(_QWORD *)v51[0], a2);
                xxxMNSelectItem(a1, a2);
                if ( v30 )
                  goto LABEL_108;
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
        if ( a3 != 39 )
          v13 = -1;
        if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v13, 0LL) == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
      }
      v30 = v62;
      goto LABEL_92;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v63 != v48 )
      {
        if ( a3 != 37 )
          v14 = 37;
        a3 = v14;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v47, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(v47, a2, a3);
      goto LABEL_53;
    }
    v20 = **a1;
    if ( v20 == *(_QWORD *)(v20 + 64) )
    {
      if ( (*(_DWORD *)v20 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
      goto LABEL_56;
    }
    ThreadLock(*(_QWORD *)(v20 + 32), &v54);
LABEL_60:
    xxxSendMessage(*(_QWORD *)(**a1 + 32));
    goto LABEL_61;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
}

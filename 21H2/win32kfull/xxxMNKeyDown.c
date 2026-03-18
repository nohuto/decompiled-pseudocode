/*
 * XREFs of xxxMNKeyDown @ 0x1C0231A20
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     _GetSubMenu @ 0x1C00BC870 (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022EB14 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C022F774 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C02300E8 (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C023021C (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0230354 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0233B40 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0233F20 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C024A834 (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C024D6D8 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C024D7E8 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  int MenuInheritedContextHelpId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // esi
  int v16; // r13d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // r15d
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // r15
  __int64 v30; // rax
  __int64 v31; // r12
  int v32; // r14d
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // r8
  int v47; // ecx
  _QWORD v49[2]; // [rsp+30h] [rbp-A9h] BYREF
  int v50; // [rsp+40h] [rbp-99h]
  __int128 v51; // [rsp+48h] [rbp-91h] BYREF
  __int64 v52; // [rsp+58h] [rbp-81h]
  _QWORD v53[2]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v54; // [rsp+70h] [rbp-69h]
  _QWORD v55[2]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v56; // [rsp+88h] [rbp-51h]
  __int128 v57; // [rsp+90h] [rbp-49h]
  _QWORD v58[2]; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v59[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v60; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-1h]
  __int128 v62; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v63; // [rsp+F0h] [rbp+17h]
  BOOL v64; // [rsp+150h] [rbp+77h]
  int v65; // [rsp+158h] [rbp+7Fh]

  v51 = 0LL;
  v52 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v55, 0LL);
  v6 = *(_DWORD *)(a2 + 8);
  if ( (v6 & 8) != 0 )
  {
    if ( a3 != 112 )
    {
      if ( (v6 & 0x80u) != 0 && a3 == 27 )
        *(_DWORD *)(a2 + 8) = v6 | 0x2000;
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
    }
    goto LABEL_18;
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v46 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v47 = *(_DWORD *)(*v46 + 4LL) & 3;
        if ( v46[2] )
        {
          if ( !v47 )
            goto LABEL_107;
        }
        else if ( !v47 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v46, *(_DWORD *)(**a1 + 80));
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
        }
      }
      goto LABEL_110;
    case 0x12u:
LABEL_15:
      if ( (v6 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0
        && **a1 != *(_QWORD *)(**a1 + 64)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
      {
        if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v49, *(_QWORD *)(**a1 + 64));
          **(_DWORD **)v49[0] &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          else
            xxxMNCloseHierarchy(*(_QWORD *)v49[0], a2);
LABEL_53:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v49);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
        }
        ThreadLock(*(_QWORD *)(**a1 + 32), (__int64 *)&v51);
        goto LABEL_60;
      }
LABEL_110:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
      goto LABEL_22;
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 == 112 )
        {
LABEL_18:
          v7 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
          if ( !*(_QWORD *)(**a1 + 8) || !v7 )
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
          v8 = *(_QWORD *)(**a1 + 8);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v51 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v51;
          *((_QWORD *)&v51 + 1) = v8;
          HMLockObject(v8);
          MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
          xxxSendHelpMessage(*(_QWORD *)(**a1 + 8), MenuInheritedContextHelpId);
LABEL_21:
          ThreadUnlock1(v12, v11, v13);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
        }
        if ( a3 != 121 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
        goto LABEL_15;
      }
LABEL_22:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v14 = -1LL;
        if ( a3 != 38 )
          v14 = 1LL;
        MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v14, 0LL);
        goto LABEL_58;
      }
LABEL_107:
      xxxMNOpenHierarchy(a1, a2);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
    }
  }
  v15 = 1;
  v16 = 39;
  v17 = **a1;
  v50 = (*(_DWORD *)v17 >> 22) & 1;
  v65 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v65 != v50 )
  {
    v18 = 39;
    if ( a3 != 37 )
      v18 = 37;
    a3 = v18;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (*(_DWORD *)**a1 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v64 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
      }
    }
    else
    {
      v64 = (*(_DWORD *)**a1 & 0x400) != 0;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v55, **a1);
    if ( (*(_DWORD *)**a1 & 2) == 0 || (v19 = 1LL, **a1 != *(_QWORD *)(**a1 + 64)) )
      v19 = 0LL;
    v20 = 0xFFFFFFFFLL;
    if ( a3 != 37 )
      v20 = 1LL;
    v21 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v20, v19);
    if ( v21 != -1 )
    {
LABEL_56:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        if ( v21 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
LABEL_58:
        xxxMNSelectItem(a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
      }
      if ( v21 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
        {
          v60 = 0LL;
          v57 = 0LL;
          v61 = 0LL;
          v63 = 0LL;
          v23 = *a1;
          v62 = 0LL;
          v24 = **a1;
          v25 = (*(_DWORD *)*v23 & 4) != 0 ? (_QWORD *)GetSubMenu(*(_QWORD *)(v24 + 40)) : *(_QWORD **)(v24 + 40);
          v56 = v25 ? *v25 : 0LL;
          ThreadLock(*(_QWORD *)(**a1 + 8), (__int64 *)&v51);
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v27, v26, v28);
          v29 = (_QWORD *)HMValidateHandleNoSecure(SDWORD2(v57), 1);
          if ( v29 )
          {
            if ( v29[2] == gptiCurrent )
            {
              v30 = HMValidateHandleNoRip(v57, 2);
              v31 = v30;
              if ( v30 )
              {
                ThreadLock(v30, (__int64 *)&v60);
                ThreadLock((__int64)v29, (__int64 *)&v62);
                v32 = v64;
                if ( (*(_BYTE *)(v29[5] + 31LL) & 0x20) != 0 )
                  v32 = 1;
                xxxMNSelectItem(a1, a2);
                *(_DWORD *)(a2 + 8) |= 2u;
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                *(_DWORD *)**a1 &= ~0x80u;
                v33 = v29[20];
                if ( v33 && GetSubMenu(v33) == v31 )
                  v31 = v29[20];
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                v34 = *a1;
                v49[1] = v29;
                v49[0] = *v34 + 8;
                HMAssignmentLock(v49, 0LL);
                v35 = *a1;
                v58[1] = v29;
                v58[0] = *v35 + 16;
                HMAssignmentLock(v58, 0LL);
                SmartObjStackRefBase<tagMENU>::Init(v59, v31);
                v36 = *a1;
                v59[2] = 0LL;
                LockPopupMenu((__int64)a1, (__int64 *)(*v36 + 40), (__int64)v59);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v59);
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
                  xxxMNSetCapture(a1, a2);
                }
                if ( (*(_BYTE *)(v29[5] + 31LL) & 0x40) == 0 )
                {
                  v38 = **a1;
                  if ( *(_QWORD *)(v38 + 40) )
                  {
                    v40 = v29[21];
                    if ( v40 == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v53, v29[20]);
                      v41 = *a1;
                      v54 = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v41 + 48), (__int64)v53);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v53);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v53, v40);
                      v42 = *a1;
                      v54 = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v42 + 48), (__int64)v53);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v53);
                    }
                  }
                }
                ThreadUnlock1(v38, v37, v39);
                ThreadUnlock1(v44, v43, v45);
                *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
LABEL_91:
                if ( *(_QWORD *)(*(_QWORD *)v55[0] + 24LL) )
                  xxxMNCloseHierarchy(*(_QWORD *)v55[0], a2);
                xxxMNSelectItem(a1, a2);
                if ( v32 )
                  goto LABEL_107;
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
        if ( a3 != 39 )
          v15 = -1;
        if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v15, 0LL) == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
      }
      v32 = v64;
      goto LABEL_91;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v65 != v50 )
      {
        if ( a3 != 37 )
          v16 = 37;
        a3 = v16;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v49, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(v49, a2, a3);
      goto LABEL_53;
    }
    v22 = **a1;
    if ( v22 == *(_QWORD *)(v22 + 64) )
    {
      if ( (*(_DWORD *)v22 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
      goto LABEL_56;
    }
    ThreadLock(*(_QWORD *)(v22 + 32), (__int64 *)&v51);
LABEL_60:
    xxxSendMessage(*(_QWORD *)(**a1 + 32));
    goto LABEL_21;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v55);
}

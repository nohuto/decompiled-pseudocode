/*
 * XREFs of xxxMNSelectItem @ 0x1C02334EC
 * Callers:
 *     xxxMNButtonDown @ 0x1C02304EC (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0233F20 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C022F878 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0230248 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C0247828 (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD v50[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v51[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v52[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h]
  _QWORD v54[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h]
  _QWORD v57[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h]
  _QWORD v60[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int128 v63; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v64; // [rsp+108h] [rbp+8h]
  __int128 v65; // [rsp+110h] [rbp+10h] BYREF
  __int64 v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+160h] [rbp+60h]

  v3 = a3;
  v56 = 0LL;
  v66 = 0LL;
  v59 = 0LL;
  v55 = 0LL;
  v65 = 0LL;
  v58 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v52, 0LL);
  v6 = *a1;
  v7 = 0LL;
  v53 = 0LL;
  if ( *(_DWORD *)(*v6 + 80) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != -1 && (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      v7 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96 * v3;
    goto LABEL_45;
  }
  v8 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  v9 = v8;
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v8 )
    goto LABEL_45;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v10 = *(_QWORD *)(**a1 + 40);
  v53 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v52, v10);
  v11 = v53;
  if ( !v53 )
    v11 = *(_QWORD *)v52[0];
  ThreadLock(v11, (__int64 *)&v58);
  v12 = *(_QWORD *)(**a1 + 8);
  v67 = v12;
  ThreadLock(v12, (__int64 *)&v55);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v13 = *(_QWORD *)(v9 + 8);
    if ( v13 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v50, v13);
      FindTimer(*(_QWORD *)(*(_QWORD *)v50[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v50[0] &= ~0x4000u;
      if ( (**(_DWORD **)v50[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v50[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v50[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v50[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v50[0] + 84LL) )
      {
        v62 = 0LL;
        v64 = 0LL;
        v61 = 0LL;
        v63 = 0LL;
        SmartObjStackRefBase<tagMENU>::Init(v54, *(_QWORD *)(*(_QWORD *)v50[0] + 40LL));
        v54[2] = 0LL;
        v14 = *(_QWORD *)(*(_QWORD *)v50[0] + 8LL);
        ThreadLock(*(_QWORD *)v54[0], (__int64 *)&v61);
        ThreadLock(v14, (__int64 *)&v63);
        if ( *(_DWORD *)(*(_QWORD *)v50[0] + 80LL) != -1 )
          xxxMNInvertItem(v50, v54, *(unsigned int *)(*(_QWORD *)v50[0] + 80LL), v14, 0);
        *(_DWORD *)(*(_QWORD *)v50[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v50[0] + 84LL);
        xxxMNInvertItem(v50, v54, *(unsigned int *)(*(_QWORD *)v50[0] + 84LL), v14, 1);
        ThreadUnlock1(v16, v15, v17);
        ThreadUnlock1(v19, v18, v20);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v54);
        v12 = v67;
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v21 = **a1;
      v57[1] = *(_QWORD *)(v21 + 16);
      v57[0] = *(_QWORD *)(v21 + 64) + 56LL;
      HMAssignmentLock(v57, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v50);
    }
  }
  v22 = **a1;
  if ( *(int *)(v22 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v22 + 80) + 4) > 1 )
      goto LABEL_28;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v22 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, a2);
    else
      MNSetTimerToCloseHierarchy((__int64)a1);
  }
  xxxMNInvertItem(a1, v52, *(unsigned int *)(**a1 + 80), v12, 0);
LABEL_28:
  *(_DWORD *)(**a1 + 80) = v3;
  if ( (_DWORD)v3 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v29 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
    else
      v29 = -4;
    xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v29, 0, 0);
    ThreadUnlock1(v31, v30, v32);
    ThreadUnlock1(v34, v33, v35);
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_45;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, 0LL);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v36 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v37 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v37 || (v36 = *(_QWORD *)(v37 + 8)) == 0 )
      {
LABEL_44:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
        goto LABEL_45;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v51, v36);
    if ( *(_QWORD *)v51[0] && *(_QWORD *)(*(_QWORD *)v51[0] + 8LL) )
    {
      v38 = *(_QWORD *)(*(_QWORD *)v51[0] + 8LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v55 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v55;
      *((_QWORD *)&v55 + 1) = v38;
      HMLockObject(v38);
      ThreadLock(*(_QWORD *)(*(_QWORD *)v51[0] + 16LL), (__int64 *)&v65);
      ThreadLock(*(_QWORD *)(*(_QWORD *)v51[0] + 40LL), (__int64 *)&v58);
      LODWORD(v38) = *(_DWORD *)(*(_QWORD *)v51[0] + 80LL);
      SmartObjStackRefBase<tagMENU>::Init(v60, *(_QWORD *)(*(_QWORD *)v51[0] + 40LL));
      v60[2] = 0LL;
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v51[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v51[0] + 16LL),
        (unsigned int)v60,
        v38,
        a2);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v60);
      ThreadUnlock1(v41, v40, v42);
      ThreadUnlock1(v44, v43, v45);
      ThreadUnlock1(v47, v46, v48);
    }
    goto LABEL_44;
  }
  *(_DWORD *)(a2 + 8) &= 0xFFFFAFFF;
  if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
    xxxMNDoScroll((__int64)a1, v3, 1);
  v7 = xxxMNInvertItem(a1, v52, (unsigned int)v3, v12, 1);
  ThreadUnlock1(v24, v23, v25);
  ThreadUnlock1(v27, v26, v28);
LABEL_45:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v52);
  return v7;
}

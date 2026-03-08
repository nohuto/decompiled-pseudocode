/*
 * XREFs of xxxMNSelectItem @ 0x1C021C660
 * Callers:
 *     xxxMNButtonDown @ 0x1C02197A8 (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0219CB8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C021D0B4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0241E88 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0218B30 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0219500 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C0237090 (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C0242A9C (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
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
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD v49[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v50[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v51[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-A0h]
  _QWORD v53[3]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v54[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v55; // [rsp+98h] [rbp-70h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-60h]
  __int128 v57; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-48h]
  _QWORD v59[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v60; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-18h]
  __int128 v62; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v63; // [rsp+108h] [rbp+0h]
  __int128 v64; // [rsp+110h] [rbp+8h] BYREF
  __int64 v65; // [rsp+120h] [rbp+18h]

  v3 = a3;
  v56 = 0LL;
  v65 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v64 = 0LL;
  v57 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v51, 0LL);
  v6 = *a1;
  v52 = 0LL;
  if ( *(_DWORD *)(*v6 + 80) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != -1 && (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96 * v3;
      goto LABEL_46;
    }
LABEL_45:
    v7 = 0LL;
    goto LABEL_46;
  }
  v8 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v8 )
    goto LABEL_45;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(void **)(**a1 + 16), (void *)0xFFFE, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v9 = *(_QWORD *)(**a1 + 40);
  v52 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v51, v9);
  v10 = v52;
  if ( !v52 )
    v10 = *(_QWORD *)v51[0];
  ThreadLock(v10, &v57);
  v11 = *(_QWORD *)(**a1 + 8);
  ThreadLock(v11, &v55);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v12 = *(_QWORD *)(v8 + 8);
    if ( v12 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v49, v12);
      FindTimer(*(void **)(*(_QWORD *)v49[0] + 16LL), (void *)0xFFFF, 0, 1, 0LL);
      **(_DWORD **)v49[0] &= ~0x4000u;
      if ( (**(_DWORD **)v49[0] & 0x2000) != 0 )
      {
        FindTimer(*(void **)(*(_QWORD *)v49[0] + 16LL), (void *)0xFFFE, 0, 1, 0LL);
        **(_DWORD **)v49[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v49[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v49[0] + 84LL) )
      {
        v61 = 0LL;
        v63 = 0LL;
        v60 = 0LL;
        v62 = 0LL;
        SmartObjStackRefBase<tagMENU>::Init(v53, *(_QWORD *)(*(_QWORD *)v49[0] + 40LL));
        v53[2] = 0LL;
        v13 = *(_QWORD *)(*(_QWORD *)v49[0] + 8LL);
        ThreadLock(*(_QWORD *)v53[0], &v60);
        ThreadLock(v13, &v62);
        if ( *(_DWORD *)(*(_QWORD *)v49[0] + 80LL) != -1 )
          xxxMNInvertItem(v49, v53, *(unsigned int *)(*(_QWORD *)v49[0] + 80LL), v13, 0);
        *(_DWORD *)(*(_QWORD *)v49[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v49[0] + 84LL);
        xxxMNInvertItem(v49, v53, *(unsigned int *)(*(_QWORD *)v49[0] + 84LL), v13, 1);
        ThreadUnlock1(v15, v14, v16);
        ThreadUnlock1(v18, v17, v19);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v53);
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v20 = **a1;
      v54[1] = *(_QWORD *)(v20 + 16);
      v54[0] = *(_QWORD *)(v20 + 64) + 56LL;
      HMAssignmentLock(v54, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v49);
    }
  }
  v21 = **a1;
  if ( *(int *)(v21 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v21 + 80) + 4) > 1 )
      goto LABEL_28;
    FindTimer(*(void **)(**a1 + 16), (void *)*(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v21 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, a2);
    else
      MNSetTimerToCloseHierarchy((__int64)a1);
  }
  xxxMNInvertItem(a1, v51, *(unsigned int *)(**a1 + 80), v11, 0);
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
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v50, 0LL);
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
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v50);
        goto LABEL_45;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v50, v36);
    if ( *(_QWORD *)v50[0] && *(_QWORD *)(*(_QWORD *)v50[0] + 8LL) )
    {
      ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL), &v55);
      ThreadLock(*(_QWORD *)(*(_QWORD *)v50[0] + 16LL), &v64);
      ThreadLock(*(_QWORD *)(*(_QWORD *)v50[0] + 40LL), &v57);
      v38 = *(_DWORD *)(*(_QWORD *)v50[0] + 80LL);
      SmartObjStackRefBase<tagMENU>::Init(v59, *(_QWORD *)(*(_QWORD *)v50[0] + 40LL));
      v59[2] = 0LL;
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v50[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v50[0] + 16LL),
        (unsigned int)v59,
        v38,
        a2);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v59);
      ThreadUnlock1(v40, v39, v41);
      ThreadUnlock1(v43, v42, v44);
      ThreadUnlock1(v46, v45, v47);
    }
    goto LABEL_44;
  }
  v22 = *(_DWORD *)(a2 + 8) & 0xFFFFAFFF;
  *(_DWORD *)(a2 + 8) = v22;
  if ( (v22 & 8) != 0 )
    xxxMNDoScroll((__int64)a1, v3, 1);
  v7 = xxxMNInvertItem(a1, v51, (unsigned int)v3, v11, 1);
  ThreadUnlock1(v24, v23, v25);
  ThreadUnlock1(v27, v26, v28);
LABEL_46:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v51);
  return v7;
}

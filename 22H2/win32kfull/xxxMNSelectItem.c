/*
 * XREFs of xxxMNSelectItem @ 0x1C023A5BC
 * Callers:
 *     xxxMNButtonDown @ 0x1C0236CBC (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C0236ED4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02372E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B334 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C025046C (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235BEC (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0236840 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0237760 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C024BE2C (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C0250E4C (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  struct _KTHREAD *v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // ebx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 *v60; // rax
  _QWORD *v61; // rax
  _QWORD v63[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v64[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v65; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A0h]
  __int128 v67; // [rsp+68h] [rbp-98h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h]
  _QWORD v69[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h]
  _QWORD v71[3]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v72; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-40h]
  _QWORD v74[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v75[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v76[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v77[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v78; // [rsp+160h] [rbp+60h]
  struct _KTHREAD *CurrentThread; // [rsp+178h] [rbp+78h]

  v3 = a3;
  v66 = 0LL;
  v73 = 0LL;
  v68 = 0LL;
  v65 = 0LL;
  v72 = 0LL;
  v67 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v69, 0LL);
  v6 = *a1;
  v7 = 0LL;
  v70 = 0LL;
  if ( *(_DWORD *)(*v6 + 80) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != -1 && (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      v7 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96 * v3;
    goto LABEL_75;
  }
  v8 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  v9 = v8;
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v8 )
    goto LABEL_75;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  SmartObjStackRefBase<tagMENU>::operator=(v69, *(_QWORD *)(**a1 + 40));
  v10 = v70;
  if ( !v70 )
    v10 = *(_QWORD *)v69[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v67 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v67;
  *((_QWORD *)&v67 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  v12 = *(_QWORD *)(**a1 + 8);
  v78 = v12;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v65 = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = &v65;
  *((_QWORD *)&v65 + 1) = v12;
  if ( v12 )
    HMLockObject(v12);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v14 = *(_QWORD *)(v9 + 8);
    if ( v14 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v63, v14);
      FindTimer(*(_QWORD *)(*(_QWORD *)v63[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v63[0] &= ~0x4000u;
      if ( (**(_DWORD **)v63[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v63[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v63[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v63[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v63[0] + 84LL) )
      {
        v75[2] = 0LL;
        v76[2] = 0LL;
        SmartObjStackRefBase<tagMENU>::Init(v71, *(_QWORD *)(*(_QWORD *)v63[0] + 40LL));
        v71[2] = 0LL;
        v15 = *(_QWORD *)(*(_QWORD *)v63[0] + 8LL);
        v16 = *(_QWORD *)v71[0];
        v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v75[0] = *(_QWORD *)(v17 + 416);
        *(_QWORD *)(v17 + 416) = v75;
        v75[1] = v16;
        if ( v16 )
          HMLockObject(v16);
        v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v76[0] = *(_QWORD *)(v18 + 416);
        *(_QWORD *)(v18 + 416) = v76;
        v76[1] = v15;
        if ( v15 )
          HMLockObject(v15);
        if ( *(_DWORD *)(*(_QWORD *)v63[0] + 80LL) != -1 )
          xxxMNInvertItem(v63, v71, *(unsigned int *)(*(_QWORD *)v63[0] + 80LL), v15, 0);
        *(_DWORD *)(*(_QWORD *)v63[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v63[0] + 84LL);
        xxxMNInvertItem(v63, v71, *(unsigned int *)(*(_QWORD *)v63[0] + 84LL), v15, 1);
        ThreadUnlock1(v19);
        ThreadUnlock1(v20);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v71);
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v21 = **a1;
      v74[0] = *(_QWORD *)(v21 + 64) + 56LL;
      v74[1] = *(_QWORD *)(v21 + 16);
      HMAssignmentLock(v74);
      v22 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v23)
        || (CurrentProcess = PsGetCurrentProcess(v25, v24, v26),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v31 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v31 )
          v22 = *v31;
      }
      if ( v63[0] != gSmartObjNullRef && !--*(_DWORD *)(v63[0] + 8LL) )
      {
        if ( *(_BYTE *)(v63[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v63[0]);
      }
      v32 = *(_QWORD **)(v22 + 1472);
      v12 = v78;
      if ( v32 )
        *(_QWORD *)(v22 + 1472) = *v32;
    }
  }
  v33 = **a1;
  if ( *(int *)(v33 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v33 + 80) + 4) > 1 )
      goto LABEL_45;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v33 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, a2);
    else
      MNSetTimerToCloseHierarchy(a1);
  }
  xxxMNInvertItem(a1, v69, *(unsigned int *)(**a1 + 80), v12, 0);
LABEL_45:
  *(_DWORD *)(**a1 + 80) = v3;
  if ( (_DWORD)v3 != -1 )
  {
    *(_DWORD *)(a2 + 8) &= 0xFFFFAFFF;
    if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
      xxxMNDoScroll((__int64)a1, v3, 1);
    v7 = xxxMNInvertItem(a1, v69, (unsigned int)v3, v12, 1);
    ThreadUnlock1(v34);
    ThreadUnlock1(v35);
    goto LABEL_75;
  }
  if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
    v36 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
  else
    v36 = -4;
  xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v36, 0, 0);
  ThreadUnlock1(v37);
  ThreadUnlock1(v38);
  if ( !*(_QWORD *)(**a1 + 32) )
    goto LABEL_75;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v64, 0LL);
  if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
  {
    v39 = *(_QWORD *)(**a1 + 64);
    goto LABEL_58;
  }
  v40 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  if ( v40 )
  {
    v39 = *(_QWORD *)(v40 + 8);
    if ( v39 )
    {
LABEL_58:
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v64, v39);
      if ( *(_QWORD *)v64[0] )
      {
        v41 = *(_QWORD *)v64[0];
        if ( *(_QWORD *)(*(_QWORD *)v64[0] + 8LL) )
        {
          v42 = *(_QWORD *)(*(_QWORD *)v64[0] + 8LL);
          v43 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v65 = *(_QWORD *)(v43 + 416);
          *(_QWORD *)(v43 + 416) = &v65;
          *((_QWORD *)&v65 + 1) = v42;
          HMLockObject(v42);
          v44 = *(_QWORD *)(*(_QWORD *)v64[0] + 16LL);
          v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v72 = *(_QWORD *)(v45 + 416);
          *(_QWORD *)(v45 + 416) = &v72;
          *((_QWORD *)&v72 + 1) = v44;
          if ( v44 )
            HMLockObject(v44);
          v46 = *(_QWORD *)(*(_QWORD *)v64[0] + 40LL);
          v47 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v67 = *(_QWORD *)(v47 + 416);
          *(_QWORD *)(v47 + 416) = &v67;
          *((_QWORD *)&v67 + 1) = v46;
          if ( v46 )
            HMLockObject(v46);
          SmartObjStackRefBase<tagMENU>::Init(v77, *(_QWORD *)(*(_QWORD *)v64[0] + 40LL));
          v77[2] = 0LL;
          xxxSendMenuSelect(
            *(_QWORD *)(*(_QWORD *)v64[0] + 8LL),
            *(_QWORD *)(*(_QWORD *)v64[0] + 16LL),
            (unsigned int)v77,
            *(_DWORD *)(*(_QWORD *)v64[0] + 80LL),
            a2);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v77);
          ThreadUnlock1(v48);
          ThreadUnlock1(v49);
          ThreadUnlock1(v50);
        }
      }
    }
  }
  v51 = KeGetCurrentThread();
  v52 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v41)
    || (v56 = PsGetCurrentProcess(v54, v53, v55),
        v57 = PsGetProcessSessionIdEx(v56),
        v59 = PsGetCurrentThreadProcess(v58),
        v57 == (unsigned int)PsGetProcessSessionIdEx(v59)) )
  {
    v60 = (__int64 *)PsGetThreadWin32Thread(v51);
    if ( v60 )
      v52 = *v60;
  }
  if ( v64[0] != gSmartObjNullRef && !--*(_DWORD *)(v64[0] + 8LL) )
  {
    if ( *(_BYTE *)(v64[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v64[0]);
  }
  v61 = *(_QWORD **)(v52 + 1472);
  if ( v61 )
    *(_QWORD *)(v52 + 1472) = *v61;
LABEL_75:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v69);
  return v7;
}

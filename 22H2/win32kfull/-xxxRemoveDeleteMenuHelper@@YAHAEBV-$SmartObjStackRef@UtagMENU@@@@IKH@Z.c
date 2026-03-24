/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0047358
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C010A690 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C0120E80 (NtUserRemoveMenu.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C00478F8 (MNGetPopupFromMenu.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00479EC (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     MNFreeItem @ 0x1C0049080 (MNFreeItem.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     MNLookUpItem @ 0x1C0061B00 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     DwmGetClassStyle @ 0x1C00EA158 (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C0102A24 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0249118 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0249294 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, unsigned int a4)
{
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // esi
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rdx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  void *v36; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v39; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v41; // [rsp+20h] [rbp-60h] BYREF
  __int64 v42; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v43[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v44[16]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v46; // [rsp+60h] [rbp-20h]
  _QWORD v47[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v48; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v45, a1);
  SmartObjStackRefBase<tagMENU>::Init(v47, 0LL);
  v42 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v43, 0LL);
  v7 = 0;
  v48 = v46;
  SmartObjStackRefBase<tagMENU>::operator=(v47);
  v8 = v46;
  if ( v46 )
  {
    v9 = v46;
  }
  else
  {
    v8 = 0LL;
    v9 = *(_QWORD *)v45[0];
  }
  v41 = v9;
  if ( !v8 )
    v8 = *(_QWORD *)v45[0];
  v10 = a3 & 0x400;
  v11 = MNLookUpItem(v8, a2, v10, &v41);
  v46 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v45);
  if ( v11 )
    goto LABEL_6;
  if ( a2 < 0xFFFFF000 || v10 )
    goto LABEL_36;
  v46 = v48;
  SmartObjStackRefBase<tagMENU>::operator=(v45);
  v31 = v46;
  if ( v46 )
  {
    v32 = v46;
  }
  else
  {
    v31 = 0LL;
    v32 = *(_QWORD *)v45[0];
  }
  v41 = v32;
  if ( !v31 )
    v31 = *(_QWORD *)v45[0];
  v11 = MNLookUpItem(v31, (unsigned __int16)a2, 0LL, &v41);
  v46 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v45);
  if ( v11 )
  {
LABEL_6:
    v13 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 40LL) & 0x100) == 0
      || (v14 = 1, *(_DWORD *)(*(_QWORD *)v11 + 8LL) != 61536) )
    {
      v14 = 0;
    }
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 0x1000) != 0 )
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 40LL) &= ~0x400u;
    v15 = v46;
    if ( !v46 )
      v15 = *(_QWORD *)v45[0];
    v16 = MNGetPopupFromMenu(v15, &v42);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v43, v16);
    if ( *(_QWORD *)v43[0] )
    {
      v33 = v46;
      if ( !v46 )
        v33 = *(_QWORD *)v45[0];
      v7 = MNGetpItemIndex(v33, v11);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v44, *(_QWORD *)v43[0]);
      MNDeleteAdjustIndexes(v42, v44, v7);
    }
    v17 = v46;
    if ( !v46 )
      v17 = *(_QWORD *)v45[0];
    MNFreeItem(v17, v11, a4);
    *(_DWORD *)(*(_QWORD *)v45[0] + 64LL) = 0;
    *(_DWORD *)(*(_QWORD *)v45[0] + 68LL) = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL) == 1 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v45[0] + 24LL) + 128LL), 0, *(PVOID *)(*(_QWORD *)v45[0] + 96LL));
      Win32FreePool(*(void **)(*(_QWORD *)v45[0] + 88LL));
      *(_DWORD *)(*(_QWORD *)v45[0] + 60LL) = 0;
      v30 = *(_QWORD *)v45[0];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 32LL) = 0LL;
      *(_QWORD *)(v30 + 88) = 0LL;
    }
    else
    {
      v18 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL)
          + *(_DWORD *)(*(_QWORD *)v45[0] + 88LL)
          - v11
          - 96;
      if ( 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL)
         + *(_DWORD *)(*(_QWORD *)v45[0] + 88LL)
         - (_DWORD)v11 != 96 )
      {
        memmove(
          *(void **)v11,
          *(const void **)(v11 + 96),
          (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL)
                       + **(_DWORD **)(*(_QWORD *)v45[0] + 88LL)
                       - *(_DWORD *)(v11 + 96)));
        memmove((void *)v11, (const void *)(v11 + 96), v18);
        v19 = (v11 - *(_QWORD *)(*(_QWORD *)v45[0] + 88LL)) / 96;
        while ( (unsigned int)v19 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL) - 1 )
        {
          v20 = 96LL * (int)v19;
          *(_QWORD *)(v20 + *(_QWORD *)(*(_QWORD *)v45[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v45[0] + 96LL)
                                                                   + 112LL * (unsigned int)v19;
          LODWORD(v19) = v19 + 1;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 88LL) + v20 + 8) = *(_QWORD *)(v20
                                                                                   + *(_QWORD *)(*(_QWORD *)v45[0] + 88LL))
                                                                       - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 24LL)
                                                                                   + 16LL);
        }
      }
      v21 = *(_QWORD *)v45[0];
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v45[0] + 60LL)
                        - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL)) >= 9 )
      {
        LOBYTE(v21) = 1;
        MNAllocMenuItems(v45, v21);
      }
    }
    v12 = *(_QWORD *)v45[0];
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL);
    if ( v14 )
    {
      v12 = *(_QWORD *)v45[0];
      if ( *(_QWORD *)(*(_QWORD *)v45[0] + 80LL) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v45[0] + 80LL)) )
        {
          DirtyVisRgnTrackers(*(_QWORD *)(*(_QWORD *)v45[0] + 80LL));
          DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v45[0] + 80LL));
          v36 = (void *)ReferenceDwmApiPort(v35, v34);
          DwmAsyncChildStyleChange(v36);
        }
      }
    }
    if ( *(_QWORD *)v43[0] )
      xxxMNUpdateShownMenu(v43, *(_QWORD *)(*(_QWORD *)v45[0] + 88LL) + 96LL * v7, 2LL);
  }
  else
  {
LABEL_36:
    v13 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (CurrentProcess = PsGetCurrentProcess(v25, v24, v26),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v39),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v23 = *ThreadWin32Thread;
  }
  if ( v43[0] != gSmartObjNullRef && !--*(_DWORD *)(v43[0] + 8LL) )
  {
    if ( *(_BYTE *)(v43[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v43[0]);
  }
  v28 = *(_QWORD **)(v23 + 1472);
  if ( v28 )
    *(_QWORD *)(v23 + 1472) = *v28;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v47);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v45);
  return v13;
}

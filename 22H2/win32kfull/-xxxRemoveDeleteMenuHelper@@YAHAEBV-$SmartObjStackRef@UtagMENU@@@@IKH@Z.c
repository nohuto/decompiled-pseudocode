/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00649F8
 * Callers:
 *     NtUserDeleteMenu @ 0x1C0065AE0 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C0067250 (NtUserRemoveMenu.c)
 *     xxxDeleteMenu @ 0x1C013DB68 (xxxDeleteMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C005A604 (DwmGetClassStyle.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNFreeItem @ 0x1C0062AE0 (MNFreeItem.c)
 *     MNGetpItemIndex @ 0x1C0064060 (MNGetpItemIndex.c)
 *     MNGetPopupFromMenu @ 0x1C0064740 (MNGetPopupFromMenu.c)
 *     MNLookUpItem @ 0x1C006482C (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C0065078 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00652F4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C023142C (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02314D0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, int a4)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v23; // r15d
  unsigned __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  void *v31; // rax
  __int64 v32; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v33; // [rsp+28h] [rbp-58h] BYREF
  _QWORD *v34; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v36[16]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v38; // [rsp+60h] [rbp-20h]
  _QWORD *v39; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+70h] [rbp-10h] BYREF
  __int64 v41; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v37, a1);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v8 = 0;
  v39 = (_QWORD *)gSmartObjNullRef;
  v33 = 0LL;
  v40 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v40;
  v41 = 0LL;
  v9 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = 0;
  v34 = (_QWORD *)gSmartObjNullRef;
  v35 = *(_QWORD *)(v9 + 1512);
  *(_QWORD *)(v9 + 1512) = &v35;
  v41 = v38;
  SmartObjStackRefBase<tagMENU>::operator=(&v39, *(_QWORD *)v37[0]);
  v11 = v38;
  if ( v38 )
  {
    v12 = v38;
  }
  else
  {
    v11 = 0LL;
    v12 = *(_QWORD *)v37[0];
  }
  v32 = v12;
  if ( !v11 )
    v11 = *(_QWORD *)v37[0];
  v13 = a3 & 0x400;
  v14 = MNLookUpItem(v11, a2, v13, &v32);
  v38 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v37, v32);
  if ( v14 )
    goto LABEL_51;
  if ( a2 >= 0xFFFFF000 && !v13 )
  {
    v38 = v41;
    SmartObjStackRefBase<tagMENU>::operator=(v37, *v39);
    v27 = v38;
    if ( v38 )
    {
      v28 = v38;
    }
    else
    {
      v27 = 0LL;
      v28 = *(_QWORD *)v37[0];
    }
    v32 = v28;
    if ( !v27 )
      v27 = *(_QWORD *)v37[0];
    v14 = MNLookUpItem(v27, (unsigned __int16)a2, 0, &v32);
    v38 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v37, v32);
    if ( v14 )
    {
LABEL_51:
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 40LL) & 0x100) == 0
        || (v15 = 1, *(_DWORD *)(*(_QWORD *)v14 + 8LL) != 61536) )
      {
        v15 = 0;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v14 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 40LL) &= ~0x400u;
      v16 = v38;
      if ( !v38 )
        v16 = *(_QWORD *)v37[0];
      v17 = MNGetPopupFromMenu(v16, &v33);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v34, v17);
      if ( *v34 )
      {
        v29 = v38;
        if ( !v38 )
          v29 = *(_QWORD *)v37[0];
        v10 = MNGetpItemIndex(v29, v14);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, *v34);
        MNDeleteAdjustIndexes(v33, v36, v10);
      }
      v18 = v38;
      if ( !v38 )
        v18 = *(_QWORD *)v37[0];
      MNFreeItem(v18, v14, a4);
      *(_DWORD *)(*(_QWORD *)v37[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v37[0] + 68LL) = 0;
      v20 = *(_QWORD *)v37[0];
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v37[0] + 24LL) + 136LL), 0, *(PVOID *)(v20 + 96));
        Win32FreePool(*(void **)(*(_QWORD *)v37[0] + 88LL));
        *(_DWORD *)(*(_QWORD *)v37[0] + 60LL) = 0;
        v21 = *(_QWORD *)v37[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 32LL) = 0LL;
        *(_QWORD *)(v21 + 88) = 0LL;
      }
      else
      {
        v23 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL) - v14 + *(_QWORD *)(v20 + 88) - 96;
        if ( v23 )
        {
          memmove(
            *(void **)v14,
            *(const void **)(v14 + 96),
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL)
                         + **(_DWORD **)(*(_QWORD *)v37[0] + 88LL)
                         - *(_DWORD *)(v14 + 96)));
          memmove((void *)v14, (const void *)(v14 + 96), v23);
          v24 = 0xAAAAAAAAAAAAAAABuLL * ((v14 - *(_QWORD *)(*(_QWORD *)v37[0] + 88LL)) >> 5);
          while ( (unsigned int)v24 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL) - 1 )
          {
            v25 = 96LL * (int)v24;
            *(_QWORD *)(v25 + *(_QWORD *)(*(_QWORD *)v37[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v37[0] + 96LL)
                                                                     + 112LL * (unsigned int)v24;
            v19 = *(_QWORD *)(v25 + *(_QWORD *)(*(_QWORD *)v37[0] + 88LL))
                - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 24LL) + 16LL);
            LODWORD(v24) = v24 + 1;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 88LL) + v25 + 8) = v19;
          }
        }
        v26 = *(_QWORD *)v37[0];
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v37[0] + 60LL)
                          - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL)) >= 9 )
        {
          LOBYTE(v26) = 1;
          MNAllocMenuItems(v37, v26, v19);
        }
      }
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL);
      if ( v15
        && *(_QWORD *)(*(_QWORD *)v37[0] + 80LL)
        && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v37[0] + 80LL)) )
      {
        DirtyVisRgnTrackers(*(_QWORD *)(*(_QWORD *)v37[0] + 80LL));
        DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v37[0] + 80LL));
        v30 = v37[0];
        if ( *(_QWORD *)(*(_QWORD *)v37[0] + 80LL) )
          v30 = *(_QWORD *)v37[0];
        v31 = (void *)ReferenceDwmApiPort(v30);
        DwmAsyncChildStyleChange(v31);
      }
      if ( *v34 )
        xxxMNUpdateShownMenu(&v34, *(_QWORD *)(*(_QWORD *)v37[0] + 88LL) + 96LL * v10, 2LL);
      v8 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v34);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v39);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v37);
  return v8;
}

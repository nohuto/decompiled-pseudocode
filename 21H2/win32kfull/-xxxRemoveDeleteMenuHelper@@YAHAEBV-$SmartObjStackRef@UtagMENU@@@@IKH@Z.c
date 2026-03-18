/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C00F6950 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C010D420 (NtUserRemoveMenu.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0043DBC (MNGetPopupFromMenu.c)
 *     MNFreeItem @ 0x1C0065704 (MNFreeItem.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     DwmGetClassStyle @ 0x1C0098E00 (DwmGetClassStyle.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00C2450 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00C2B30 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C024510C (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02451B0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, int a4)
{
  unsigned int v7; // edi
  unsigned int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  _QWORD *v12; // rsi
  int v13; // r14d
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // r15d
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int ClassStyle; // esi
  __int64 v29; // rcx
  __int64 v30; // rbx
  void *v31; // rax
  __int64 v32; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v33; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v34[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v35[16]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v37; // [rsp+60h] [rbp-20h]
  _QWORD v38[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v39; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v36, a1);
  SmartObjStackRefBase<tagMENU>::Init(v38, 0LL);
  v7 = 0;
  v39 = 0LL;
  v33 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v34);
  v8 = 0;
  v39 = v37;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v38, *(_QWORD *)v36[0]);
  v9 = v37;
  if ( v37 )
  {
    v10 = v37;
  }
  else
  {
    v9 = 0LL;
    v10 = *(_QWORD *)v36[0];
  }
  v32 = v10;
  if ( !v9 )
    v9 = *(_QWORD *)v36[0];
  v11 = a3 & 0x400;
  v12 = MNLookUpItem(v9, a2, v11, &v32);
  v37 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v36, v32);
  if ( v12 )
    goto LABEL_52;
  if ( a2 >= 0xFFFFF000 && !v11 )
  {
    v37 = v39;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v36, *(_QWORD *)v38[0]);
    v25 = v37;
    if ( v37 )
    {
      v26 = v37;
    }
    else
    {
      v25 = 0LL;
      v26 = *(_QWORD *)v36[0];
    }
    v32 = v26;
    if ( !v25 )
      v25 = *(_QWORD *)v36[0];
    v12 = MNLookUpItem(v25, (unsigned __int16)a2, 0, &v32);
    v37 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v36, v32);
    if ( v12 )
    {
LABEL_52:
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 40LL) & 0x100) == 0
        || (v13 = 1, *(_DWORD *)(*v12 + 8LL) != 61536) )
      {
        v13 = 0;
      }
      if ( (*(_DWORD *)(*v12 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 40LL) &= ~0x400u;
      v14 = v37;
      if ( !v37 )
        v14 = *(_QWORD *)v36[0];
      v15 = MNGetPopupFromMenu(v14, &v33);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v34, v15);
      if ( *(_QWORD *)v34[0] )
      {
        v27 = v37;
        if ( !v37 )
          v27 = *(_QWORD *)v36[0];
        v8 = MNGetpItemIndex(v27, (__int64)v12);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v35);
        MNDeleteAdjustIndexes(v33, v35, v8);
      }
      v16 = v37;
      if ( !v37 )
        v16 = *(_QWORD *)v36[0];
      MNFreeItem(v16, (__int64)v12, a4);
      *(_DWORD *)(*(_QWORD *)v36[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v36[0] + 68LL) = 0;
      v18 = *(_QWORD *)v36[0];
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v36[0] + 24LL) + 128LL), 0, *(PVOID *)(v18 + 96));
        Win32FreePool(*(_QWORD *)(*(_QWORD *)v36[0] + 88LL));
        *(_DWORD *)(*(_QWORD *)v36[0] + 60LL) = 0;
        v24 = *(_QWORD *)v36[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 32LL) = 0LL;
        *(_QWORD *)(v24 + 88) = 0LL;
      }
      else
      {
        v19 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 44LL) - (_DWORD)v12 + *(_QWORD *)(v18 + 88) - 96;
        if ( v19 )
        {
          memmove(
            (void *)*v12,
            (const void *)v12[12],
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 44LL)
                         + **(_DWORD **)(*(_QWORD *)v36[0] + 88LL)
                         - *((_DWORD *)v12 + 24)));
          memmove(v12, v12 + 12, v19);
          v20 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v12 - *(_QWORD *)(*(_QWORD *)v36[0] + 88LL)) >> 5);
          while ( (unsigned int)v20 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 44LL) - 1 )
          {
            v21 = 96LL * (int)v20;
            *(_QWORD *)(v21 + *(_QWORD *)(*(_QWORD *)v36[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v36[0] + 96LL)
                                                                     + 112LL * (unsigned int)v20;
            v17 = *(_QWORD *)(v21 + *(_QWORD *)(*(_QWORD *)v36[0] + 88LL))
                - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 24LL) + 16LL);
            LODWORD(v20) = v20 + 1;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 88LL) + v21 + 8) = v17;
          }
        }
        v22 = *(_QWORD *)v36[0];
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v36[0] + 60LL)
                          - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 44LL)) >= 9 )
        {
          LOBYTE(v22) = 1;
          MNAllocMenuItems(v36, v22, v17);
        }
      }
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 44LL);
      if ( v13
        && *(_QWORD *)(*(_QWORD *)v36[0] + 80LL)
        && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v36[0] + 80LL)) )
      {
        DirtyVisRgnTrackers(*(struct tagWND **)(*(_QWORD *)v36[0] + 80LL));
        ClassStyle = DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v36[0] + 80LL));
        v29 = *(_QWORD *)v36[0];
        if ( *(_QWORD *)(*(_QWORD *)v36[0] + 80LL) )
        {
          v29 = *(_QWORD *)v36[0];
          v30 = **(_QWORD **)(*(_QWORD *)v36[0] + 80LL);
        }
        else
        {
          v30 = 0LL;
        }
        v31 = (void *)ReferenceDwmApiPort(v29);
        DwmAsyncChildStyleChange(v31, v30, -26, ClassStyle);
      }
      if ( *(_QWORD *)v34[0] )
        xxxMNUpdateShownMenu(v34, *(_QWORD *)(*(_QWORD *)v36[0] + 88LL) + 96LL * v8, 2LL);
      v7 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v38);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v36);
  return v7;
}

/*
 * XREFs of xxxEnableMenuItem @ 0x1C0224CA0
 * Callers:
 *     NtUserEnableMenuItem @ 0x1C01D0350 (NtUserEnableMenuItem.c)
 *     xxxSetSysMenu @ 0x1C0224F64 (xxxSetSysMenu.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C007E918 (DwmGetClassStyle.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00A4DDC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNGetPopupFromMenu @ 0x1C00A69F0 (MNGetPopupFromMenu.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxRedrawTitle @ 0x1C01097D0 (xxxRedrawTitle.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C0224A1C (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02341E4 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // r14d
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  int ClassStyle; // esi
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-20h]
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h]
  __int64 v24; // [rsp+90h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
  v21 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, 0LL);
  v6 = v21;
  if ( !v21 )
    v6 = *(_QWORD *)v20[0];
  v24 = v6;
  v7 = MenuItemState(a1, a2, a3, 3, &v24);
  v21 = 0LL;
  v8 = v7;
  SmartObjStackRefBase<tagMENU>::operator=(v20, v24);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x100) != 0 )
  {
    if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    {
      if ( a3 != v8 )
      {
        v23 = 0LL;
        v22 = 0LL;
        if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
        {
          v9 = *(_QWORD **)(**(_QWORD **)a1 + 80LL);
          ThreadLock(v9, &v22);
          xxxRedrawTitle(*(struct tagWND **)(**(_QWORD **)a1 + 80LL), 4096);
          if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v9) )
          {
            DirtyVisRgnTrackers((__int64)v9);
            ClassStyle = DwmGetClassStyle((__int64)v9);
            if ( v9 )
              v9 = (_QWORD *)*v9;
            v15 = (void *)ReferenceDwmApiPort(v13);
            DwmAsyncChildStyleChange(v15, (__int64)v9, -26, ClassStyle);
          }
          ThreadUnlock1(v11, v10, v12);
        }
      }
    }
  }
  if ( (a3 & 3) != v8 && SmartObjStackRef<tagMENU>::operator bool((__int64)v20) )
  {
    v16 = v21;
    if ( !v21 )
      v16 = *(_QWORD *)v20[0];
    v17 = MNGetPopupFromMenu(v16, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, v17);
    if ( *(_QWORD *)v19[0] )
      xxxMNUpdateShownMenu(v19, 0LL, 1LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v20);
  return v8;
}

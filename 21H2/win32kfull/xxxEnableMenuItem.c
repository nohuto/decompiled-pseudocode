/*
 * XREFs of xxxEnableMenuItem @ 0x1C00BC4A0
 * Callers:
 *     xxxSetSysMenu @ 0x1C00BC268 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C014DEF0 (NtUserEnableMenuItem.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0043DBC (MNGetPopupFromMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00684A0 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     DwmGetClassStyle @ 0x1C0098E00 (DwmGetClassStyle.c)
 *     xxxRedrawTitle @ 0x1C00A6034 (xxxRedrawTitle.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C00BC6A4 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02451B0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // r14d
  struct tagWND *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  int ClassStyle; // esi
  void *v18; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-20h]
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h]
  __int64 v24; // [rsp+90h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
  v21 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19);
  v6 = v21;
  if ( !v21 )
    v6 = *(_QWORD *)v20[0];
  v24 = v6;
  v7 = MenuItemState(a1, a2, a3, 3, (__int64)&v24);
  v21 = 0LL;
  v8 = v7;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v20, v24);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x100) != 0 && a3 != v8 )
  {
    if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    {
      v23 = 0LL;
      v22 = 0LL;
      if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
      {
        v10 = *(struct tagWND **)(**(_QWORD **)a1 + 80LL);
        ThreadLock((__int64)v10, (__int64 *)&v22);
        xxxRedrawTitle(*(unsigned __int64 **)(**(_QWORD **)a1 + 80LL), 0);
        if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v10) )
        {
          DirtyVisRgnTrackers(v10);
          ClassStyle = DwmGetClassStyle((__int64)v10);
          if ( v10 )
            v10 = *(struct tagWND **)v10;
          v18 = (void *)ReferenceDwmApiPort(v16);
          DwmAsyncChildStyleChange(v18, (__int64)v10, -26, ClassStyle);
        }
        ThreadUnlock1(v12, v11, v13);
      }
    }
  }
  if ( (a3 & 3) != v8 && SmartObjStackRef<tagMENU>::operator bool((__int64)v20) )
  {
    v14 = v21;
    if ( !v21 )
      v14 = *(_QWORD *)v20[0];
    v15 = MNGetPopupFromMenu(v14, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, v15);
    if ( *(_QWORD *)v19[0] )
      xxxMNUpdateShownMenu(v19, 0LL, 1LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v20);
  return v8;
}

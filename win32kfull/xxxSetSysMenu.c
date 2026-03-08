/*
 * XREFs of xxxSetSysMenu @ 0x1C0224F64
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C000BC34 (xxxTranslateAccelerator.c)
 *     NtUserSetSysMenu @ 0x1C01DDA20 (NtUserSetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C02035C0 (xxxHandleNCMouseGuys.c)
 *     xxxGetSysMenu @ 0x1C0224EB0 (xxxGetSysMenu.c)
 * Callees:
 *     _GetSubMenu @ 0x1C002165C (_GetSubMenu.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     xxxGetSysMenuPtr @ 0x1C00A4DFC (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00DF9EC (_SetMenuDefaultItem.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0224B4C (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     IsSmallerThanScreen @ 0x1C0224BC0 (IsSmallerThanScreen.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  int v2; // r12d
  __int64 SysMenuPtr; // rax
  __int64 v4; // rcx
  __int64 SubMenu; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // r15d
  int v10; // esi
  int v11; // r13d
  unsigned int v12; // r14d
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v22[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h]
  __int128 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h]

  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v2 = 0;
  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v23 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v22, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v22) )
  {
    v4 = v23;
    if ( !v23 )
      v4 = *v22[0];
    SubMenu = GetSubMenu(v4);
    v23 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v22, SubMenu);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v22) )
    {
      v6 = v23;
      if ( !v23 )
        v6 = *v22[0];
      ThreadLockAlways(v6, &v24);
      v7 = *((_QWORD *)a1 + 5);
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 3;
      v12 = 61536;
      if ( (*(_BYTE *)(v7 + 31) & 0x20) != 0 )
      {
        v11 = 0;
        v2 = 3;
        v10 = 3;
        v12 = 61728;
        if ( IsTrayWindow(a1, 1) )
          v8 = 3;
      }
      else if ( (*(_BYTE *)(v7 + 30) & 2) == 0 )
      {
        v2 = 3;
      }
      v13 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v13 + 30) & 1) != 0 )
      {
        v14 = *(_BYTE *)(v13 + 31);
        if ( (v14 & 1) == 0 )
        {
LABEL_19:
          v15 = *((_QWORD *)a1 + 5);
          v16 = *(_BYTE *)(v15 + 30);
          if ( (v16 & 4) == 0 )
            v10 = 3;
          if ( (*(_BYTE *)(v15 + 30) & 0xC0) != 0x40 && (*(_BYTE *)(v15 + 24) & 1) == 0 || (v16 & 7) != 0 )
          {
            xxxEnableMenuItem((__int64)v22, 0xF000u, v10);
            xxxEnableMenuItem((__int64)v22, 0xF020u, v2);
            xxxEnableMenuItem((__int64)v22, 0xF030u, v9);
            xxxEnableMenuItem((__int64)v22, 0xF120u, v11);
          }
          xxxEnableMenuItem((__int64)v22, 0xF010u, v8);
          if ( v12 == 61536 )
          {
            _SetCloseDefault(v22);
          }
          else
          {
            v20 = v23;
            if ( !v23 )
              v20 = *v22[0];
            SetMenuDefaultItem(v20, v12, 0);
          }
          ThreadUnlock1(v18, v17, v19);
          goto LABEL_31;
        }
        v11 = 0;
        v8 = 3;
        if ( (v14 & 0x40) == 0 && IsSmallerThanScreen(a1) )
          v8 = 0;
        v10 = 3;
      }
      v9 = 3;
      goto LABEL_19;
    }
  }
LABEL_31:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
  return 1LL;
}

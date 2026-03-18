/*
 * XREFs of xxxSetSysMenu @ 0x1C00BC268
 * Callers:
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     xxxTranslateAccelerator @ 0x1C00FBF34 (xxxTranslateAccelerator.c)
 *     NtUserSetSysMenu @ 0x1C014A660 (NtUserSetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxGetSysMenuPtr @ 0x1C0067210 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00BC70C (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00BC748 (_SetMenuDefaultItem.c)
 *     _GetSubMenu @ 0x1C00BC870 (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     IsSmallerThanScreen @ 0x1C014CE30 (IsSmallerThanScreen.c)
 */

__int64 __fastcall xxxSetSysMenu(_QWORD *a1)
{
  unsigned int v2; // esi
  __int64 SysMenuPtr; // rax
  __int64 SubMenu; // rax
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  _BYTE *v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  unsigned int v12; // r14d
  char v13; // al
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v19; // al
  __int64 v20; // rcx
  _QWORD v21[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h]
  __int128 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h]

  SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
  v2 = 0;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v22 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v21, SysMenuPtr);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
    goto LABEL_18;
  SubMenu = GetSubMenu();
  v22 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v21, SubMenu);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
    goto LABEL_18;
  v5 = v22;
  if ( !v22 )
    v5 = *(_QWORD *)v21[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v23 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v23;
  *((_QWORD *)&v23 + 1) = v5;
  HMLockObject(v5);
  v7 = (_BYTE *)a1[5];
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 3;
  v12 = 61536;
  if ( (v7[31] & 0x20) != 0 )
  {
    v11 = 0;
    v9 = 3;
    v2 = 3;
    v12 = 61728;
    v19 = IsTrayWindow((__int64)a1, 1);
    v7 = (_BYTE *)a1[5];
    if ( v19 )
      v8 = 3;
  }
  else if ( (v7[30] & 2) == 0 )
  {
    v9 = 3;
  }
  if ( (v7[30] & 1) == 0 )
    goto LABEL_23;
  v13 = v7[31];
  if ( (v13 & 1) != 0 )
  {
    v11 = 0;
    v8 = 3;
    if ( (v13 & 0x40) == 0 && (unsigned int)IsSmallerThanScreen(a1, 0LL) )
      v8 = 0;
    v7 = (_BYTE *)a1[5];
    v2 = 3;
LABEL_23:
    v10 = 3;
  }
  v14 = v7[30];
  if ( (v14 & 4) == 0 )
    v2 = 3;
  if ( (v7[30] & 0xC0) != 0x40 && (v7[24] & 1) == 0 || (v14 & 7) != 0 )
  {
    xxxEnableMenuItem(v21, 61440LL, v2);
    xxxEnableMenuItem(v21, 61472LL, v9);
    xxxEnableMenuItem(v21, 61488LL, v10);
    xxxEnableMenuItem(v21, 61728LL, v11);
  }
  xxxEnableMenuItem(v21, 61456LL, v8);
  if ( v12 == 61536 )
  {
    _SetCloseDefault(v21);
  }
  else
  {
    v20 = v22;
    if ( !v22 )
      v20 = *(_QWORD *)v21[0];
    SetMenuDefaultItem(v20, v12, 0LL);
  }
  ThreadUnlock1(v16, v15, v17);
LABEL_18:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v21);
  return 1LL;
}

/*
 * XREFs of xxxSetSysMenu @ 0x1C0046C70
 * Callers:
 *     xxxGetSysMenu @ 0x1C00DAE14 (xxxGetSysMenu.c)
 *     xxxTranslateAccelerator @ 0x1C010B0F8 (xxxTranslateAccelerator.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223744 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     IsSmallerThanScreen @ 0x1C002C410 (IsSmallerThanScreen.c)
 *     xxxEnableMenuItem @ 0x1C0046F10 (xxxEnableMenuItem.c)
 *     IsTrayWindow @ 0x1C005EA90 (IsTrayWindow.c)
 *     xxxGetSysMenuPtr @ 0x1C006190C (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _GetSubMenu @ 0x1C00DC7AC (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0110D40 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C0110D7C (_SetMenuDefaultItem.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  _BYTE *v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  char v11; // al
  char v12; // dl
  __int64 v13; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]

  SmartObjStackRefBase<tagMENU>::Init(v17, 0LL);
  v20 = 0LL;
  v19 = 0LL;
  xxxGetSysMenuPtr(a1);
  v2 = 0;
  v18 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v17);
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v17) )
    goto LABEL_18;
  GetSubMenu();
  v18 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v17);
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v17) )
    goto LABEL_18;
  v3 = v18;
  if ( !v18 )
    v3 = *(_QWORD *)v17[0];
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v19 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v19;
  *((_QWORD *)&v19 + 1) = v3;
  HMLockObject(v3);
  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 3;
  v10 = 61536;
  if ( (v5[31] & 0x20) != 0 )
  {
    v9 = 0;
    v7 = 3;
    v2 = 3;
    v10 = 61728;
    v15 = IsTrayWindow(a1);
    v5 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( v15 )
      v6 = 3;
  }
  else if ( (v5[30] & 2) == 0 )
  {
    v7 = 3;
  }
  if ( (v5[30] & 1) == 0 )
    goto LABEL_23;
  v11 = v5[31];
  if ( (v11 & 1) != 0 )
  {
    v9 = 0;
    v6 = 3;
    if ( (v11 & 0x40) == 0 && IsSmallerThanScreen(a1, 0LL) )
      v6 = 0;
    v5 = (_BYTE *)*((_QWORD *)a1 + 5);
    v2 = 3;
LABEL_23:
    v8 = 3;
  }
  v12 = v5[30];
  if ( (v12 & 4) == 0 )
    v2 = 3;
  if ( (v5[30] & 0xC0) != 0x40 && (v5[24] & 1) == 0 || (v12 & 7) != 0 )
  {
    xxxEnableMenuItem(v17, 61440LL, v2);
    xxxEnableMenuItem(v17, 61472LL, v7);
    xxxEnableMenuItem(v17, 61488LL, v8);
    xxxEnableMenuItem(v17, 61728LL, v9);
  }
  xxxEnableMenuItem(v17, 61456LL, v6);
  if ( v10 == 61536 )
  {
    _SetCloseDefault(v17);
  }
  else
  {
    v16 = v18;
    if ( !v18 )
      v16 = *(_QWORD *)v17[0];
    SetMenuDefaultItem(v16, v10, 0LL);
  }
  ThreadUnlock1(v13);
LABEL_18:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
  return 1LL;
}

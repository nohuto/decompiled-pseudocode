/*
 * XREFs of xxxGetSysMenu @ 0x1C0224EB0
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00A5C50 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C0201BA8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C02257E8 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C0233A80 (xxxGetMenuBarInfo.c)
 * Callees:
 *     _GetSubMenu @ 0x1C002165C (_GetSubMenu.c)
 *     xxxGetSysMenuPtr @ 0x1C00A4DFC (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetSysMenu @ 0x1C0224F64 (xxxSetSysMenu.c)
 */

__int64 __fastcall xxxGetSysMenu(_QWORD *a1, int a2)
{
  __int64 SysMenuPtr; // rax
  __int64 v5; // rcx
  __int64 SubMenu; // rax
  __int64 v7; // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v10 = 0LL;
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9) && a2 )
  {
    v5 = v10;
    if ( !v10 )
      v5 = *(_QWORD *)v9[0];
    SubMenu = GetSubMenu(v5);
    v10 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v9, SubMenu);
  }
  v7 = v10;
  if ( !v10 )
    v7 = *(_QWORD *)v9[0];
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  return v7;
}

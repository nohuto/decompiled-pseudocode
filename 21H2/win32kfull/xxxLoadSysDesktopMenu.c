/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C0129584
 * Callers:
 *     xxxGetSysMenuPtr @ 0x1C00619AC (xxxGetSysMenuPtr.c)
 *     xxxTranslateAccelerator @ 0x1C010B478 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C01294E0 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x1C0042E34 (xxxLoadSysMenu.c)
 *     _DestroyMenu @ 0x1C0048A30 (_DestroyMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C0129648 (LockDesktopMenu.c)
 */

__int64 __fastcall xxxLoadSysDesktopMenu(__int64 *a1, int a2)
{
  unsigned __int8 *SysMenu; // rax
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  SysMenu = xxxLoadSysMenu(a2);
  v5 = 0LL;
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, (__int64)SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9) )
  {
    if ( *a1 )
    {
      v7 = v10;
      if ( !v10 )
        v7 = *(_QWORD *)v9[0];
      DestroyMenu(v7);
      v5 = *a1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 40LL) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, v9) )
      {
        v8 = v10;
        if ( !v10 )
          v8 = *(_QWORD *)v9[0];
        DestroyMenu(v8);
        v10 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v9, 0LL);
      }
      if ( v10 )
        v5 = v10;
      else
        v5 = *(_QWORD *)v9[0];
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  return v5;
}

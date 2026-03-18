/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C0114BD8
 * Callers:
 *     xxxGetSysMenuPtr @ 0x1C0067210 (xxxGetSysMenuPtr.c)
 *     xxxTranslateAccelerator @ 0x1C00FBF34 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C0114B34 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxLoadSysMenu @ 0x1C00BC940 (xxxLoadSysMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C0114C94 (LockDesktopMenu.c)
 */

PVOID *__fastcall xxxLoadSysDesktopMenu(PVOID **a1, int a2)
{
  PVOID *v4; // rdi
  unsigned __int8 *SysMenu; // rax
  PVOID *v7; // rcx
  PVOID *v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  PVOID *v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v4 = 0LL;
  v10 = 0LL;
  SysMenu = xxxLoadSysMenu(a2);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v9, (__int64)SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9) )
  {
    if ( *a1 )
    {
      v7 = v10;
      if ( !v10 )
        v7 = *(PVOID **)v9[0];
      DestroyMenu(v7);
      v4 = *a1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 40LL) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, v9) )
      {
        v8 = v10;
        if ( !v10 )
          v8 = *(PVOID **)v9[0];
        DestroyMenu(v8);
        v10 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v9, 0LL);
      }
      if ( v10 )
        v4 = v10;
      else
        v4 = *(PVOID **)v9[0];
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  return v4;
}

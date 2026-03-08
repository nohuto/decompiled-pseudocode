/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C00E8094
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C000BC34 (xxxTranslateAccelerator.c)
 *     xxxGetSysMenuPtr @ 0x1C00A4DFC (xxxGetSysMenuPtr.c)
 *     xxxSetDialogSystemMenu @ 0x1C00E7FF4 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x1C00A0224 (xxxLoadSysMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C00E8150 (LockDesktopMenu.c)
 */

__int64 __fastcall xxxLoadSysDesktopMenu(__int64 *a1, int a2)
{
  __int64 v4; // rdi
  __int64 SysMenu; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v4 = 0LL;
  v10 = 0LL;
  SysMenu = xxxLoadSysMenu(a2);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9) )
  {
    if ( *a1 )
    {
      v7 = v10;
      if ( !v10 )
        v7 = *(_QWORD *)v9[0];
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
          v8 = *(_QWORD *)v9[0];
        DestroyMenu(v8);
        v10 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v9, 0LL);
      }
      if ( v10 )
        v4 = v10;
      else
        v4 = *(_QWORD *)v9[0];
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  return v4;
}

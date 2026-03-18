/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0240CA4
 * Callers:
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxClientLoadMenu @ 0x1C00A3310 (xxxClientLoadMenu.c)
 *     _GetSubMenu @ 0x1C00BC870 (_GetSubMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00BC910 (RtlInitUnicodeStringOrId.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C0114C94 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 SubMenu; // rdi
  __int64 *v6; // rbx
  unsigned __int8 *Menu; // rax
  __int64 v8; // rcx
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v11[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v4 = *((_QWORD *)a1 + 3);
  SubMenu = 0LL;
  v12 = 0LL;
  v6 = (__int64 *)(v4 + 80);
  if ( !a2 )
    v6 = (__int64 *)(v4 + 72);
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v11, *v6);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v11) && (*(_DWORD *)(gptiCurrent + 488LL) & 5) == 0 )
  {
    v10 = 0LL;
    RtlInitUnicodeStringOrId(&v10, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, &v10.Length);
    v12 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v11, (__int64)Menu);
    LockDesktopMenu((__int64)v6, v11);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v11) )
  {
    v8 = v12;
    if ( !v12 )
      v8 = *v11[0];
    SubMenu = GetSubMenu(v8);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  return (struct tagMENU *)SubMenu;
}

/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0244D38
 * Callers:
 *     xxxDoScrollMenu @ 0x1C02456CC (xxxDoScrollMenu.c)
 * Callees:
 *     xxxClientLoadMenu @ 0x1C00237E0 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0025544 (RtlInitUnicodeStringOrId.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _GetSubMenu @ 0x1C00DCAFC (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C0129648 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 SubMenu; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rdx
  unsigned __int8 *Menu; // rax
  __int64 v9; // rcx
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v12, 0LL);
  v4 = *((_QWORD *)a1 + 3);
  SubMenu = 0LL;
  v6 = (__int64 *)(v4 + 80);
  if ( !a2 )
    v6 = (__int64 *)(v4 + 72);
  v7 = *v6;
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v12, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v12) && (*(_DWORD *)(gptiCurrent + 488LL) & 5) == 0 )
  {
    v11 = 0LL;
    RtlInitUnicodeStringOrId(&v11, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, &v11.Length);
    v13 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v12, (__int64)Menu);
    LockDesktopMenu((__int64)v6, v12);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v12) )
  {
    v9 = v13;
    if ( !v13 )
      v9 = *v12[0];
    SubMenu = GetSubMenu(v9);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v12);
  return (struct tagMENU *)SubMenu;
}

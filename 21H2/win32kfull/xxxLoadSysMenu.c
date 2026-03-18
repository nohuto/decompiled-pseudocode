/*
 * XREFs of xxxLoadSysMenu @ 0x1C00BC940
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BD8 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxClientLoadMenu @ 0x1C00A3310 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00BC910 (RtlInitUnicodeStringOrId.c)
 *     xxxSetMenuItemInfo @ 0x1C00BCB7C (xxxSetMenuItemInfo.c)
 *     xxxSetMenuInfo @ 0x1C00BE9B8 (xxxSetMenuInfo.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall xxxLoadSysMenu(int a1)
{
  unsigned __int8 *Menu; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v10; // [rsp+4Ch] [rbp-BCh] BYREF
  int v11; // [rsp+6Ch] [rbp-9Ch]
  _QWORD v12[3]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v13[3]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v14[3]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v15[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v16[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v18[10]; // [rsp+108h] [rbp+0h] BYREF

  v11 = 0;
  memset(&v10.m256i_u64[1], 0, 24);
  memset(v18, 0, sizeof(v18));
  v12[2] = 0LL;
  *(_OWORD *)&v8[1] = 0LL;
  RtlInitUnicodeStringOrId((struct _UNICODE_STRING *)&v8[1], (WCHAR *)(unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, (unsigned __int16 *)&v8[1]);
  if ( !Menu )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = Menu;
  HMLockObject(Menu);
  v9 = 40;
  v10.m256i_i64[0] = 0x400000080000010LL;
  SmartObjStackRefBase<tagMENU>::Init(v13, Menu);
  v13[2] = 0LL;
  xxxSetMenuInfo(v13, &v9);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v13);
  v18[0] = 0x8000000050LL;
  v18[9] = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v14, Menu);
  v14[2] = 0LL;
  xxxSetMenuItemInfo((unsigned int)v14, 61536, 0, (unsigned int)v18, 0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v14);
  if ( a1 != 48 )
  {
    v18[9] = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v15, Menu);
    v15[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v15, 61472, 0, (unsigned int)v18, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
    v18[9] = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v16, Menu);
    v16[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v16, 61488, 0, (unsigned int)v18, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v16);
    v18[9] = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v17, Menu);
    v17[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v17, 61728, 0, (unsigned int)v18, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
  }
  if ( ThreadUnlock1(v5, v4, v6) && (*(_BYTE *)(_HMPheFromObject(Menu) + 25) & 1) == 0 )
    return Menu;
  else
    return 0LL;
}

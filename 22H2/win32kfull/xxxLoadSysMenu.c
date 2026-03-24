/*
 * XREFs of xxxLoadSysMenu @ 0x1C0042D94
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00DC574 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C01291D4 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxClientLoadMenu @ 0x1C0023740 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00254A4 (RtlInitUnicodeStringOrId.c)
 *     xxxSetMenuItemInfo @ 0x1C00457B8 (xxxSetMenuItemInfo.c)
 *     xxxSetMenuInfo @ 0x1C0046A14 (xxxSetMenuInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

unsigned __int8 *__fastcall xxxLoadSysMenu(int a1)
{
  unsigned __int8 *Menu; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v8; // [rsp+4Ch] [rbp-BCh] BYREF
  int v9; // [rsp+6Ch] [rbp-9Ch]
  _QWORD v10[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v11[16]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v12; // [rsp+98h] [rbp-70h]
  _BYTE v13[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+B0h] [rbp-58h]
  _BYTE v15[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v16; // [rsp+C8h] [rbp-40h]
  _BYTE v17[16]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-28h]
  _BYTE v19[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-10h]
  _QWORD v21[10]; // [rsp+108h] [rbp+0h] BYREF

  v9 = 0;
  memset(&v8.m256i_u64[1], 0, 24);
  memset(v21, 0, sizeof(v21));
  v10[2] = 0LL;
  *(_OWORD *)&v6[1] = 0LL;
  RtlInitUnicodeStringOrId((struct _UNICODE_STRING *)&v6[1], (WCHAR *)(unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, (unsigned __int16 *)&v6[1]);
  if ( !Menu )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v10;
  v10[1] = Menu;
  HMLockObject(Menu);
  v7 = 40;
  v8.m256i_i64[0] = 0x400000080000010LL;
  SmartObjStackRefBase<tagMENU>::Init(v11, Menu);
  v12 = 0LL;
  xxxSetMenuInfo(v11, &v7);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  v21[0] = 0x8000000050LL;
  v21[9] = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v13, Menu);
  v14 = 0LL;
  xxxSetMenuItemInfo((unsigned int)v13, 61536, 0, (unsigned int)v21, 0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v13);
  if ( a1 != 48 )
  {
    v21[9] = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v15, Menu);
    v16 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v15, 61472, 0, (unsigned int)v21, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
    v21[9] = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v17, Menu);
    v18 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v17, 61488, 0, (unsigned int)v21, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
    v21[9] = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v19, Menu);
    v20 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v19, 61728, 0, (unsigned int)v21, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
  }
  if ( ThreadUnlock1(v4) && (*(_BYTE *)(_HMPheFromObject(Menu) + 25) & 1) == 0 )
    return Menu;
  else
    return 0LL;
}

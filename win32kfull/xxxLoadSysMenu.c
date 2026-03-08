/*
 * XREFs of xxxLoadSysMenu @ 0x1C00A0224
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C00E8094 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C00A2218 (xxxSetMenuItemInfo.c)
 *     xxxSetMenuInfo @ 0x1C00A3A58 (xxxSetMenuInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0108BB4 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadMenu @ 0x1C0109AE8 (xxxClientLoadMenu.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall xxxLoadSysMenu(int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _BYTE v9[16]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v10; // [rsp+48h] [rbp-59h]
  __int128 v11; // [rsp+50h] [rbp-51h] BYREF
  _DWORD v12[3]; // [rsp+60h] [rbp-41h] BYREF
  __int128 v13; // [rsp+6Ch] [rbp-35h]
  __int64 v14; // [rsp+7Ch] [rbp-25h]
  int v15; // [rsp+84h] [rbp-1Dh]
  _DWORD v16[18]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+2Fh]
  __int128 v18; // [rsp+D8h] [rbp+37h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+47h]

  v1 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v13 = 0LL;
  memset_0(v16, 0, 0x50uLL);
  v18 = 0LL;
  v19 = 0LL;
  v11 = 0LL;
  RtlInitUnicodeStringOrId(&v11, (unsigned __int16)a1);
  v3 = xxxClientLoadMenu(0LL, &v11);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  ThreadLockAlways(v3, &v18);
  v12[0] = 40;
  v12[1] = -2147483632;
  v12[2] = 0x4000000;
  SmartObjStackRefBase<tagMENU>::Init(v9, v4);
  v10 = 0LL;
  xxxSetMenuInfo(v9, v12);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  v16[0] = 80;
  v16[1] = 128;
  v17 = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v9, v4);
  v10 = 0LL;
  xxxSetMenuItemInfo((unsigned int)v9, 61536, 0, (unsigned int)v16, 0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  if ( a1 != 48 )
  {
    v17 = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v9, v4);
    v10 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v9, 61472, 0, (unsigned int)v16, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
    v17 = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v9, v4);
    v10 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v9, 61488, 0, (unsigned int)v16, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
    v17 = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v9, v4);
    v10 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v9, 61728, 0, (unsigned int)v16, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  }
  if ( !ThreadUnlock1(v6, v5, v7) )
    return 0LL;
  if ( (*(_BYTE *)(_HMPheFromObject(v4) + 25) & 1) == 0 )
    return v4;
  return v1;
}

/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C01F5260
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CB4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxGetMenuItemRect @ 0x1C0249ECC (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int MenuItemRect; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-90h]
  __int128 v23; // [rsp+48h] [rbp-80h] BYREF
  __int64 v24; // [rsp+58h] [rbp-70h]
  __int128 v25; // [rsp+60h] [rbp-68h] BYREF
  __int64 v26; // [rsp+70h] [rbp-58h]
  __int128 v27; // [rsp+80h] [rbp-48h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
    {
      MenuItemRect = 0;
      goto LABEL_20;
    }
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v23;
  *((_QWORD *)&v23 + 1) = v9;
  if ( v9 )
    HMLockObject(v9);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v21);
  v11 = ValidateHmenu(a2);
  v22 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v21, v11);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
  {
    MenuItemRect = 0;
  }
  else
  {
    v12 = v22;
    if ( !v22 )
      v12 = *(_QWORD *)v21[0];
    *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v25;
    *((_QWORD *)&v25 + 1) = v12;
    HMLockObject(v12);
    MenuItemRect = xxxGetMenuItemRect(v9, v21, a3, &v27);
    if ( v9 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL);
          if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v15,
                                                                                   v13) >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v27, &v27, 0LL, v9);
        }
      }
    }
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    *a4 = v27;
    ThreadUnlock1(MmUserProbeAddress, v13, v14);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v21);
  ThreadUnlock1(v18, v17, v19);
LABEL_20:
  UserSessionSwitchLeaveCrit(v8);
  return MenuItemRect;
}

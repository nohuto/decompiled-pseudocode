/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C01FA920
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01674C4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxGetMenuItemRect @ 0x1C024EBE8 (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int MenuItemRect; // esi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-A0h]
  __int128 v23; // [rsp+48h] [rbp-90h] BYREF
  __int64 v24; // [rsp+58h] [rbp-80h]
  __int128 v25; // [rsp+60h] [rbp-78h] BYREF
  __int64 v26; // [rsp+70h] [rbp-68h]
  __int128 v27; // [rsp+80h] [rbp-58h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
    {
      MenuItemRect = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v23;
  *((_QWORD *)&v23 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v21);
  v12 = ValidateHmenu(a2);
  v22 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v21, v12);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
  {
    MenuItemRect = 0;
  }
  else
  {
    v13 = v22;
    if ( !v22 )
      v13 = *(_QWORD *)v21[0];
    *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v25;
    *((_QWORD *)&v25 + 1) = v13;
    HMLockObject(v13);
    MenuItemRect = xxxGetMenuItemRect(v10, v21, a3, &v27);
    if ( v10 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v14 + 224) & 0x20) == 0 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (((unsigned __int16)(v15 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v14) >> 8)) & 0x1FF) != 0 )
            goto LABEL_23;
          v16 = *(unsigned int *)(*(_QWORD *)(v10 + 40) + 288LL);
          v17 = (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) == 2 && (v16 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v16) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v18) & 0x20000000) == 0 )
          {
            v8 = 0;
          }
          if ( v17 != v8 )
LABEL_23:
            TransformRectBetweenCoordinateSpaces(&v27, &v27, 0LL, v10);
        }
      }
    }
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    *a4 = v27;
    ThreadUnlock1(MmUserProbeAddress);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v21);
  ThreadUnlock1(v19);
LABEL_28:
  UserSessionSwitchLeaveCrit(v9);
  return MenuItemRect;
}

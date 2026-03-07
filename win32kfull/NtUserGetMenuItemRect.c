__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rcx
  unsigned int MenuItemRect; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v20[2]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-90h]
  __int128 v22; // [rsp+48h] [rbp-80h] BYREF
  __int64 v23; // [rsp+58h] [rbp-70h]
  __int128 v24; // [rsp+60h] [rbp-68h] BYREF
  __int64 v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+80h] [rbp-48h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20);
    v10 = ValidateHmenu(a2);
    v21 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v20, v10);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20) )
    {
      MenuItemRect = 0;
    }
    else
    {
      v11 = v21;
      if ( !v21 )
        v11 = *(_QWORD *)v20[0];
      *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v24;
      *((_QWORD *)&v24 + 1) = v11;
      HMLockObject(v11);
      MenuItemRect = xxxGetMenuItemRect(a1, v20, a3, &v26);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v26, &v26, 0LL, a1);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      *a4 = v26;
      ThreadUnlock1(MmUserProbeAddress, v14, v15);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v20);
    ThreadUnlock1(v17, v16, v18);
  }
  else
  {
    MenuItemRect = 0;
  }
  UserSessionSwitchLeaveCrit(v8);
  return MenuItemRect;
}

/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C01D87B0
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C023C080 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD v18[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  __int128 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  __int64 v24; // [rsp+90h] [rbp+20h] BYREF

  v24 = a3;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v20;
    *((_QWORD *)&v20 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    SmartObjStackRefBase<tagMENU>::Init(v18, 0LL);
    v19 = 0LL;
    v7 = ValidateHmenu(a2);
    v19 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v18, v7);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v18) )
    {
      v6 = -1;
    }
    else
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformPointBetweenCoordinateSpaces(&v24, &v24, a1, 0LL);
      v10 = v19;
      if ( !v19 )
        v10 = *(_QWORD *)v18[0];
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      *((_QWORD *)&v22 + 1) = v10;
      HMLockObject(v10);
      v6 = xxxMenuItemFromPoint(a1, v18, v24);
      ThreadUnlock1(v12, v11, v13);
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v18);
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    v6 = -1;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}

/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C01F7A90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0244CA8 (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD v22[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  __int128 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int128 v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]

  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v24;
    *((_QWORD *)&v24 + 1) = v8;
    HMLockObject(v8);
    SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
    v23 = 0LL;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004LL, v12);
    }
    else
    {
      v13 = ValidateHmenu(a2);
      v23 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, v13);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v22)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v14 = v23;
        if ( !v23 )
          v14 = *(_QWORD *)v22[0];
        *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v26;
        *((_QWORD *)&v26 + 1) = v14;
        HMLockObject(v14);
        v10 = xxxHiliteMenuItem(v11, v22, a3, a4);
        ThreadUnlock1(v16, v15, v17);
      }
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
    ThreadUnlock1(v19, v18, v20);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}

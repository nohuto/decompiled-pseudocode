/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C01D5C20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0233248 (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]

  v26 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v23;
    *((_QWORD *)&v23 + 1) = v8;
    HMLockObject(v8);
    SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
    v22 = 0LL;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004);
    }
    else
    {
      v12 = ValidateHmenu(a2);
      v22 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v21, v12);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v21)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v13 = v22;
        if ( !v22 )
          v13 = *(_QWORD *)v21[0];
        *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v25;
        *((_QWORD *)&v25 + 1) = v13;
        HMLockObject(v13);
        v10 = xxxHiliteMenuItem(v11, v21, a3, a4);
        ThreadUnlock1(v15, v14, v16);
      }
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v21);
    ThreadUnlock1(v18, v17, v19);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}

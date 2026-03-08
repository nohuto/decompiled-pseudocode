/*
 * XREFs of NtUserSetSystemMenu @ 0x1C01DDB80
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetSystemMenu @ 0x1C0234C74 (xxxSetSystemMenu.c)
 */

__int64 __fastcall NtUserSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v17[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-40h]
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v4;
    HMLockObject(v4);
    SmartObjStackRefBase<tagMENU>::Init(v17, 0LL);
    v18 = 0LL;
    v8 = ValidateHmenu(a2);
    v18 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v17, v8);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v17) )
    {
      v9 = v18;
      if ( !v18 )
        v9 = *(_QWORD *)v17[0];
      *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v21;
      *((_QWORD *)&v21 + 1) = v9;
      HMLockObject(v9);
      v6 = xxxSetSystemMenu(v7, v17);
      ThreadUnlock1(v11, v10, v12);
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
    ThreadUnlock1(v14, v13, v15);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}

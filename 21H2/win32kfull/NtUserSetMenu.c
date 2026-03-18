/*
 * XREFs of NtUserSetMenu @ 0x1C0147C30
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetMenu @ 0x1C0147E00 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
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

  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v20;
      *((_QWORD *)&v20 + 1) = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v18, 0LL);
      v19 = 0LL;
      if ( a2 )
      {
        v8 = ValidateHmenu(a2);
        v19 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, v8);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v18) )
        {
LABEL_12:
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v18);
          ThreadUnlock1(v15, v14, v16);
          goto LABEL_13;
        }
      }
      else
      {
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, 0LL);
      }
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v18)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 40LL) + 40LL) & 1) != 0 )
      {
        UserSetLastError(87LL, v9);
      }
      else
      {
        v10 = v19;
        if ( !v19 )
          v10 = *(_QWORD *)v18[0];
        *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v22;
        *((_QWORD *)&v22 + 1) = v10;
        if ( v10 )
          HMLockObject(v10);
        v6 = xxxSetMenu(v7);
        ThreadUnlock1(v12, v11, v13);
      }
      goto LABEL_12;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}

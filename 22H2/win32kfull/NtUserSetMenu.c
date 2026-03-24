/*
 * XREFs of NtUserSetMenu @ 0x1C0156C00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenu @ 0x1C0156DD4 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h]
  __int128 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]

  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v17;
      *((_QWORD *)&v17 + 1) = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
      if ( a2 )
      {
        v8 = ValidateHmenu(a2);
        v16 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v15, v8);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15) )
        {
LABEL_12:
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
          ThreadUnlock1(v13);
          goto LABEL_13;
        }
      }
      else
      {
        v16 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v15, 0LL);
      }
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v15)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL) & 1) != 0 )
      {
        UserSetLastError(87LL, v9, v10);
      }
      else
      {
        v11 = v16;
        if ( !v16 )
          v11 = *(_QWORD *)v15[0];
        *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v19;
        *((_QWORD *)&v19 + 1) = v11;
        if ( v11 )
          HMLockObject(v11);
        v6 = xxxSetMenu(v7);
        ThreadUnlock1(v12);
      }
      goto LABEL_12;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}

/*
 * XREFs of NtUserDeleteMenu @ 0x1C00F6950
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h]

  v18 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v7 = 0;
  v16 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6);
  }
  else
  {
    v8 = ValidateHmenu(a1);
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v15, v8);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v15)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v9 = v16;
      if ( !v16 )
        v9 = *(_QWORD *)v15[0];
      ThreadLock(v9, (__int64 *)&v17);
      v7 = xxxRemoveDeleteMenuHelper((__int64)v15, a2, a3, 1);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
  UserSessionSwitchLeaveCrit(v13);
  return v7;
}

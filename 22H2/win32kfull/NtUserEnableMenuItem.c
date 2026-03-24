/*
 * XREFs of NtUserEnableMenuItem @ 0x1C0129CD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableMenuItem @ 0x1C0046F10 (xxxEnableMenuItem.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v15[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h]

  v18 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v16 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7);
LABEL_8:
    v11 = -1;
    goto LABEL_7;
  }
  v8 = ValidateHmenu(a1);
  SmartObjStackRefBase<tagMENU>::operator=(v15, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15)
    || (*(_DWORD *)(*(_QWORD *)(*v15[0] + 40) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v9 = v16;
  if ( !v16 )
    v9 = *v15[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v17 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v17;
  *((_QWORD *)&v17 + 1) = v9;
  HMLockObject(v9);
  v11 = xxxEnableMenuItem(v15, a2, a3);
  ThreadUnlock1(v12);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
  UserSessionSwitchLeaveCrit(v13);
  return v11;
}

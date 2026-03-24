/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C0120900
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0046AB4 (xxxSetMenuInfo.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01674C4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v11[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+48h] [rbp-50h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int128 v15; // [rsp+60h] [rbp-38h] BYREF
  __int128 v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+80h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v11);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v15 = *(_OWORD *)a2;
  v16 = *(_OWORD *)(a2 + 16);
  v17 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v5 = 0;
  v12 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v11, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v11)
    && (*(_DWORD *)(*(_QWORD *)(*v11[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v6 = v12;
    if ( !v12 )
      v6 = *v11[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v13 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v13;
    *((_QWORD *)&v13 + 1) = v6;
    if ( v6 )
      HMLockObject(v6);
    v5 = xxxSetMenuInfo(v11, (__int64)&v15);
    ThreadUnlock1(v8);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v11);
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}

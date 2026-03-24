/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C0203DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01674C4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int128 *a6)
{
  __int128 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-A8h]
  __int128 v23; // [rsp+60h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-88h]
  __int128 v25; // [rsp+78h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-70h]
  __int128 v27; // [rsp+98h] [rbp-60h] BYREF
  int v28; // [rsp+A8h] [rbp-50h]

  v10 = a6;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v21);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v11, v12);
    v13 = 0;
  }
  else
  {
    v14 = ValidateHmenu(a1);
    v13 = 0;
    v22 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v21, v14);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
    {
      v15 = ValidateHwnd(a5);
      if ( v15 )
      {
        *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v23;
        *((_QWORD *)&v23 + 1) = v15;
        HMLockObject(v15);
        v16 = v22;
        if ( !v22 )
        {
          v16 = *(_QWORD *)v21[0];
          v10 = a6;
        }
        *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v25;
        *((_QWORD *)&v25 + 1) = v16;
        HMLockObject(v16);
        if ( v10 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v27 = *v10;
          v28 = *((_DWORD *)v10 + 4);
          v10 = &v27;
        }
        v13 = xxxTrackPopupMenuEx(v21, a2, a3, a4, v15, v10);
        ThreadUnlock1(v17);
        ThreadUnlock1(v18);
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v21);
  UserSessionSwitchLeaveCrit(v19);
  return v13;
}

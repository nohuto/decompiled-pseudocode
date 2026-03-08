/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C01DFF40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C012D81C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C012D890 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
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
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-A8h]
  __int128 v25; // [rsp+60h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-88h]
  __int128 v27; // [rsp+78h] [rbp-80h] BYREF
  __int64 v28; // [rsp+88h] [rbp-70h]
  __int128 v29; // [rsp+98h] [rbp-60h] BYREF
  int v30; // [rsp+A8h] [rbp-50h]

  v10 = a6;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v23);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004);
    v11 = 0;
  }
  else
  {
    v12 = ValidateHmenu(a1);
    v11 = 0;
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v23, v12);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
    {
      v13 = ValidateHwnd(a5);
      if ( v13 )
      {
        *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v25;
        *((_QWORD *)&v25 + 1) = v13;
        HMLockObject(v13);
        v14 = v24;
        if ( !v24 )
        {
          v14 = *(_QWORD *)v23[0];
          v10 = a6;
        }
        *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v27;
        *((_QWORD *)&v27 + 1) = v14;
        HMLockObject(v14);
        if ( v10 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v29 = *v10;
          v30 = *((_DWORD *)v10 + 4);
          v10 = &v29;
        }
        v11 = xxxTrackPopupMenuEx(v23, a2, a3, a4, v13, v10);
        ThreadUnlock1(v16, v15, v17);
        ThreadUnlock1(v19, v18, v20);
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v23);
  UserSessionSwitchLeaveCrit(v21);
  return v11;
}

/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C01FFC10
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CB4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
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
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD v24[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-A8h]
  __int128 v26; // [rsp+60h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-88h]
  __int128 v28; // [rsp+78h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-70h]
  __int128 v30; // [rsp+98h] [rbp-60h] BYREF
  int v31; // [rsp+A8h] [rbp-50h]

  v10 = a6;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v24);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v11);
    v12 = 0;
  }
  else
  {
    v13 = ValidateHmenu(a1);
    v12 = 0;
    v25 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v24, v13);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
    {
      v14 = ValidateHwnd(a5);
      if ( v14 )
      {
        *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v26;
        *((_QWORD *)&v26 + 1) = v14;
        HMLockObject(v14);
        v15 = v25;
        if ( !v25 )
        {
          v15 = *(_QWORD *)v24[0];
          v10 = a6;
        }
        *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v28;
        *((_QWORD *)&v28 + 1) = v15;
        HMLockObject(v15);
        if ( v10 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v30 = *v10;
          v31 = *((_DWORD *)v10 + 4);
          v10 = &v30;
        }
        v12 = xxxTrackPopupMenuEx(v24, a2, a3, a4, v14, v10);
        ThreadUnlock1(v17, v16, v18);
        ThreadUnlock1(v20, v19, v21);
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v24);
  UserSessionSwitchLeaveCrit(v22);
  return v12;
}

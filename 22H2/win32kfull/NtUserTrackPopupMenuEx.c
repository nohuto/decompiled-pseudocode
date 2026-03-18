/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C01DEE90
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A2D8 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A34C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
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
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD v26[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-A8h]
  __int128 v28; // [rsp+60h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-88h]
  __int128 v30; // [rsp+78h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-70h]
  __int128 v32; // [rsp+98h] [rbp-60h] BYREF
  int v33; // [rsp+A8h] [rbp-50h]

  v10 = a6;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v26);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004);
    v11 = 0;
  }
  else
  {
    v12 = ValidateHmenu(a1);
    v11 = 0;
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v26, v12);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v26) )
    {
      v13 = ValidateHwnd(a5);
      if ( v13 )
      {
        *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v28;
        *((_QWORD *)&v28 + 1) = v13;
        HMLockObject(v13);
        v14 = v27;
        if ( !v27 )
        {
          v14 = *(_QWORD *)v26[0];
          v10 = a6;
        }
        *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v30;
        *((_QWORD *)&v30 + 1) = v14;
        HMLockObject(v14);
        if ( v10 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v32 = *v10;
          v33 = *((_DWORD *)v10 + 4);
          v10 = &v32;
        }
        v11 = xxxTrackPopupMenuEx(v26, a2, a3, a4, v13, v10);
        ThreadUnlock1(v16, v15, v17);
        ThreadUnlock1(v19, v18, v20);
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v26);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v11;
}

/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C010B680
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSetMenuInfo @ 0x1C00BE9B8 (xxxSetMenuInfo.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CB4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 *v12[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  __int128 v14; // [rsp+48h] [rbp-50h] BYREF
  __int128 v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  __int128 v17; // [rsp+78h] [rbp-20h] BYREF
  __int64 v18; // [rsp+88h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v12);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v14 = *(_OWORD *)a2;
  v15 = *(_OWORD *)(a2 + 16);
  v16 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v5 = 0;
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v12, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v12)
    && (*(_DWORD *)(*(_QWORD *)(*v12[0] + 40) + 40LL) & 0x40) == 0 )
  {
    v6 = v13;
    if ( !v13 )
      v6 = *v12[0];
    ThreadLock(v6, (__int64 *)&v17);
    v5 = xxxSetMenuInfo(v12, (__int64)&v14);
    ThreadUnlock1(v8, v7, v9);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v12);
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}

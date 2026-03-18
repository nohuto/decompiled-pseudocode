/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C0012560
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0062B7C (xxxSetMenuInfo.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A2D8 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A34C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v15[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+38h] [rbp-60h]
  __int128 v17; // [rsp+48h] [rbp-50h] BYREF
  __int128 v18; // [rsp+58h] [rbp-40h]
  __int64 v19; // [rsp+68h] [rbp-30h]
  __int128 v20; // [rsp+78h] [rbp-20h] BYREF
  __int64 v21; // [rsp+88h] [rbp-10h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v17 = *(_OWORD *)a2;
  v18 = *(_OWORD *)(a2 + 16);
  v19 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v5 = 0;
  v16 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v15, v4);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v15)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v6 = v16;
    if ( !v16 )
      v6 = *(_QWORD *)v15[0];
    ThreadLock(v6, &v20);
    v5 = xxxSetMenuInfo(v15, &v17);
    ThreadUnlock1(v8, v7, v9);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v15);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v5;
}

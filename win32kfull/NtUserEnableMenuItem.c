/*
 * XREFs of NtUserEnableMenuItem @ 0x1C01D0350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]

  v17 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRefBase<tagMENU>::Init(v14, 0LL);
  v15 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
LABEL_3:
    v6 = -1;
    goto LABEL_9;
  }
  v7 = ValidateHmenu(a1);
  v15 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v14, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v14)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_3;
  }
  v8 = v15;
  if ( !v15 )
    v8 = *(_QWORD *)v14[0];
  ThreadLockAlways(v8, &v16);
  v6 = xxxEnableMenuItem(v14, a2, a3);
  ThreadUnlock1(v10, v9, v11);
LABEL_9:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v14);
  UserSessionSwitchLeaveCrit(v12);
  return v6;
}

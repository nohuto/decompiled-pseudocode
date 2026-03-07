__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, int a3)
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
  v6 = 0;
  v15 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    v7 = ValidateHmenu(a1);
    v15 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v14, v7);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v14)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v8 = v15;
      if ( !v15 )
        v8 = *(_QWORD *)v14[0];
      ThreadLock(v8, &v16);
      v6 = xxxRemoveDeleteMenuHelper((__int64)v14, a2, a3, 0);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v14);
  UserSessionSwitchLeaveCrit(v12);
  return v6;
}

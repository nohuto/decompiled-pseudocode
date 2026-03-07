__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 ThreadWin32Thread; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 *v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]

  v19 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = 0;
  v15 = (__int64 *)gSmartObjNullRef;
  v16 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v16;
  v17 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    v8 = ValidateHmenu(a1);
    v17 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v15, v8);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v15)
      && (*(_DWORD *)(*(_QWORD *)(*v15 + 40) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*v15 + 40) + 40LL) & 0x200) == 0 )
    {
      v9 = v17;
      if ( !v17 )
        v9 = *v15;
      ThreadLock(v9, &v18);
      v7 = xxxRemoveDeleteMenuHelper(&v15, a2, a3, 1LL);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v15);
  UserSessionSwitchLeaveCrit(v13);
  return v7;
}

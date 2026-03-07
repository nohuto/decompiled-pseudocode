__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  char v11; // [rsp+58h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = 0;
  v8 = (__int64 *)gSmartObjNullRef;
  v9 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v9;
  v10 = 0LL;
  v4 = ValidateHmenu(a1);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v8, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)&v8) && (*(_DWORD *)(*(_QWORD *)(*v8 + 40) + 40LL) & 0x40) == 0 )
  {
    v5 = v10;
    if ( !v10 )
      v5 = *v8;
    v3 = DestroyMenu(v5);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v8);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}

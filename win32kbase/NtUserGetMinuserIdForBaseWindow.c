__int64 __fastcall NtUserGetMinuserIdForBaseWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 CurrentProcessWin32Process; // rax

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v5 = HMValidateHandleNoSecure(v4, 23);
  v10 = 0LL;
  v11 = v5;
  if ( v5 )
  {
    v12 = *(_QWORD *)(v5 + 16);
    v13 = *(_QWORD *)(v12 + 424);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( CurrentProcessWin32Process )
    {
      v7 = -*(_QWORD *)CurrentProcessWin32Process;
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v6;
    }
    if ( v13 == CurrentProcessWin32Process )
      v10 = *(_QWORD *)(v11 + 56);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}

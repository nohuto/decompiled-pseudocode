/*
 * XREFs of NtUserGetMinuserIdForBaseWindow @ 0x1C0159CD0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall NtUserGetMinuserIdForBaseWindow(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v2 = HMValidateHandleNoSecure(a1, 23);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    v9 = *(_QWORD *)(v2 + 16);
    v10 = *(_QWORD *)(v9 + 424);
    if ( v10 == PsGetCurrentProcessWin32Process(v9) )
      v7 = *(_QWORD *)(v8 + 56);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}

/*
 * XREFs of UserGetWindowThreadProcessId @ 0x1C017CBD4
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C00ABAD0 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     NtUserGetWindowThreadProcessId @ 0x1C0171800 (NtUserGetWindowThreadProcessId.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     HMValidateCatHandleNoRip @ 0x1C0246EEC (HMValidateCatHandleNoRip.c)
 */

__int64 __fastcall UserGetWindowThreadProcessId(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int ThreadId; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  ThreadId = 0;
  v7 = HMValidateCatHandleNoRip(a1);
  if ( v7 )
  {
    v12 = *(_QWORD *)(v7 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v12);
    if ( a2 )
      *a2 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(v12 + 424));
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return ThreadId;
}

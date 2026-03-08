/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C00BA170
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     ApiSetEditionAreAllAccessGranted @ 0x1C00BA1FC (ApiSetEditionAreAllAccessGranted.c)
 */

__int64 __fastcall NtUserGetDoubleClickTime(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ebx
  PVOID *v10; // r8
  __int64 v11; // rax

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v9 = 0;
  v10 = (PVOID *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v10 = (PVOID *)(v6 & CurrentProcessWin32Process);
  }
  if ( *v10 == gpepCSRSS )
    goto LABEL_7;
  v11 = PsGetCurrentProcessWin32Process(v7);
  if ( v11 )
    v11 &= -(__int64)(*(_QWORD *)v11 != 0LL);
  if ( (unsigned int)ApiSetEditionAreAllAccessGranted(*(unsigned int *)(v11 + 672)) )
LABEL_7:
    v9 = *(_DWORD *)(SGDGetUserSessionState(v7, v6, v10, v8) + 14360);
  UserSessionSwitchLeaveCrit(v7, v6, (__int64)v10, v8);
  return v9;
}

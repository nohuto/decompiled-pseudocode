/*
 * XREFs of NtUserCheckProcessSession @ 0x1C0083AF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     _DwmCheckProcessSession @ 0x1C0083B60 (_DwmCheckProcessSession.c)
 */

__int64 __fastcall NtUserCheckProcessSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 v10; // rbx
  ULONG v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // eax

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  v10 = 0LL;
  if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v16 = DwmCheckProcessSession(v4);
    if ( v16 >= 0 )
    {
      v10 = 1LL;
      goto LABEL_7;
    }
    v11 = RtlNtStatusToDosError(v16);
  }
  else
  {
    v11 = 5;
  }
  UserSetLastError(v11);
LABEL_7:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v10;
}

__int64 __fastcall CitpSetViewEngagementInfo(union _CIT_SI_INFOFLAGS *a1, __int128 **a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  struct _CIT_INTERACTION_SUMMARY *v12; // rax
  __int128 v14; // [rsp+28h] [rbp-20h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  Process = a1;
  v2 = xmmword_1C02D4DA0;
  if ( ((unsigned __int8)*a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = **a2;
  Process = 0LL;
  if ( PsLookupProcessByProcessId((HANDLE)SDWORD2(v14), &Process) >= 0 )
  {
    v7 = *(_DWORD *)SGDGetUserSessionState(v4, v3, v5, v6);
    if ( (unsigned int)PsGetProcessSessionId(Process) == v7 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      v10 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        v9 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
        v10 = v9 & ProcessWin32Process;
      }
      if ( v10 && CitpProcessEnsureContext((struct tagPROCESSINFO *)v10, (const char *)v9) )
      {
        v12 = CitpInteractionSummaryEnsure(v2, *(struct tagPROCESSINFO ***)(v10 + 912), 1LL, v11);
        if ( v12 )
          *((_QWORD *)v12 + 2) |= v14;
        **(_QWORD **)(v10 + 912) = v14;
      }
    }
    ObfDereferenceObject(Process);
  }
  return 0LL;
}

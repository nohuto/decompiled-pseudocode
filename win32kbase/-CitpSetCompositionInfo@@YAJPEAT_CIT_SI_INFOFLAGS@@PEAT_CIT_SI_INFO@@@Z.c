__int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, __int64 a3, __int64 a4)
{
  struct _CIT_IMPACT_CONTEXT *v6; // r12
  const char *v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int16 i; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int16 v16; // ax
  __int64 ProcessWin32Process; // rax
  __int64 v18; // rbx
  struct _CIT_INTERACTION_SUMMARY *v19; // rax
  struct _CIT_INTERACTION_SUMMARY *v20; // r9
  __int128 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+38h] [rbp-30h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v6 = xmmword_1C02D4DA0;
  if ( !UserIsCurrentProcessDwm((__int64)a1, (__int64)a2, a3, a4) )
    return 3221225506LL;
  v8 = *(_QWORD *)a2;
  v9 = *((unsigned __int16 *)a1 + 1);
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int16)v9 )
      return 0LL;
    if ( (unsigned __int64)(24 * v9 - 1) > 0xFFFE )
      break;
    if ( (v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = *(_OWORD *)(v8 + 24LL * i);
    v23 = *(_QWORD *)(v8 + 24LL * i + 16);
    if ( (_QWORD)v22 )
    {
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)(int)v23, &Process) >= 0 )
      {
        if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v22 + 1) )
        {
          v15 = *(_DWORD *)SGDGetUserSessionState(v12, v11, v13, v14);
          if ( (unsigned int)PsGetProcessSessionId(Process) == v15 )
          {
            v16 = -1;
            if ( HIDWORD(v23) <= 0xFFFF )
              v16 = WORD2(v23);
            WORD3(v22) = v16;
            PsUpdateComponentPower(Process, 7LL, v22);
            ProcessWin32Process = PsGetProcessWin32Process(Process);
            v18 = ProcessWin32Process;
            if ( ProcessWin32Process )
              v18 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
            if ( v18 )
            {
              if ( CitpProcessEnsureContext((struct tagPROCESSINFO *)v18) )
              {
                v19 = CitpInteractionSummaryEnsure(v6, *(struct _CIT_PROCESS **)(v18 + 912), 4u);
                v20 = v19;
                if ( v19 )
                {
                  if ( (_WORD)v22 )
                    CitpStatIncrement((unsigned __int16 *)v19 + 54, 1u);
                  if ( WORD1(v22) )
                    CitpStatIncrement((unsigned __int16 *)v20 + 55, 1u);
                  if ( WORD2(v22) )
                    CitpStatIncrement((unsigned __int16 *)v20 + 56, 1u);
                }
              }
            }
          }
        }
        ObfDereferenceObject(Process);
      }
    }
  }
  CitpLogFailureWorker(-1073741823, v7, 0x11C8u);
  return 3221225473LL;
}

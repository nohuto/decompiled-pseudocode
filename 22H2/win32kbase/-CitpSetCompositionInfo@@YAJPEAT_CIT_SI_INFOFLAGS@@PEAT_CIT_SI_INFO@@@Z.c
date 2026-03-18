/*
 * XREFs of ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0032F98
 * Callers:
 *     CitSetInfo @ 0x1C0033570 (CitSetInfo.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00331FC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0033220 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003330C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0233E40 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, __int64 a3)
{
  struct _CIT_IMPACT_CONTEXT *v5; // r12
  const char *v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int16 i; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v16; // rbx
  struct _CIT_INTERACTION_SUMMARY *v17; // rax
  struct _CIT_INTERACTION_SUMMARY *v18; // r9
  __int128 v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+38h] [rbp-30h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v5 = xmmword_1C0293D30;
  if ( !UserIsCurrentProcessDwm((__int64)a1, (__int64)a2, a3) )
    return 3221225506LL;
  v7 = *(_QWORD *)a2;
  v8 = *((unsigned __int16 *)a1 + 1);
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int16)v8 )
      return 0LL;
    if ( (unsigned __int64)(24 * v8 - 1) > 0xFFFE )
      break;
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = *(_OWORD *)(v7 + 24LL * i);
    v21 = *(_QWORD *)(v7 + 24LL * i + 16);
    if ( (_QWORD)v20 )
    {
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)(int)v21, &Process) >= 0 )
      {
        if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v20 + 1) )
        {
          v14 = *(_DWORD *)SGDGetUserSessionState(v11, v10, v12, v13);
          if ( (unsigned int)PsGetProcessSessionId(Process) == v14 )
          {
            PsUpdateComponentPower(Process, 7LL);
            ProcessWin32Process = PsGetProcessWin32Process(Process);
            v16 = ProcessWin32Process;
            if ( ProcessWin32Process )
              v16 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
            if ( v16 )
            {
              if ( CitpProcessEnsureContext((struct tagPROCESSINFO *)v16) )
              {
                v17 = CitpInteractionSummaryEnsure(v5, *(struct _CIT_PROCESS **)(v16 + 936), 4u);
                v18 = v17;
                if ( v17 )
                {
                  if ( (_WORD)v20 )
                    CitpStatIncrement((unsigned __int16 *)v17 + 54, 1u);
                  if ( WORD1(v20) )
                    CitpStatIncrement((unsigned __int16 *)v18 + 55, 1u);
                  if ( WORD2(v20) )
                    CitpStatIncrement((unsigned __int16 *)v18 + 56, 1u);
                }
              }
            }
          }
        }
        ObfDereferenceObject(Process);
      }
    }
  }
  CitpLogFailureWorker(-1073741823, v6, 0x1210u);
  return 3221225473LL;
}

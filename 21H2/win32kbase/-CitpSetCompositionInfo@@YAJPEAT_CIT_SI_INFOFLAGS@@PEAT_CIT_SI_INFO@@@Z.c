/*
 * XREFs of ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0046170
 * Callers:
 *     CitSetInfo @ 0x1C0046F70 (CitSetInfo.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00463BC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C00463E0 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C00464E8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     UserIsCurrentProcessDwm @ 0x1C00478C0 (UserIsCurrentProcessDwm.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FE090 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v4; // r12
  const char *v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int16 i; // di
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // rbx
  struct _CIT_INTERACTION_SUMMARY *v11; // rax
  struct _CIT_INTERACTION_SUMMARY *v12; // r9
  __int128 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v4 = xmmword_1C0255560;
  if ( !(unsigned int)UserIsCurrentProcessDwm() )
    return 3221225506LL;
  v6 = *(_QWORD *)a2;
  v7 = *(_QWORD *)a1 >> 24;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int16)v7 )
      return 0LL;
    if ( 24 * (unsigned __int64)(unsigned __int16)v7 - 1 > 0xFFFE )
      break;
    if ( (v6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = *(_OWORD *)(v6 + 24LL * i);
    v15 = *(_QWORD *)(v6 + 24LL * i + 16);
    if ( (_QWORD)v14 )
    {
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)(int)v15, &Process) >= 0 )
      {
        if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v14 + 1)
          && (unsigned int)PsGetProcessSessionId(Process) == gSessionId )
        {
          PsUpdateComponentPower(Process, 7LL);
          ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
          v10 = ProcessWin32Process;
          if ( ProcessWin32Process )
          {
            if ( CitpProcessEnsureContext(ProcessWin32Process) )
            {
              v11 = CitpInteractionSummaryEnsure(v4, *((struct _CIT_PROCESS **)v10 + 116), 4u);
              v12 = v11;
              if ( v11 )
              {
                if ( (_WORD)v14 )
                  CitpStatIncrement((unsigned __int16 *)v11 + 54, 1u);
                if ( WORD1(v14) )
                  CitpStatIncrement((unsigned __int16 *)v12 + 55, 1u);
                if ( WORD2(v14) )
                  CitpStatIncrement((unsigned __int16 *)v12 + 56, 1u);
              }
            }
          }
        }
        ObfDereferenceObject(Process);
      }
    }
  }
  CitpLogFailureWorker(-1073741823, v5, 0x1A1Du);
  return 3221225473LL;
}

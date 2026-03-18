/*
 * XREFs of ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00171BC
 * Callers:
 *     CitSetInfo @ 0x1C009D150 (CitSetInfo.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0017404 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017428 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0017574 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, __int64 a3, __int64 a4)
{
  struct _CIT_IMPACT_CONTEXT *v6; // r12
  const char *v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int16 i; // di
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  struct tagPROCESSINFO *v12; // rbx
  struct _CIT_INTERACTION_SUMMARY *v13; // rax
  struct _CIT_INTERACTION_SUMMARY *v14; // r9
  __int128 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-30h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v6 = xmmword_1C029A230;
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
    v16 = *(_OWORD *)(v8 + 24LL * i);
    v17 = *(_QWORD *)(v8 + 24LL * i + 16);
    if ( (_QWORD)v16 )
    {
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)(int)v17, &Process) >= 0 )
      {
        if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v16 + 1)
          && (unsigned int)PsGetProcessSessionId(Process) == gSessionId )
        {
          PsUpdateComponentPower(Process, 7LL);
          ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
          v12 = ProcessWin32Process;
          if ( ProcessWin32Process )
          {
            if ( CitpProcessEnsureContext(ProcessWin32Process) )
            {
              v13 = CitpInteractionSummaryEnsure(v6, *((struct _CIT_PROCESS **)v12 + 116), 4u);
              v14 = v13;
              if ( v13 )
              {
                if ( (_WORD)v16 )
                  CitpStatIncrement((unsigned __int16 *)v13 + 54, 1u);
                if ( WORD1(v16) )
                  CitpStatIncrement((unsigned __int16 *)v14 + 55, 1u);
                if ( WORD2(v16) )
                  CitpStatIncrement((unsigned __int16 *)v14 + 56, 1u);
              }
            }
          }
        }
        ObfDereferenceObject(Process);
      }
    }
  }
  CitpLogFailureWorker(-1073741823, v7, 0x1AE4u);
  return 3221225473LL;
}

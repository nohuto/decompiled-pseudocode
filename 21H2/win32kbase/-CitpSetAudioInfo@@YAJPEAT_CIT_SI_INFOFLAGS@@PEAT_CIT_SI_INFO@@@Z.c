/*
 * XREFs of ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C009D1C4
 * Callers:
 *     CitSetInfo @ 0x1C009D150 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017428 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0017574 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C009D46C (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 */

__int64 __fastcall CitpSetAudioInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, __int64 a3, __int64 a4)
{
  struct _CIT_IMPACT_CONTEXT *v4; // rbx
  __int16 v5; // bp
  __int64 v6; // r15
  struct _CIT_PROCESS **CurrentProcessWin32Process; // r14
  struct tagPROCESSINFO **v8; // rax
  struct tagPROCESSINFO **v9; // rsi
  struct _CIT_INTERACTION_SUMMARY *v10; // rdi
  char *v11; // rbx
  char *v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v19; // al

  v4 = xmmword_1C029A230;
  v5 = *((_WORD *)a1 + 1);
  v6 = (unsigned __int16)*(_DWORD *)a1;
  CurrentProcessWin32Process = (struct _CIT_PROCESS **)PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  v8 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(CurrentProcessWin32Process);
  v9 = v8;
  if ( !v8 )
    return 3221225473LL;
  v10 = CitpInteractionSummaryEnsure(v4, v8, 16);
  v11 = 0LL;
  if ( v5 )
  {
    if ( (unsigned int)dword_1C028F034 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C028F028);
    v12 = (char *)(v9 + 14);
    v13 = 10LL;
    if ( v10 )
      v11 = (char *)v10 + 116;
  }
  else
  {
    if ( (unsigned int)dword_1C028D7BC < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C028D7B0);
    v12 = (char *)v9 + 113;
    v13 = 11LL;
    if ( v10 )
      v11 = (char *)v10 + 124;
  }
  v14 = *v12;
  if ( v6 == 3 )
  {
    if ( v14 != -1 )
    {
      v15 = v14 + 1;
      *v12 = v15;
      if ( v15 == 1 )
        PsUpdateComponentPower(*CurrentProcessWin32Process, v13);
    }
    if ( v11 )
    {
      v16 = v11[3];
      if ( v16 != -1 )
      {
        v17 = v16 + 1;
        v11[3] = v17;
        if ( v17 == 1 )
          *((_DWORD *)v11 + 1) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
      }
    }
  }
  else
  {
    if ( v14 )
    {
      v19 = v14 - 1;
      *v12 = v19;
      if ( !v19 )
        PsUpdateComponentPower(*CurrentProcessWin32Process, v13);
    }
    if ( v11 )
      CitpAudioStatDecrementStreams((struct _CIT_AUDIO_STATS *)v11, 1u);
  }
  return 0LL;
}

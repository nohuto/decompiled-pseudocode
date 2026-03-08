/*
 * XREFs of ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00C809C
 * Callers:
 *     CitSetInfo @ 0x1C006BA00 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B590 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B67C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C00C8230 (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 */

__int64 __fastcall CitpSetAudioInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  __int16 v3; // r14
  __int64 v4; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  struct tagPROCESSINFO *v7; // rdi
  struct tagPROCESSINFO **v8; // rax
  __int64 v9; // r9
  struct tagPROCESSINFO **v10; // rbp
  struct _CIT_INTERACTION_SUMMARY *v11; // rsi
  char *v12; // rbx
  char *v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  char v16; // al
  char v18; // al
  char v19; // al
  char v20; // al

  v2 = xmmword_1C02D4DA0;
  v3 = *((_WORD *)a1 + 1);
  v4 = (unsigned __int16)*(_DWORD *)a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v7 = (struct tagPROCESSINFO *)(v6 & CurrentProcessWin32Process);
  }
  v8 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v7, (const char *)v6);
  v10 = v8;
  if ( !v8 )
    return 3221225473LL;
  v11 = CitpInteractionSummaryEnsure(v2, v8, 16LL, v9);
  v12 = 0LL;
  if ( v3 )
  {
    if ( (unsigned int)dword_1C02CA894 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C02CA888);
    v13 = (char *)(v10 + 13);
    v14 = 10LL;
    if ( v11 )
      v12 = (char *)v11 + 116;
  }
  else
  {
    if ( (unsigned int)dword_1C02C94AC < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C02C94A0);
    v13 = (char *)v10 + 105;
    v14 = 11LL;
    if ( v11 )
      v12 = (char *)v11 + 124;
  }
  v15 = *v13;
  if ( v4 == 3 )
  {
    if ( v15 != -1 )
    {
      v18 = v15 + 1;
      *v13 = v18;
      if ( v18 == 1 )
        PsUpdateComponentPower(*(_QWORD *)v7, v14, 1LL);
    }
    if ( v12 )
    {
      v19 = v12[3];
      if ( v19 != -1 )
      {
        v20 = v19 + 1;
        v12[3] = v20;
        if ( v20 == 1 )
          *((_DWORD *)v12 + 1) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
      }
    }
  }
  else
  {
    if ( v15 )
    {
      v16 = v15 - 1;
      *v13 = v16;
      if ( !v16 )
        PsUpdateComponentPower(*(_QWORD *)v7, v14, 0LL);
    }
    if ( v12 )
      CitpAudioStatDecrementStreams((struct _CIT_AUDIO_STATS *)v12, 1u);
  }
  return 0LL;
}

/*
 * XREFs of ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C027364C
 * Callers:
 *     CitSetInfo @ 0x1C006BA00 (CitSetInfo.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C006B56C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B590 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B67C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 */

__int64 __fastcall CitpSetSpeechRecognitionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v6; // r11
  unsigned __int16 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int16 v11; // dx
  unsigned int v12; // r8d
  int v13; // eax
  __int16 v14; // di
  unsigned int v15; // r10d
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  struct tagPROCESSINFO **v22; // rax
  __int64 v23; // r9
  struct _CIT_INTERACTION_SUMMARY *v24; // rax

  v2 = xmmword_1C02D4DA0;
  if ( (unsigned int)dword_1C02CA87C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C02CA870);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    v6 = (struct tagPROCESSINFO *)*((_QWORD *)v2 + 15);
  if ( !v6 )
    return 3221226021LL;
  v8 = *((_WORD *)a1 + 1);
  if ( v8 >= 0x40u )
    v8 = 64;
  v9 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( v9 >= 0x3E800000000LL )
    LODWORD(v10) = -1;
  else
    v10 = v9 / 0x3E8;
  v11 = v10;
  if ( v8 <= (unsigned int)v10 )
    v11 = v8;
  if ( (unsigned int)v10 >= 0x40 )
  {
    v12 = *((_DWORD *)v2 + 76);
    v13 = v10 - 63;
    if ( (int)v10 - 63 > v12 )
    {
      *((_DWORD *)v2 + 76) = v13;
      if ( v13 - v12 < 0x40 )
        *((_QWORD *)v2 + 37) >>= (unsigned __int8)v13 - (unsigned __int8)v12;
      else
        *((_QWORD *)v2 + 37) = 0LL;
    }
  }
  v14 = 0;
  if ( (unsigned int)v10 > 0x40 )
    LODWORD(v10) = 64;
  v15 = 64 - v11;
  if ( v15 < (unsigned int)v10 )
  {
    v16 = *((_QWORD *)v2 + 37);
    do
    {
      v17 = v16;
      v18 = v14;
      v19 = 1LL << v15;
      v20 = (1LL << v15) & v16;
      ++v14;
      if ( v20 )
        v14 = v18;
      v21 = v20;
      v16 = v19 | v17;
      if ( v21 )
        v16 = v17;
      ++v15;
    }
    while ( v15 < (unsigned int)v10 );
    *((_QWORD *)v2 + 37) = v16;
    if ( v14 )
    {
      v22 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v6, (const char *)v19);
      if ( v22 )
      {
        v24 = CitpInteractionSummaryEnsure(v2, v22, 1LL, v23);
        if ( v24 )
          CitpStatIncrement((unsigned __int16 *)v24 + 52, v14);
      }
    }
  }
  return 0LL;
}

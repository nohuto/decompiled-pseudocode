/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B67C
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C006B308 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitBackgroundMouseInput @ 0x1C007ED10 (CitBackgroundMouseInput.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00B0564 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C00B8348 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00C5DBC (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00C809C (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C027364C (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C006B56C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0087CA0 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00C1AC4 (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00C21FC (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0272C80 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2,
        __int64 a3,
        __int64 a4)
{
  struct _CIT_INTERACTION_SUMMARY *v4; // rdi
  __int16 v5; // bp
  struct _CIT_PROG_DATA *v8; // rbx
  struct _CIT_INTERACTION_SUMMARY **v9; // r14
  struct tagPROCESSINFO *v10; // rbx
  char v11; // al
  struct _CIT_PROG_DATA *v13; // rax
  __int128 v14; // [rsp+20h] [rbp-38h]
  struct _CIT_INTERACTION_SUMMARY *v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  v5 = a3;
  if ( (*(&xmmword_1C02D4D84 + 8) & 1) == 0 )
    return v4;
  v8 = 0LL;
  if ( (*(&xmmword_1C02D4D84 + 8) & 2) != 0 )
  {
    v13 = CitpProcessEnsureProgData(a2[1]);
    v8 = v13;
    if ( !v13 )
      return v4;
    v9 = (struct _CIT_INTERACTION_SUMMARY **)((char *)v13 + 88);
  }
  else
  {
    v9 = a2 + 4;
  }
  v4 = *v9;
  if ( *v9 )
  {
    if ( ((*((unsigned __int16 *)v4 + 50) >> 2) & 0x1FFF) == dword_1C02D4D9C )
      goto LABEL_11;
    CitpInteractionSummaryDelete(v9);
  }
  CitpInteractionSummaryAllocate(&v15);
  v4 = v15;
  if ( v15 )
  {
    if ( v8 )
    {
      *((_WORD *)v15 + 50) |= 1u;
      *((_QWORD *)v4 + 3) = v8;
    }
    else
    {
      *((_QWORD *)v15 + 3) = a2;
    }
    *v9 = v4;
    if ( v4 )
    {
LABEL_11:
      *((_WORD *)v4 + 57) |= v5;
      if ( *(struct _CIT_INTERACTION_SUMMARY **)v4 == v4 )
        CitpInteractionSummaryStartTracking(a1, v4);
      *((_QWORD *)v4 + 2) |= (unsigned __int64)*a2;
      v10 = a2[1];
      LODWORD(v14) = *((_DWORD *)v10 + 14);
      WORD2(v14) = *(_WORD *)SGDGetUserSessionState(a1, a2, a3, a4);
      WORD3(v14) = *((_WORD *)xmmword_1C02D4DA0 + 58);
      *((_QWORD *)&v14 + 1) = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v10);
      *((_DWORD *)v4 + 24) = PsGetProcessSequenceNumber(*(_QWORD *)v10);
      *(_OWORD *)((char *)v4 + 76) = v14;
      v11 = *((_BYTE *)a2 + 108);
      if ( (v11 & 1) == 0 )
      {
        *((_BYTE *)a2 + 108) = v11 | 1;
        CitpStatIncrement((unsigned __int16 *)v4 + 51, 1);
      }
    }
    return v4;
  }
  return 0LL;
}

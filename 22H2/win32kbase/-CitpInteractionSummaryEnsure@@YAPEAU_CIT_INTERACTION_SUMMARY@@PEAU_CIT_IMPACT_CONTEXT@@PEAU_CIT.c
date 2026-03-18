/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003330C
 * Callers:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0010D88 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0032F98 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitBackgroundMouseInput @ 0x1C00594B8 (CitBackgroundMouseInput.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00A3D44 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00B674C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00B86C8 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C02348C8 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00331FC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C003341C (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0079224 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00B33F4 (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00B3F7C (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0233ED0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2,
        __int16 a3)
{
  struct _CIT_INTERACTION_SUMMARY *v3; // rbx
  struct _CIT_PROG_DATA *v7; // rdi
  struct _CIT_INTERACTION_SUMMARY **v8; // r14
  char v9; // al
  struct _CIT_PROG_DATA *v11; // rax
  struct _GUID v12; // [rsp+20h] [rbp-38h] BYREF
  struct _CIT_INTERACTION_SUMMARY *v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  if ( (*(&xmmword_1C0293D14 + 8) & 1) == 0 )
    return v3;
  v7 = 0LL;
  if ( (*(&xmmword_1C0293D14 + 8) & 2) != 0 )
  {
    v11 = CitpProcessEnsureProgData(a2[1]);
    v7 = v11;
    if ( !v11 )
      return v3;
    v8 = (struct _CIT_INTERACTION_SUMMARY **)((char *)v11 + 88);
  }
  else
  {
    v8 = a2 + 4;
  }
  v3 = *v8;
  if ( *v8 )
  {
    if ( ((*((unsigned __int16 *)v3 + 50) >> 2) & 0x1FFF) == dword_1C0293D2C )
      goto LABEL_11;
    CitpInteractionSummaryDelete(v8);
  }
  CitpInteractionSummaryAllocate(&v13);
  v3 = v13;
  if ( v13 )
  {
    if ( v7 )
    {
      *((_WORD *)v13 + 50) |= 1u;
      *((_QWORD *)v3 + 3) = v7;
    }
    else
    {
      *((_QWORD *)v13 + 3) = a2;
    }
    *v8 = v3;
    if ( v3 )
    {
LABEL_11:
      *((_WORD *)v3 + 57) |= a3;
      if ( *(struct _CIT_INTERACTION_SUMMARY **)v3 == v3 )
        CitpInteractionSummaryStartTracking(a1, v3);
      *((_QWORD *)v3 + 2) |= (unsigned __int64)*a2;
      *(struct _GUID *)((char *)v3 + 76) = *CitpProcessGetAppSessionId(&v12, a2[1], (unsigned int *)v3 + 24);
      v9 = *((_BYTE *)a2 + 108);
      if ( (v9 & 1) == 0 )
      {
        *((_BYTE *)a2 + 108) = v9 | 1;
        CitpStatIncrement((unsigned __int16 *)v3 + 51, 1);
      }
    }
    return v3;
  }
  return 0LL;
}

/*
 * XREFs of CitSetInfo @ 0x1C006BA00
 * Callers:
 *     NtUserCitSetInfo @ 0x1C006B7E0 (NtUserCitSetInfo.c)
 * Callees:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C006B308 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00C5DBC (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00C809C (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C02735B8 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C027364C (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 */

__int64 __fastcall CitSetInfo(__int64 a1, union _CIT_SI_INFO *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  union _CIT_SI_INFO *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a1;
  if ( !xmmword_1C02D4DA0 )
    return -1073741641LL;
  if ( (unsigned __int16)a1 == 2LL )
  {
    LODWORD(result) = CitpSetCompositionInfo((union _CIT_SI_INFOFLAGS *)&v5, (union _CIT_SI_INFO *)&v6, a3, a4);
    return (int)result;
  }
  if ( (unsigned __int64)(unsigned __int16)a1 - 3 <= 1 )
  {
    LODWORD(result) = CitpSetAudioInfo((union _CIT_SI_INFOFLAGS *)&v5, a2);
    return (int)result;
  }
  if ( (unsigned __int16)a1 == 5LL )
  {
    LODWORD(result) = CitpSetViewEngagementInfo((union _CIT_SI_INFOFLAGS *)5, (union _CIT_SI_INFO *)&v6);
    return (int)result;
  }
  if ( (unsigned __int16)a1 == 1LL )
  {
    if ( (_WORD)a2 == 64 )
      LODWORD(result) = CitpSetSpeechRecognitionInfo((union _CIT_SI_INFOFLAGS *)&v5, (union _CIT_SI_INFO *)&v6);
    else
      LODWORD(result) = CitpSetOtherInputInfo((union _CIT_SI_INFOFLAGS *)1, (union _CIT_SI_INFO *)&v6);
    return (int)result;
  }
  return -1073741821LL;
}

/*
 * XREFs of ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017428
 * Callers:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0016698 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00171BC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitBackgroundMouseInput @ 0x1C003D488 (CitBackgroundMouseInput.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004CD04 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C009D1C4 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C009D344 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitEnableKeyboardDelegation @ 0x1C009DF2C (CitEnableKeyboardDelegation.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C023FDB4 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0240768 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0017550 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpUTCToMS@@YAI_KI@Z @ 0x1C00A53F0 (-CitpUTCToMS@@YAI_KI@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00A58B0 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z @ 0x1C00AC734 (-CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

struct _CIT_PROCESS *__fastcall CitpProcessEnsureContext(struct _CIT_PROCESS **a1)
{
  __int64 v2; // rcx
  PVOID v4; // rbx
  const char *v5; // rdx
  __int64 Pool2; // rdi
  LONGLONG TimeQuadPart; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( CitpProcessInfoIsValid(a1[116]) )
    return (struct _CIT_PROCESS *)v2;
  if ( v2 != 52976 )
    return 0LL;
  v4 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) == 0x49637355
    && (v9 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1231254357 )
    {
      if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 136LL);
    if ( !Pool2 )
      goto LABEL_22;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v4,
                              Pool2,
                              BackTrace) )
      {
        a1[116] = (struct _CIT_PROCESS *)Pool2;
        goto LABEL_7;
      }
      goto LABEL_21;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v4,
                             Pool2,
                             BackTrace) )
    {
LABEL_21:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_22;
    }
    Pool2 += 16LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 120LL);
  }
  a1[116] = (struct _CIT_PROCESS *)Pool2;
  if ( !Pool2 )
  {
LABEL_22:
    a1[116] = (struct _CIT_PROCESS *)52976;
    CitpLogFailureWorker(-1073741670, v5, 0xF78u);
    return 0LL;
  }
LABEL_7:
  memset((void *)Pool2, 0, 0x78uLL);
  *(_OWORD *)(Pool2 + 48) = 0LL;
  *(_OWORD *)(Pool2 + 64) = 0LL;
  *(_QWORD *)(Pool2 + 80) = 0LL;
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*a1);
  v8 = CitpUTCToMS(TimeQuadPart, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *(_QWORD *)(Pool2 + 8) = a1;
  *(_DWORD *)(Pool2 + 88) = v8;
  *(_DWORD *)(Pool2 + 104) = v8;
  if ( CitpProcessGetProgramId((struct tagPROCESSINFO *)a1, (struct _CIT_PROGRAM_ID *)(Pool2 + 48)) >= 0 )
    *(_BYTE *)(Pool2 + 116) ^= (*(_BYTE *)(Pool2 + 116) ^ (2 * CitpDPGetAppIndex((struct _CIT_PROCESS *)Pool2))) & 0x1E;
  return (struct _CIT_PROCESS *)Pool2;
}

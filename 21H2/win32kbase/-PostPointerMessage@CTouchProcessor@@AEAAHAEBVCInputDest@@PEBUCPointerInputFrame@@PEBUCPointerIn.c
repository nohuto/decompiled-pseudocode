/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C019892C
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018FC3C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     CheckAccess @ 0x1C0042F70 (CheckAccess.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00444AC (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004450C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00454C0 (HMValidateHandleNoSecure.c)
 *     ApiSetEditionPostInputMessage @ 0x1C0047EAC (ApiSetEditionPostInputMessage.c)
 *     EtwTraceUIPIInputError @ 0x1C004B150 (EtwTraceUIPIInputError.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C004D8C4 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018E068 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     flagString @ 0x1C01A1110 (flagString.c)
 *     messageString @ 0x1C01A1210 (messageString.c)
 *     WPP_RECORDER_SF_LsHHsLLLL @ 0x1C01A188C (WPP_RECORDER_SF_LsHHsLLLL.c)
 *     GetPointerInputSource @ 0x1C01B1520 (GetPointerInputSource.c)
 */

__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerInfoNode *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  unsigned int v11; // edi
  __int64 Queue; // r13
  struct tagTHREADINFO *ThreadInfo; // r14
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r14d
  __int64 v20; // rax
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r9d
  bool v25; // cf
  int v26; // edx
  unsigned int v27; // ebx
  __int64 v29; // [rsp+30h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  __int128 v31; // [rsp+78h] [rbp-50h] BYREF
  __int64 v32; // [rsp+88h] [rbp-40h]
  int v33; // [rsp+D8h] [rbp+10h]

  v33 = (int)a2;
  v11 = 0;
  v30 = 0LL;
  Queue = CInputDest::GetQueue(a2, 0);
  if ( !Queue )
    goto LABEL_19;
  if ( *((_DWORD *)this + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9624);
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9627);
  if ( !a8 || (*(_DWORD *)a4 & 0x800) != 0 || a9 )
    goto LABEL_19;
  v15 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 23), 19);
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9638);
  if ( CheckAccess((unsigned int *)(*(_QWORD *)(v15 + 480) + 896LL), (unsigned int *)(Queue + 428))
    || (v17 = *(_QWORD *)(*(_QWORD *)(v15 + 384) + 88LL)) != 0
    && (*(_DWORD *)(v17 + 820) & 0x30) == 0x10
    && (v18 = *((_QWORD *)ThreadInfo + 53), v17 == v18)
    && (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)ThreadInfo, *(_QWORD *)(v18 + 880), 0) )
  {
LABEL_19:
    v19 = *((unsigned __int16 *)a4 + 86);
    if ( a6 != 595 )
      v19 |= (*((_WORD *)a4 + 90) & 0xE1F7) << 16;
    GetPointerInputSource(*((unsigned int *)a4 + 42), a8, a9, &v30);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = flagString(HIWORD(v19));
      v21 = messageString(a6, v20);
      WPP_RECORDER_SF_LsHHsLLLL(v23, v22, v21, v24);
    }
    v25 = *((_DWORD *)a4 + 78) != 0;
    v32 = 0LL;
    v29 = *((_QWORD *)a4 + 31);
    v31 = 0LL;
    v27 = ApiSetEditionPostInputMessage(v33, 0, a6, v19, a5, a7, v29, 0LL, v25 ? 8 : 0, &v30, (__int64)&v31);
    if ( v27 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v26, 7, 276, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
    return v27;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v16, 7, 274, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 428), 8);
  }
  return v11;
}

/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01D012C
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C6D20 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     CheckAccess @ 0x1C002FAE0 (CheckAccess.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C003B4E4 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     EtwTraceUIPIInputError @ 0x1C003D190 (EtwTraceUIPIInputError.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C003EB54 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ApiSetEditionPostInputMessage @ 0x1C0041768 (ApiSetEditionPostInputMessage.c)
 *     GetPointerInputSource @ 0x1C00E9110 (GetPointerInputSource.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01C53AC (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     flagString @ 0x1C01DA508 (flagString.c)
 *     messageString @ 0x1C01DA5FC (messageString.c)
 *     WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL @ 0x1C01DAC3C (WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerInfoNode *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  unsigned int v10; // r15d
  __int64 Queue; // rbp
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagTHREADINFO *ThreadInfo; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // edx
  unsigned int v28; // ebp
  int v29; // r14d
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rdx
  bool v36; // cf
  unsigned int v37; // esi
  int v38; // r8d
  int v39; // edx
  int v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-50h]
  char v45; // [rsp+110h] [rbp+8h]
  int v46; // [rsp+118h] [rbp+10h]
  bool v47; // [rsp+128h] [rbp+20h]

  v46 = (int)a2;
  v10 = 0;
  v42 = 0LL;
  Queue = CInputDest::GetQueue((__int64)a2, 0, (__int64)a3);
  v13 = 1;
  if ( !Queue )
    goto LABEL_24;
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
  if ( !a8 || (*(_DWORD *)a4 & 0x800) != 0 || a9 )
    goto LABEL_24;
  v23 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 23), 19);
  if ( !v23 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
  if ( CheckAccess((unsigned int *)(*(_QWORD *)(v23 + 472) + 944LL), (unsigned int *)(Queue + 424))
    || (v26 = *(_QWORD *)(*(_QWORD *)(v23 + 384) + 88LL)) != 0
    && (*(_DWORD *)(v26 + 820) & 0x30) == 0x10
    && (v25 = *((_QWORD *)ThreadInfo + 53), v26 == v25)
    && (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)ThreadInfo, *(_QWORD *)(v25 + 880), 0) )
  {
LABEL_24:
    v28 = a6;
    v29 = *((unsigned __int16 *)a4 + 86);
    v41 = v29;
    if ( a6 != 595 )
    {
      v29 |= (*((_WORD *)a4 + 90) & 0xE1F7) << 16;
      v41 = v29;
    }
    GetPointerInputSource(*((_DWORD *)a4 + 42), a8, a9, &v42);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v30 = 0;
    }
    v45 = v30;
    v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = flagString(HIWORD(v29));
      messageString(a6, a6, v32, v31);
      LOBYTE(v33) = v47;
      LOBYTE(v34) = v45;
      WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        v33,
        WPP_MAIN_CB.Queue.ListEntry.Flink);
      v29 = v41;
      v28 = a6;
    }
    v35 = *((_QWORD *)a4 + 31);
    v36 = *((_DWORD *)a4 + 78) != 0;
    v44 = 0LL;
    v43 = 0LL;
    v37 = ApiSetEditionPostInputMessage(v46, 0LL, v28, v29, a5, a7, v35, 0LL, v36 ? 8 : 0, &v42, (__int64)&v43);
    if ( v37 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = 274;
        LOBYTE(v39) = v13;
        LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v39,
          v38,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          274,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
    }
    return v37;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v13 = 0;
    }
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = 272;
      LOBYTE(v27) = v13;
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v27,
        v25,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        272,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 424), 8);
  }
  return v10;
}

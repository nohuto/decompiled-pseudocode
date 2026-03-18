/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035E4C
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0035C74 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0036264 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C00363B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C00376A8 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C00377A8 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C003781C (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     IsEqualInputSource @ 0x1C00ACCA0 (IsEqualInputSource.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x1C00B0A84 (IsEditionComputeInjectorUIPISupported.c)
 *     EtwTraceMouseInputCoalesced @ 0x1C00C5CA0 (EtwTraceMouseInputCoalesced.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C00C5CC0 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C01B5D78 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01DDDC4 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4,
        const struct tagPOINT *a5)
{
  bool v8; // r14
  char v9; // r12
  char *v10; // r13
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // rdi
  __int64 v13; // rbx
  struct CMouseProcessor::RawMouseEvent *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct CMouseProcessor::RawMouseEvent *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  PDEVICE_OBJECT v26; // rcx
  int v27; // eax
  int v28; // r8d
  int v29; // r9d
  char v30; // [rsp+50h] [rbp-31h]
  char v31; // [rsp+51h] [rbp-30h]
  __int64 v32; // [rsp+58h] [rbp-29h] BYREF
  int v33; // [rsp+60h] [rbp-21h] BYREF
  int v34; // [rsp+64h] [rbp-1Dh] BYREF
  const struct _SUBPIXELS *v35; // [rsp+68h] [rbp-19h] BYREF
  __int128 v36; // [rsp+70h] [rbp-11h] BYREF
  __int64 v37; // [rsp+80h] [rbp-1h] BYREF
  int v38; // [rsp+88h] [rbp+7h]

  v35 = a3;
  v30 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL);
  v8 = 0;
  v31 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 256LL);
  v9 = 0;
  v37 = 0LL;
  v38 = 0;
  if ( !v30 || (int)IsEditionComputeInjectorUIPISupported() < 0 )
    goto LABEL_2;
  v22 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL);
  if ( a4 )
  {
    if ( v22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
    v27 = *((_DWORD *)a4 + 2);
    v37 = *(_QWORD *)a4;
    v38 = v27;
  }
  else
  {
    if ( v22 )
      goto LABEL_2;
    if ( qword_1C029D588 )
      qword_1C029D588(&v37);
  }
  v9 = 1;
LABEL_2:
  v10 = (char *)this + 2768;
  RIMLockExclusive((char *)this + 2768);
  v11 = (unsigned __int16 *)((char *)this + 72);
  if ( v11[1345] )
    v12 = &v11[84 * v11[1344]];
  else
    v12 = 0LL;
  v32 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v32);
  v13 = v32;
  if ( v12
    && !v12[14]
    && (unsigned __int8)IsEqualInputSource(v12 + 52)
    && !*((_WORD *)a2 + 2)
    && (*((_BYTE *)a2 + 2) & 8) == 0 )
  {
    v8 = *(_QWORD *)(v12 + 74) == *((_QWORD *)a2 + 10);
  }
  v14 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor::CMouseQueue *)v11, v8);
  v18 = v14;
  if ( v8 )
  {
    if ( !v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        20,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    EtwTraceMouseInputCoalesced(v26, v15, v17);
    InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
    goto LABEL_14;
  }
  if ( v14 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        22,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    *((_WORD *)v18 + 12) = *(_WORD *)a2;
    *((_WORD *)v18 + 14) = *((_WORD *)a2 + 2);
    *((_WORD *)v18 + 15) = *((_WORD *)a2 + 3);
    *((_DWORD *)v18 + 8) = *((_DWORD *)a2 + 2);
    *((_WORD *)v18 + 18) = *((_WORD *)a2 + 1);
    *((_QWORD *)v18 + 13) = v13;
    *((_DWORD *)v18 + 39) = *((_DWORD *)a2 + 18);
    *(_QWORD *)((char *)v18 + 148) = *((_QWORD *)a2 + 10);
LABEL_14:
    *(_OWORD *)v18 = *(_OWORD *)((char *)a2 + 24);
    *((_QWORD *)v18 + 2) = *((_QWORD *)a2 + 5);
    *((_DWORD *)v18 + 10) = *((_DWORD *)a2 + 5);
    *(_QWORD *)((char *)v18 + 60) = 0LL;
    if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL) )
    {
      v32 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v18 + 52) = v32;
      *(_QWORD *)((char *)v18 + 44) = 0LL;
    }
    else
    {
      *(struct tagPOINT *)((char *)v18 + 52) = gptCursorAsync;
      v32 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v18 + 44) = v32;
      if ( v35 )
        *(_QWORD *)((char *)v18 + 60) = *(_QWORD *)v35;
    }
    *(_QWORD *)((char *)v18 + 68) = *(_QWORD *)((char *)v18 + 52);
    *((_OWORD *)v18 + 5) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v18 + 12) = *((_QWORD *)a2 + 8);
    *((_DWORD *)v18 + 28) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
    if ( v9 )
    {
      if ( !v30 || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
      *(_QWORD *)&v36 = v37;
      DWORD2(v36) = v38;
      BYTE12(v36) = 1;
      *(_OWORD *)((char *)v18 + 116) = v36;
    }
    if ( a5 )
    {
      *((_DWORD *)v18 + 28) |= 0x4000u;
      *(struct tagPOINT *)((char *)v18 + 68) = *a5;
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
    {
      v33 = *((unsigned __int16 *)v18 + 15);
      v34 = *((unsigned __int16 *)v18 + 14);
      LODWORD(v35) = *((_DWORD *)v18 + 14);
      LODWORD(v32) = *((_DWORD *)v18 + 13);
      *(_QWORD *)&v36 = *((_QWORD *)v18 + 11);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C028EE70,
        (unsigned int)&unk_1C0263E53,
        v28,
        v29,
        (__int64)&v36,
        (__int64)&v32,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33);
    }
    if ( v31 )
      ApiSetEditionInitiateMouseEventProcessing(0LL);
    return;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      6,
      21,
      (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
  }
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  ApiSetEditionInitiateMouseEventProcessing(1LL);
  InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 7), 5LL);
}

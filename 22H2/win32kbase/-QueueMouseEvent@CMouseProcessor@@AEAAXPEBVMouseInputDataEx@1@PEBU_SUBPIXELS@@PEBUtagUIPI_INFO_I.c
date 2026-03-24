/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0041BB0
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0041A14 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0041F5C (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C00420AC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C0042180 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C004222C (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00422B0 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     IsEqualInputSource @ 0x1C0048890 (IsEqualInputSource.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     EtwTraceMouseInputCoalesced @ 0x1C00B7840 (EtwTraceMouseInputCoalesced.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C00B7860 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C017F738 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BF58C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4,
        const struct tagPOINT *a5)
{
  bool v8; // r14
  __int64 v9; // rdx
  char v10; // r12
  char *v11; // r13
  unsigned __int16 *v12; // r15
  unsigned __int16 *v13; // rdi
  __int64 v14; // rbx
  struct CMouseProcessor::RawMouseEvent *v15; // rax
  int v16; // edx
  struct CMouseProcessor::RawMouseEvent *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  int v25; // [rsp+50h] [rbp-31h] BYREF
  char v26; // [rsp+54h] [rbp-2Dh]
  char v27; // [rsp+55h] [rbp-2Ch]
  __int64 v28; // [rsp+58h] [rbp-29h] BYREF
  int v29; // [rsp+60h] [rbp-21h] BYREF
  const struct _SUBPIXELS *v30; // [rsp+68h] [rbp-19h] BYREF
  __int128 v31; // [rsp+70h] [rbp-11h] BYREF
  __int64 v32; // [rsp+80h] [rbp-1h] BYREF
  int v33; // [rsp+88h] [rbp+7h]

  v30 = a3;
  v26 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL);
  v8 = 0;
  v27 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 256LL);
  v10 = 0;
  v32 = 0LL;
  v33 = 0;
  if ( v26 )
  {
    v20 = qword_1C0257908 ? qword_1C0257908() : -1073741637;
    if ( v20 >= 0 )
    {
      v21 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL);
      if ( a4 )
      {
        if ( v21 )
        {
          v25 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3014LL);
        }
        v22 = *((_DWORD *)a4 + 2);
        v32 = *(_QWORD *)a4;
        v33 = v22;
      }
      else
      {
        if ( v21 )
          goto LABEL_2;
        if ( qword_1C0257910 )
          qword_1C0257910(&v32);
      }
      v10 = 1;
    }
  }
LABEL_2:
  v11 = (char *)this + 2776;
  RIMLockExclusive((char *)this + 2776, v9);
  v12 = (unsigned __int16 *)((char *)this + 80);
  if ( v12[1345] )
    v13 = &v12[84 * v12[1344]];
  else
    v13 = 0LL;
  v28 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v28);
  v14 = v28;
  if ( v13
    && !v13[14]
    && (unsigned __int8)IsEqualInputSource(v13 + 52, &v28)
    && !*((_WORD *)a2 + 2)
    && (*((_BYTE *)a2 + 2) & 8) == 0 )
  {
    v8 = *(_QWORD *)(v13 + 74) == *((_QWORD *)a2 + 10);
  }
  v15 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor::CMouseQueue *)v12, v8);
  v17 = v15;
  if ( v8 )
  {
    if ( !v15 )
    {
      v25 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3043LL);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v16,
        6,
        19,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    EtwTraceMouseInputCoalesced();
    InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
    goto LABEL_10;
  }
  if ( v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v16,
        6,
        21,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    *((_WORD *)v17 + 12) = *(_WORD *)a2;
    *((_WORD *)v17 + 14) = *((_WORD *)a2 + 2);
    *((_WORD *)v17 + 15) = *((_WORD *)a2 + 3);
    *((_DWORD *)v17 + 8) = *((_DWORD *)a2 + 2);
    *((_WORD *)v17 + 18) = *((_WORD *)a2 + 1);
    *((_QWORD *)v17 + 13) = v14;
    *((_DWORD *)v17 + 39) = *((_DWORD *)a2 + 18);
    *(_QWORD *)((char *)v17 + 148) = *((_QWORD *)a2 + 10);
LABEL_10:
    *(_OWORD *)v17 = *(_OWORD *)((char *)a2 + 24);
    *((_QWORD *)v17 + 2) = *((_QWORD *)a2 + 5);
    *((_DWORD *)v17 + 10) = *((_DWORD *)a2 + 5);
    *(_QWORD *)((char *)v17 + 60) = 0LL;
    if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL) )
    {
      v28 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v17 + 52) = v28;
      *(_QWORD *)((char *)v17 + 44) = 0LL;
    }
    else
    {
      *(struct tagPOINT *)((char *)v17 + 52) = gptCursorAsync;
      v28 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v17 + 44) = v28;
      if ( v30 )
        *(_QWORD *)((char *)v17 + 60) = *(_QWORD *)v30;
    }
    *(_QWORD *)((char *)v17 + 68) = *(_QWORD *)((char *)v17 + 52);
    *((_OWORD *)v17 + 5) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v17 + 12) = *((_QWORD *)a2 + 8);
    *((_DWORD *)v17 + 28) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
    if ( v10 )
    {
      if ( !v26 || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL) )
      {
        v25 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3113LL);
      }
      *(_QWORD *)&v31 = v32;
      DWORD2(v31) = v33;
      BYTE12(v31) = 1;
      *(_OWORD *)((char *)v17 + 116) = v31;
    }
    if ( a5 )
    {
      *((_DWORD *)v17 + 28) |= 0x4000u;
      *(struct tagPOINT *)((char *)v17 + 68) = *a5;
    }
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)dword_1C024AA90 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 64LL, v18, v19) )
    {
      v25 = *((unsigned __int16 *)v17 + 15);
      v29 = *((unsigned __int16 *)v17 + 14);
      LODWORD(v30) = *((_DWORD *)v17 + 14);
      LODWORD(v28) = *((_DWORD *)v17 + 13);
      *(_QWORD *)&v31 = *((_QWORD *)v17 + 11);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C024AA90,
        (unsigned int)&unk_1C021FD83,
        v23,
        v24,
        (__int64)&v31,
        (__int64)&v28,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v25);
    }
    if ( v27 )
      ApiSetEditionInitiateMouseEventProcessing(0LL);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      6,
      20,
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  *((_QWORD *)v11 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v11, 0LL);
  KeLeaveCriticalRegion();
  ApiSetEditionInitiateMouseEventProcessing(1LL);
  InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 7), 5LL);
}

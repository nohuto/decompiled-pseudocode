void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4,
        const struct tagPOINT *a5)
{
  unsigned int v8; // edi
  CMouseProcessor::CMouseQueue *v9; // r13
  char *v10; // rsi
  struct tagPOINT v11; // rbx
  bool v12; // r15
  struct CMouseProcessor::RawMouseEvent *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct CMouseProcessor::RawMouseEvent *v16; // rsi
  struct tagPOINT v17; // rcx
  char *v18; // rcx
  PDEVICE_OBJECT v19; // rcx
  char v20; // al
  int v21; // eax
  __int16 v22; // ax
  char *v23; // rcx
  __int64 v24; // r8
  char v25; // [rsp+40h] [rbp-C0h]
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  struct tagPOINT v27; // [rsp+48h] [rbp-B8h] BYREF
  char v28; // [rsp+50h] [rbp-B0h]
  char v29; // [rsp+51h] [rbp-AFh]
  char *v30; // [rsp+58h] [rbp-A8h] BYREF
  const struct _SUBPIXELS *v31; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  int v34; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  struct tagPOINT *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char **v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  const struct _SUBPIXELS **v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]

  v31 = a3;
  v28 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL);
  v8 = 0;
  v29 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 256LL);
  v25 = 0;
  v33 = 0LL;
  v34 = 0;
  if ( !v28 || (int)IsEditionComputeInjectorUIPISupported() < 0 )
    goto LABEL_2;
  v20 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL);
  if ( a4 )
  {
    if ( v20 )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3146LL);
    }
    v21 = *((_DWORD *)a4 + 2);
    v33 = *(_QWORD *)a4;
    v34 = v21;
  }
  else
  {
    if ( v20 )
      goto LABEL_2;
    if ( qword_1C02D7D50 )
      qword_1C02D7D50(&v33);
  }
  v25 = 1;
LABEL_2:
  v30 = (char *)this + 2768;
  RIMLockExclusive((__int64)this + 2768);
  v9 = (CMouseProcessor *)((char *)this + 72);
  if ( *((_WORD *)this + 1381) )
    v10 = (char *)v9 + 168 * *((unsigned __int16 *)this + 1380);
  else
    v10 = 0LL;
  if ( *((_DWORD *)a2 + 22) == 1 || *((_DWORD *)a2 + 22) == 2 )
  {
    v27.x = 2;
  }
  else
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 22) - 3) > 1 )
    {
      v22 = *((_WORD *)a2 + 1);
      if ( (v22 & 0x10) != 0 )
      {
        v27.x = 4;
      }
      else if ( (v22 & 0x40) != 0 )
      {
        v27.x = 8;
      }
      else if ( (v22 & 0x80u) == 0 )
      {
        v27.x = (v22 & 0x100 | 0x10u) >> 3;
      }
      else
      {
        v27.x = 18;
      }
      if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 64LL) )
        v27.y = 1;
      else
        v27.y = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL) != 0 ? 2 : 0;
      goto LABEL_9;
    }
    v27.x = 0;
  }
  v27.y = 4;
LABEL_9:
  v11 = v27;
  v12 = v10
     && !*((_WORD *)v10 + 14)
     && (unsigned __int8)IsEqualInputSource(v10 + 104, &v27)
     && !*((_WORD *)a2 + 2)
     && (*((_BYTE *)a2 + 2) & 8) == 0
     && *(_QWORD *)(v10 + 148) == *((_QWORD *)a2 + 10);
  v13 = CMouseProcessor::CMouseQueue::GetItemForWrite(v9, v12);
  v16 = v13;
  if ( v12 )
  {
    if ( !v13 )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3175LL);
    }
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v14) = 0;
    }
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        20,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    EtwTraceMouseInputCoalesced(v19, v14, v15);
    InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
    goto LABEL_20;
  }
  if ( v13 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        22,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
    *((_WORD *)v16 + 12) = *(_WORD *)a2;
    *((_WORD *)v16 + 14) = *((_WORD *)a2 + 2);
    *((_WORD *)v16 + 15) = *((_WORD *)a2 + 3);
    *((_DWORD *)v16 + 8) = *((_DWORD *)a2 + 2);
    *((_WORD *)v16 + 18) = *((_WORD *)a2 + 1);
    *((struct tagPOINT *)v16 + 13) = v11;
    *((_DWORD *)v16 + 39) = *((_DWORD *)a2 + 18);
    *(_QWORD *)((char *)v16 + 148) = *((_QWORD *)a2 + 10);
LABEL_20:
    *(_OWORD *)v16 = *(_OWORD *)((char *)a2 + 24);
    *((_QWORD *)v16 + 2) = *((_QWORD *)a2 + 5);
    *((_DWORD *)v16 + 10) = *((_DWORD *)a2 + 5);
    *(_QWORD *)((char *)v16 + 60) = 0LL;
    if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL) )
    {
      v27 = *(struct tagPOINT *)((char *)a2 + 12);
      v17 = v27;
      *(struct tagPOINT *)((char *)v16 + 52) = v27;
      *(_QWORD *)((char *)v16 + 44) = 0LL;
    }
    else
    {
      *(struct tagPOINT *)((char *)v16 + 52) = gptCursorAsync;
      v17 = gptCursorAsync;
      v27 = *(struct tagPOINT *)((char *)a2 + 12);
      *(struct tagPOINT *)((char *)v16 + 44) = v27;
      if ( v31 )
        *(_QWORD *)((char *)v16 + 60) = *(_QWORD *)v31;
    }
    *(struct tagPOINT *)((char *)v16 + 68) = v17;
    *((_OWORD *)v16 + 5) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v16 + 12) = *((_QWORD *)a2 + 8);
    *((_DWORD *)v16 + 28) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
    if ( v25 )
    {
      if ( !v28 || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL) )
      {
        v26 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3245LL);
      }
      *(_QWORD *)&v32 = v33;
      DWORD2(v32) = v34;
      BYTE12(v32) = 1;
      *(_OWORD *)((char *)v16 + 116) = v32;
    }
    if ( a5 )
    {
      *((_DWORD *)v16 + 28) |= 0x4000u;
      *(struct tagPOINT *)((char *)v16 + 68) = *a5;
    }
    v18 = v30;
    *((_QWORD *)v30 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
    {
      v26 = *((unsigned __int16 *)v16 + 15);
      LODWORD(v31) = *((unsigned __int16 *)v16 + 14);
      LODWORD(v30) = *((_DWORD *)v16 + 14);
      v27.x = *((_DWORD *)v16 + 13);
      *(_QWORD *)&v32 = *((_QWORD *)v16 + 11);
      v44 = &v26;
      v42 = &v31;
      v40 = &v30;
      v38 = &v27;
      v36 = &v32;
      v45 = 4LL;
      v43 = 4LL;
      v41 = 4LL;
      v39 = 4LL;
      v37 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029DC31, 0, 0, 7u, &v35);
    }
    if ( v29 )
    {
      LOBYTE(v8) = *((_DWORD *)a2 + 22) != 0;
      ApiSetEditionInitiateMouseEventProcessing(0LL, v8);
    }
    return;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      6,
      21,
      (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
  }
  v23 = v30;
  *((_QWORD *)v30 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v23, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v8) = *((_DWORD *)a2 + 22) != 0;
  ApiSetEditionInitiateMouseEventProcessing(1LL, v8);
  InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 7), 5LL, v24);
}

/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60
 * Callers:
 *     ProcessMouseEvent @ 0x1C0055B10 (ProcessMouseEvent.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C0052D74 (IsMouseIVEnabled.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z @ 0x1C0055B34 (-DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0057D9C (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0096AB0 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C00AD5F0 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C00AD610 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00BFBB0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00C9578 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00C9854 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01DEC6C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01E9D14 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01EA4DC (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01F44A0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@U3@@-$_tlgW.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01F57E0 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01F6E3C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v8; // rbx
  CMouseProcessor::RawMouseEvent *v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  _BYTE *v12; // rdi
  CMouseProcessor *v13; // rcx
  _BYTE *v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  _BOOL8 v17; // r8
  int v18; // edx
  __int64 v19; // r8
  int v20; // edx
  unsigned int v21; // esi
  bool (__fastcall **v22)(const struct CMouseProcessor::CMouseEvent *); // rbx
  void (*v23)(void); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+6Ch] [rbp-94h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  void **v36; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h]
  _BYTE v39[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v43[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+C8h] [rbp-38h]
  _BYTE v46[2688]; // [rsp+D0h] [rbp-30h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v39,
    "ProcessMouse",
    0LL);
  EtwTraceStartProcessQueuedMouseEvents();
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v2, v3, v4);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v8 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v28 = *(_QWORD *)v8;
          *((_QWORD *)v8 + 2) = 0LL;
          if ( !*(_DWORD *)(v28 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*(_QWORD *)v8);
        }
      }
    }
  }
  if ( this == (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor() )
  {
    memset(v46, 0, sizeof(v46));
    v9 = (CMouseProcessor::RawMouseEvent *)v46;
    v10 = 16LL;
    do
    {
      CMouseProcessor::RawMouseEvent::RawMouseEvent(v9);
      v9 = (CMouseProcessor::RawMouseEvent *)((char *)v9 + 168);
      --v10;
    }
    while ( v10 );
    v11 = CMouseProcessor::DequeueMouseEvents(this, (struct CMouseProcessor::RawMouseEvent *)v46);
    if ( v11 )
    {
      v12 = &v46[56];
      while ( 1 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v43,
          "ProcessMouseEvent",
          (const struct InputTraceLogging::ThreadLockedPerfRegion *)v39);
        if ( (unsigned int)dword_1C0289810 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 64LL) )
        {
          v29 = InputTraceLogging::OriginIdToString(*((unsigned int *)v12 + 13));
          v30 = *((_DWORD *)v12 + 12);
          v40 = v29;
          v41 = (__int64)InputTraceLogging::DeviceTypeToString(v30);
          v32 = *((unsigned __int16 *)v12 - 13);
          v33 = *((unsigned __int16 *)v12 - 14);
          v34 = *(_DWORD *)v12;
          v35 = *((_DWORD *)v12 - 1);
          v42 = *((_QWORD *)v12 + 4);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
            (int)&dword_1C0289810,
            (int)&dword_1C025F4AE,
            (__int64)&v42,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v41,
            (__int64)&v40);
        }
        v14 = v12 - 56;
        CMouseProcessor::ComputeUIPIForMouseEvent(v13, (struct CMouseProcessor::RawMouseEvent *)(v12 - 56));
        v37 = v12 - 56;
        v36 = &CMouseProcessor::CMouseEvent::`vftable';
        v38 = 0;
        if ( (v12[56] & 1) == 0 && *((_DWORD *)v12 + 13) != 1 )
        {
          v16 = *((_DWORD *)v12 + 21);
          v17 = *((_QWORD *)v12 + 13) != 0LL;
          v44 = *(_QWORD *)(v12 + 76);
          v45 = v16;
          if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v44, v15, v17) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
              || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v18) = 0;
            }
            LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v18,
                v19,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                6,
                15,
                (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
            InputTraceLogging::Mouse::DropInput(*((_QWORD *)v37 + 11), 10LL, v19);
            goto LABEL_30;
          }
          v14 = v37;
        }
        v20 = *((_DWORD *)v14 + 28);
        if ( (v20 & 0x8000) == 0 )
          break;
        if ( !*((_QWORD *)v14 + 20) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6727LL);
LABEL_27:
          v14 = v37;
        }
        v23 = (void (*)(void))*((_QWORD *)v14 + 20);
        if ( v23 )
          v23();
LABEL_30:
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v43);
        v12 += 168;
        if ( !--v11 )
          goto LABEL_31;
      }
      if ( (v20 & 0x800) == 0 )
      {
        v31 = ((v20 & 0x40) != 0 ? 16 : 32) | 8;
        if ( (v20 & 0x80u) == 0 )
          v31 = (v20 & 0x40) != 0 ? 16 : 32;
        CInputGlobals::UpdateInputGlobals(
          *((_QWORD *)&WPP_MAIN_CB.Reserved + 1),
          *((_QWORD *)v14 + 10),
          3LL,
          *((unsigned __int16 *)v14 + 14),
          0,
          v31);
      }
      CMouseProcessor::CMouseRawInput::Initialize(
        (CMouseProcessor *)((char *)this + 3464),
        (const struct CMouseProcessor::CMouseEvent *)&v36);
      v21 = 0;
      v22 = &off_1C02380F0;
      do
      {
        if ( !*v22 || (*v22)((const struct CMouseProcessor::CMouseEvent *)&v36) )
          ((void (__fastcall *)(CMouseProcessor *, void ***))v22[1])(this, &v36);
        ++v21;
        v22 += 2;
      }
      while ( v21 < 3 );
      if ( (unsigned __int8)IsMouseIVEnabled() && isRootPartition() )
        CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
          (CMouseProcessor *)((char *)this + 3904),
          (const struct CMouseProcessor::CMouseEvent *)&v36);
      goto LABEL_27;
    }
LABEL_31:
    if ( (unsigned __int8)IsMouseIVEnabled() && isRootPartition() )
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
  }
  EtwTraceStopProcessQueuedMouseEvents();
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v39);
}

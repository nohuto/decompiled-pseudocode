/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4
 * Callers:
 *     ProcessMouseEvent @ 0x1C003ADB0 (ProcessMouseEvent.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C001DDB0 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0037B34 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C0038414 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00423F4 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00427EC (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C005CF18 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C007DBA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C00AD960 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C00AD980 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z @ 0x1C00DCE50 (-DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01DDDC4 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01E9324 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01E9884 (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01F8B1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@U3@@-$_tlgW.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01F96B0 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01FA61C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagKERNELHANDLETABLEENTRY *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rbx
  unsigned __int64 v12; // r15
  _BYTE *v13; // rdi
  CMouseProcessor *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ecx
  _BYTE *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // edx
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // r14d
  bool (__fastcall **v27)(const struct CMouseProcessor::CMouseEvent *); // rbx
  void (*v28)(void); // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v35; // [rsp+70h] [rbp-98h] BYREF
  int v36; // [rsp+74h] [rbp-94h] BYREF
  void **v37; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v38; // [rsp+80h] [rbp-88h]
  int v39; // [rsp+88h] [rbp-80h]
  __int64 *v40; // [rsp+90h] [rbp-78h] BYREF
  __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v44; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-50h] BYREF
  int v46; // [rsp+C0h] [rbp-48h]
  _BYTE v47[2688]; // [rsp+C8h] [rbp-40h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v40, "ProcessMouse", 0LL);
  EtwTraceStartProcessQueuedMouseEvents();
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0);
  gptiCurrent = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 377) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v4, v3, v5, v6) )
    {
      while ( 1 )
      {
        v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        v9 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
        v10 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
        *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
        gpSharedUserCritDeferredUnlockListHead = v9;
        if ( !*(_DWORD *)(v10 + 8) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7, v8);
          v10 = *v11;
        }
        HMUnlockObject(v10);
      }
    }
  }
  if ( this == (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor() )
  {
    memset(v47, 0, sizeof(v47));
    `vector constructor iterator'(
      v47,
      0xA8uLL,
      0x10uLL,
      (void *(*)(void *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
    v12 = CMouseProcessor::DequeueMouseEvents(this, (struct CMouseProcessor::RawMouseEvent *)v47);
    if ( v12 )
    {
      v13 = &v47[56];
      while ( 1 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          &v44,
          "ProcessMouseEvent",
          (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v40);
        if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
        {
          v15 = InputTraceLogging::OriginIdToString(*((unsigned int *)v13 + 13));
          v16 = *((_DWORD *)v13 + 12);
          v41 = v15;
          v42 = (__int64)InputTraceLogging::DeviceTypeToString(v16);
          v33 = *((unsigned __int16 *)v13 - 13);
          v34 = *((unsigned __int16 *)v13 - 14);
          v35 = *(_DWORD *)v13;
          v36 = *((_DWORD *)v13 - 1);
          v43 = *((_QWORD *)v13 + 4);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
            (int)&dword_1C028EE70,
            (int)&dword_1C0263FAA,
            (__int64)&v43,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v42,
            (__int64)&v41);
        }
        v17 = v13 - 56;
        CMouseProcessor::ComputeUIPIForMouseEvent(v14, (struct CMouseProcessor::RawMouseEvent *)(v13 - 56));
        v39 = 0;
        v37 = &CMouseProcessor::CMouseEvent::`vftable';
        v38 = v13 - 56;
        if ( (v13[56] & 1) != 0 || *((_DWORD *)v13 + 13) == 1 )
          goto LABEL_27;
        v21 = *((_DWORD *)v13 + 21);
        v22 = *((_QWORD *)v13 + 13) == 0LL;
        v45 = *(_QWORD *)(v13 + 76);
        v46 = v21;
        if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v45, v18, !v22) )
          break;
        LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v23,
            v20,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            6,
            15,
            (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
        }
        InputTraceLogging::Mouse::DropInput(*((_QWORD *)v38 + 11), 10LL);
LABEL_45:
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v44);
        v13 += 168;
        if ( !--v12 )
          goto LABEL_46;
      }
      v17 = v38;
LABEL_27:
      v24 = *((unsigned int *)v17 + 28);
      if ( (v24 & 0x8000) != 0 )
      {
        if ( *((_QWORD *)v17 + 20) )
          goto LABEL_43;
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v24, v20);
      }
      else
      {
        if ( (v24 & 0x800) == 0 )
        {
          v25 = ((v24 & 0x40) != 0 ? 16 : 32) | 8;
          if ( (v24 & 0x80u) == 0LL )
            v25 = (v24 & 0x40) != 0 ? 16 : 32;
          CInputGlobals::UpdateInputGlobals(
            gpInputGlobals,
            *((_QWORD *)v17 + 10),
            3LL,
            *((unsigned __int16 *)v17 + 14),
            0,
            v25);
        }
        CMouseProcessor::CMouseRawInput::Initialize(
          (CMouseProcessor *)((char *)this + 3464),
          (const struct CMouseProcessor::CMouseEvent *)&v37);
        v26 = 0;
        v27 = &off_1C0246000;
        do
        {
          if ( !*v27 || (*v27)((const struct CMouseProcessor::CMouseEvent *)&v37) )
            ((void (__fastcall *)(CMouseProcessor *, void ***))v27[1])(this, &v37);
          ++v26;
          v27 += 2;
        }
        while ( v26 < 3 );
        if ( IsMouseIVEnabled() && isRootPartition() )
          CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
            (CMouseProcessor *)((char *)this + 3904),
            (const struct CMouseProcessor::CMouseEvent *)&v37);
      }
      v17 = v38;
LABEL_43:
      v28 = (void (*)(void))*((_QWORD *)v17 + 20);
      if ( v28 )
        v28();
      goto LABEL_45;
    }
LABEL_46:
    if ( IsMouseIVEnabled() && isRootPartition() )
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
  }
  EtwTraceStopProcessQueuedMouseEvents();
  UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v40);
}

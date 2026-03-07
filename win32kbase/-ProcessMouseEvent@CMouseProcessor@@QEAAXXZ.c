void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v5; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rax
  struct tagTHREADINFO **v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v15; // rbx
  int v16; // r8d
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rdx
  struct tagTHREADINFO *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v23; // rbx
  CMouseProcessor::RawMouseEvent *v24; // rbx
  __int64 v25; // rsi
  unsigned __int64 v26; // r15
  _BYTE *v27; // rsi
  CMouseProcessor *v28; // rcx
  _BYTE *v29; // rbx
  __int64 v30; // rdx
  int v31; // eax
  _BOOL8 v32; // r8
  int v33; // edx
  __int64 v34; // r8
  int v35; // edx
  __int128 v36; // xmm0
  int v37; // ecx
  unsigned int v38; // r14d
  bool (__fastcall **v39)(const struct CMouseProcessor::CMouseEvent *); // rbx
  void (*v40)(void); // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // ecx
  int v48; // eax
  __int16 v49; // ax
  _BYTE *v50; // rcx
  __int64 v51; // [rsp+28h] [rbp-E0h]
  void **v52; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *v53; // [rsp+78h] [rbp-90h]
  int v54; // [rsp+80h] [rbp-88h]
  int v55; // [rsp+88h] [rbp-80h] BYREF
  int v56; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v57; // [rsp+90h] [rbp-78h] BYREF
  int v58; // [rsp+94h] [rbp-74h] BYREF
  __int64 v59; // [rsp+98h] [rbp-70h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v63[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-40h] BYREF
  int v65; // [rsp+D0h] [rbp-38h]
  _OWORD v66[2]; // [rsp+D8h] [rbp-30h]
  _BYTE v67[2688]; // [rsp+F8h] [rbp-10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v59,
    "ProcessMouse",
    0LL);
  EtwTraceStartProcessQueuedMouseEvents();
  v3 = 0x200000010000000LL;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v5 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & v3) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (v3 & qword_1C02C4050) != 0
    && (v3 & qword_1C02C4058) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, Reserved, v3, v5, v51);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = SGDGetUserSessionState(v2, Reserved, v3, v5);
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v7 + 8));
  if ( !v8 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_64:
    gptiCurrent = 0LL;
    goto LABEL_23;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v13 = PsGetCurrentThreadWin32Thread(v10, v9, v11, v12, v51);
    if ( v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v15, 0);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
      *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v16,
          v15,
          1000000 * v15 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v15 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v16,
            v15,
            1000 * v15 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v17 = *v8;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_64;
  gptiCurrent = v17;
  if ( v17 )
  {
    *((_DWORD *)v17 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v19 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v23 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v45 = *v23;
              v23[2] = 0LL;
              if ( !*(_DWORD *)(v45 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v23);
            }
          }
        }
      }
    }
  }
LABEL_23:
  if ( this == (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor((__int64)v19, v18, v20, v21) )
  {
    memset(v67, 0, sizeof(v67));
    v24 = (CMouseProcessor::RawMouseEvent *)v67;
    v25 = 16LL;
    do
    {
      CMouseProcessor::RawMouseEvent::RawMouseEvent(v24);
      v24 = (CMouseProcessor::RawMouseEvent *)((char *)v24 + 168);
      --v25;
    }
    while ( v25 );
    v26 = CMouseProcessor::DequeueMouseEvents(this, (struct CMouseProcessor::RawMouseEvent *)v67);
    if ( v26 )
    {
      v27 = &v67[56];
      while ( 1 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v63,
          "ProcessMouseEvent",
          (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v59);
        if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
        {
          v46 = InputTraceLogging::OriginIdToString(*((unsigned int *)v27 + 13));
          v47 = *((_DWORD *)v27 + 12);
          v60 = v46;
          v61 = (__int64)InputTraceLogging::DeviceTypeToString(v47);
          v55 = *((unsigned __int16 *)v27 - 13);
          v56 = *((unsigned __int16 *)v27 - 14);
          v57 = *(_DWORD *)v27;
          v58 = *((_DWORD *)v27 - 1);
          v62 = *((_QWORD *)v27 + 4);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
            (int)&dword_1C02CA7E0,
            (int)&dword_1C029DE3C,
            (__int64)&v62,
            (__int64)&v58,
            (__int64)&v57,
            (__int64)&v56,
            (__int64)&v55,
            (__int64)&v61,
            (__int64)&v60);
        }
        v29 = v27 - 56;
        CMouseProcessor::ComputeUIPIForMouseEvent(v28, (struct CMouseProcessor::RawMouseEvent *)(v27 - 56));
        v53 = v27 - 56;
        v52 = &CMouseProcessor::CMouseEvent::`vftable';
        v54 = 0;
        if ( (v27[56] & 1) == 0 && *((_DWORD *)v27 + 13) != 1 )
        {
          v31 = *((_DWORD *)v27 + 21);
          v32 = *((_QWORD *)v27 + 13) != 0LL;
          v64 = *(_QWORD *)(v27 + 76);
          v65 = v31;
          if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v64, v30, v32) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
              || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v33) = 0;
            }
            LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v33,
                v34,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                6,
                15,
                (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
            InputTraceLogging::Mouse::DropInput(*((_QWORD *)v53 + 11), 10LL, v34);
            goto LABEL_46;
          }
          v29 = v53;
        }
        v35 = *((_DWORD *)v29 + 28);
        if ( (v35 & 0x8000) == 0 )
          break;
        if ( !*((_QWORD *)v29 + 20) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6720LL);
LABEL_43:
          v29 = v53;
        }
        v40 = (void (*)(void))*((_QWORD *)v29 + 20);
        if ( v40 )
          v40();
LABEL_46:
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v63);
        v27 += 168;
        if ( !--v26 )
          goto LABEL_47;
      }
      if ( (v35 & 0x800) == 0 )
      {
        v48 = ((v35 & 0x40) != 0 ? 16 : 32) | 8;
        if ( (v35 & 0x80u) == 0 )
          v48 = (v35 & 0x40) != 0 ? 16 : 32;
        CInputGlobals::UpdateInputGlobals(
          gpInputGlobals,
          *((_QWORD *)v29 + 10),
          3LL,
          *((unsigned __int16 *)v29 + 14),
          0,
          v48);
        v29 = v53;
      }
      *((_BYTE *)this + 3532) = 0;
      *(_QWORD *)&v66[0] = 0LL;
      *(_OWORD *)((char *)this + 3464) = 0LL;
      *((_QWORD *)this + 435) = 0LL;
      *((_DWORD *)this + 882) = 0;
      *(_OWORD *)((char *)v66 + 8) = 0LL;
      *((_QWORD *)this + 436) = 0LL;
      v36 = v66[0];
      *((_QWORD *)this + 437) = 0LL;
      *((_OWORD *)this + 219) = v36;
      *((_QWORD *)this + 440) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
      v37 = *((_DWORD *)v29 + 28);
      *((_BYTE *)this + 3533) = (v37 & 0x10) != 0;
      if ( (v37 & 0x10) == 0 )
      {
        *((_QWORD *)this + 437) = *((_QWORD *)v29 + 11);
        *((_QWORD *)this + 436) = *((_QWORD *)v29 + 10);
        *((_OWORD *)this + 219) = *(_OWORD *)v29;
        *((_QWORD *)this + 440) = *((_QWORD *)v29 + 2);
        *((_DWORD *)this + 869) = *((_DWORD *)v29 + 11);
        *((_DWORD *)this + 870) = *((_DWORD *)v29 + 12);
        *((_DWORD *)this + 868) = 0;
        *((_DWORD *)this + 871) = *((_DWORD *)v29 + 10);
        v49 = ((__int64 (__fastcall *)(void ***))*v52)(&v52);
        v50 = v53;
        *((_WORD *)this + 1734) = v49;
        *((_WORD *)this + 1735) = *((_WORD *)v50 + 15);
        *((_DWORD *)this + 868) = *((_DWORD *)v50 + 8);
        *((_WORD *)this + 1732) = *((_WORD *)this + 1767) & *((_WORD *)v50 + 18);
        if ( *((_DWORD *)this + 876) )
          *((_DWORD *)this + 882) |= 1u;
        if ( (*((_DWORD *)v50 + 28) & 0x20) != 0 )
          *((_DWORD *)this + 882) |= 2u;
      }
      v38 = 0;
      v39 = &off_1C0278E98;
      do
      {
        if ( !*v39 || (*v39)((const struct CMouseProcessor::CMouseEvent *)&v52) )
          ((void (__fastcall *)(CMouseProcessor *, void ***))v39[1])(this, &v52);
        ++v38;
        v39 += 2;
      }
      while ( v38 < 3 );
      if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
        CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
          (CMouseProcessor *)((char *)this + 3904),
          (const struct CMouseProcessor::CMouseEvent *)&v52);
      goto LABEL_43;
    }
LABEL_47:
    if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
  }
  EtwTraceStopProcessQueuedMouseEvents();
  UserSessionSwitchLeaveCrit(v42, v41, v43, v44);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v59);
}

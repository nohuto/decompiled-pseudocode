__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  void **v4; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v11; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v13; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v15; // rax
  struct tagTHREADINFO **v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v23; // rsi
  int v24; // r8d
  struct tagTHREADINFO *v25; // rsi
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+80h] [rbp+18h] BYREF
  char v36; // [rsp+88h] [rbp+20h] BYREF

  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 112LL))(this);
  v4 = (void **)((char *)this + 216);
  v5 = 0;
  while ( *v4 != a2 )
  {
    ++v5;
    v4 += 8;
    if ( v5 >= 0x12 )
      goto LABEL_68;
  }
  v6 = (unsigned __int64)v5 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)this + v6 + 168)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 501LL);
  if ( v5 != *(_DWORD *)((char *)this + v6 + 184) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 502LL);
  v7 = *(unsigned int *)((char *)this + v6 + 184);
  if ( (_DWORD)v7 == 18 )
  {
LABEL_68:
    v9 = -1073741823;
    goto LABEL_18;
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v36,
    "DispatcherObjectSignaled",
    0LL);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    v35 = InputTraceLogging::DispatcherHandleNameToString((unsigned int)v7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C02CA7E0,
      (__int64)&v35);
  }
  if ( (_DWORD)v7 != *((_DWORD *)&unk_1C0280A00 + 6 * v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2742LL);
  if ( !*((_DWORD *)&unk_1C0280A00 + 6 * v7 + 4) )
  {
    v11 = 0x200000010000000LL;
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved,
          v13 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & v11) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (v11 & qword_1C02C4050) != 0
      && (v11 & qword_1C02C4058) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, Reserved, v11, v13, v34);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v15 = SGDGetUserSessionState(v8, Reserved, v11, v13);
    v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v15 + 8));
    if ( v16 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v21 = PsGetCurrentThreadWin32Thread(v18, v17, v19, v20, v34);
        if ( v21 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v23 = PerformanceCounter.QuadPart - *(_QWORD *)(v21 + 8);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v23, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          *(LARGE_INTEGER *)(v21 + 8) = PerformanceCounter;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v24,
              v23,
              1000000 * v23 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v23 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(PerformanceCounter.QuadPart
                              - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v24,
                v23,
                1000 * v23 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          }
          *(_QWORD *)(v21 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v25 = *v16;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v25;
        if ( v25 )
        {
          *((_DWORD *)v25 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v28 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v33 = *v28;
                v28[2] = 0LL;
                if ( !*(_DWORD *)(v33 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*v28);
              }
            }
          }
        }
        goto LABEL_41;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_41:
    v9 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C0280A00 + 3 * v7 + 1))(this);
    UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
    goto LABEL_15;
  }
  v9 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C0280A00 + 3 * v7 + 1))(this);
LABEL_15:
  if ( v9 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2753LL);
  CRIMBase::SignalMarshalingCompleted(this, (unsigned int)v7);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v36);
LABEL_18:
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 120LL))(this);
  return (unsigned int)v9;
}

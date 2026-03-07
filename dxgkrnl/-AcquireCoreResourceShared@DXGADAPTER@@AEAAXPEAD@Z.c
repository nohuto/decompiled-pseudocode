void __fastcall DXGADAPTER::AcquireCoreResourceShared(DXGADAPTER *this, char *a2)
{
  struct DXGGLOBAL *Global; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  char v9; // si
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // esi
  __int64 v15; // r8
  struct DXGTHREAD *DxgThread; // rax
  bool v17; // zf
  __int64 v18; // rcx
  int FirstProfilerInterface; // eax
  int v20; // r9d
  __int64 v21; // [rsp+20h] [rbp-1E8h]
  _BYTE v22[16]; // [rsp+50h] [rbp-1B8h] BYREF
  _BYTE v23[400]; // [rsp+60h] [rbp-1A8h] BYREF
  struct DXGTHREAD *v24; // [rsp+210h] [rbp+8h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) )
  {
    WdLogSingleEntry1(1LL, 4049LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4049LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v5);
  v7 = *((_QWORD *)this + 29);
  v8 = CurrentProcess;
  if ( v7 )
  {
    if ( CurrentProcess )
    {
      if ( *((_DWORD *)Global + 530) )
      {
        if ( *((_BYTE *)Global + 304376) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGGLOBAL *)((char *)Global + 2128), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::AddProcessEntry((char *)Global + 2296, v7, a2, v8, FirstProfilerInterface);
          if ( v22[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 510LL);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 504LL);
  }
  v9 = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 104, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v20 = *((_DWORD *)this + 32);
      if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v20);
    }
    ExAcquirePushLockSharedEx((char *)this + 104, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 30);
  if ( *((_DWORD *)this + 40) == 1 )
  {
    DXGADAPTER::WakeUpAdapter(this);
    v9 = 1;
  }
  else
  {
    v12 = *((_QWORD *)this + 27);
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 64) + 4104LL));
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 30);
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( bTracingEnabled
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v21) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v13, this, v21);
  }
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v23, this, v9);
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 1u);
    DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v23);
  }
  *((_DWORD *)this + 1169) = 0;
  v14 = -1;
  v24 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v24) >= 0 )
  {
    DxgThread = v24;
    if ( v24 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v24 = DxgThread) != 0LL) )
      v14 = *((_DWORD *)DxgThread + 14);
  }
  v17 = bTracingEnabled == 0;
  *((_DWORD *)this + 1170) = v14;
  if ( !v17
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v21) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, this, v21);
  }
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 4104), 0xFFFFFFFF) == 1 )
      DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v18);
  }
}

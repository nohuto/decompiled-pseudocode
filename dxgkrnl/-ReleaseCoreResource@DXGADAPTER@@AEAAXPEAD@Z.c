void __fastcall DXGADAPTER::ReleaseCoreResource(PERESOURCE *this, char *a2)
{
  PERESOURCE v4; // rax
  struct DXGGLOBAL *Global; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // r8
  PERESOURCE v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  ADAPTER_RENDER *v12; // rcx
  int FirstProfilerInterface; // eax
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ExIsResourceAcquiredSharedLite(this[21]) )
  {
    WdLogSingleEntry1(1LL, 4263LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4263LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[23] )
  {
    WdLogSingleEntry1(1LL, 4264LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NULL == m_pWorkerThreadOfExclusiveOwner[0]",
      4264LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = this[366];
  if ( v4 && LOBYTE(v4[7].ActiveCount) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      WdLogSingleEntry1(1LL, 4272LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        4272LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = (ADAPTER_RENDER *)this[366];
    if ( *((_QWORD *)v12 + 93) )
    {
      LOBYTE(v11) = 1;
      ADAPTER_RENDER::ResumeScheduler(v12, v11, 0);
    }
    LOBYTE(this[366][7].ActiveCount) = 0;
  }
  Global = DXGGLOBAL::GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v6);
  v9 = this[29];
  v10 = CurrentProcess;
  if ( v9 )
  {
    if ( CurrentProcess )
    {
      if ( *((_DWORD *)Global + 530) )
      {
        if ( *((_BYTE *)Global + 304376) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGGLOBAL *)((char *)Global + 2128), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::RemoveProcessEntry((char *)Global + 2296, v9, a2, v10, FirstProfilerInterface);
          if ( v14[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 546LL);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 540LL);
  }
  if ( bTracingEnabled
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v8, this);
  }
  ExReleaseResourceLite(this[21]);
  KeLeaveCriticalRegion();
}

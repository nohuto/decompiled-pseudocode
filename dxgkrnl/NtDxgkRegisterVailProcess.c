__int64 __fastcall NtDxgkRegisterVailProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  struct DXGVAILOBJECT *v4; // rsi
  int NumStartedVirtualGpu; // r15d
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *Current; // r14
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // sf
  struct _KTHREAD **v14; // rdi
  struct DXGGLOBAL *Global; // rax
  _QWORD *v16; // rax
  _QWORD *i; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+50h] [rbp-78h] BYREF
  __int64 v29; // [rsp+58h] [rbp-70h]
  char v30; // [rsp+60h] [rbp-68h]
  _BYTE v31[24]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v32[24]; // [rsp+80h] [rbp-48h] BYREF
  __int128 v33; // [rsp+98h] [rbp-30h] BYREF

  v3 = (__int128 *)a1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2214;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2214);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2214);
  v4 = 0LL;
  NumStartedVirtualGpu = 0;
  if ( DXGVAILOBJECT::IsFeatureEnabled() )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v33 = *v3;
    Current = DXGPROCESS::GetCurrent(MmUserProbeAddress);
    if ( Current )
    {
      KeEnterCriticalRegion();
      v10 = -1073741275;
      v14 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v31,
        (struct _KTHREAD **)Global + 61);
      v16 = (_QWORD *)((char *)DXGGLOBAL::GetGlobal() + 1720);
      for ( i = (_QWORD *)*v16; i != v16; i = (_QWORD *)*i )
      {
        v18 = i[35] - v33;
        if ( !v18 )
          v18 = i[36] - *((_QWORD *)&v33 + 1);
        if ( !v18 )
        {
          v14 = (struct _KTHREAD **)(i - 1);
          break;
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
      if ( v14 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v32, v14 + 8);
        v4 = DXGVIRTUALMACHINE::ReferenceVailObject(v14);
        if ( v4 )
        {
          NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v14);
          v10 = 0;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      }
      if ( v10 >= 0 )
      {
        v23 = DxgkCompositionObject::AccessCheck(v4);
        v10 = v23;
        if ( v23 < 0 )
          WdLogSingleEntry1(3LL, v23);
        if ( v10 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v31);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
          DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v33, Current);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
          DXGPROCESS::SetVailObject(Current, v4);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v33);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
          *((_DWORD *)v4 + 34) = PsGetCurrentProcessSessionId(v25, v24, v26, v27);
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v10);
      }
      if ( !NumStartedVirtualGpu )
      {
        v10 = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = -1071775727LL;
      }
      if ( v4 )
        DxgkCompositionObject::Release(v4);
      KeLeaveCriticalRegion();
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( !v30 )
        return (unsigned int)v10;
      v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    else
    {
      v10 = -1073741786;
      WdLogSingleEntry1(2LL, -1073741786LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context. Returning 0x%I64x",
        -1073741786LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( !v30 )
        return (unsigned int)v10;
      LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    if ( v13 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v28);
    return (unsigned int)v10;
  }
  WdLogSingleEntry1(3LL, 782LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v28);
  }
  return 3221225659LL;
}

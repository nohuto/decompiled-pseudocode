__int64 __fastcall DxgkConnectDoorbellInternal(struct DXGHWQUEUE **a1, __int64 a2, __int64 a3)
{
  struct DXGHWQUEUE **v3; // rbx
  struct DXGHWQUEUE *v4; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  __int64 v12; // rbx
  struct DXGHWQUEUE *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // [rsp+20h] [rbp-168h]
  int v28; // [rsp+50h] [rbp-138h] BYREF
  __int64 v29; // [rsp+58h] [rbp-130h]
  char v30; // [rsp+60h] [rbp-128h]
  struct DXGHWQUEUE *v31; // [rsp+68h] [rbp-120h] BYREF
  int v32; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v33[24]; // [rsp+78h] [rbp-110h] BYREF
  _BYTE v34[224]; // [rsp+90h] [rbp-F8h] BYREF

  v3 = a1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2222;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2222);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2222);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct DXGHWQUEUE **)MmUserProbeAddress;
  v4 = *v3;
  v31 = v4;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v27 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v27,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  if ( HIDWORD(v31) )
  {
    v12 = HIDWORD(v31);
    WdLogSingleEntry2(2LL, HIDWORD(v31), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Reserved bits in Flags (0x%I64x) should not be set, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  v31 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v33, (unsigned int)v4, Current, &v31, 0);
  v13 = v31;
  if ( !v31 || !*((_BYTE *)v31 + 140) )
    WdLogSingleEntry2(3LL, (unsigned int)v4, -1073741811LL);
  v32 = 0;
  DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v34, v13, &v32);
  if ( v32 >= 0 )
  {
    v19 = *((_QWORD *)v13 + 18);
    if ( !v19 )
    {
      WdLogSingleEntry2(3LL, v13, -1073741811LL);
      DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v34);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v33);
LABEL_9:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 )
      {
        v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        goto LABEL_32;
      }
      return 3221225485LL;
    }
    v20 = **(_QWORD **)(v19 + 120);
    if ( (_DWORD)v20 && (v21 = v20 - 1) != 0 )
    {
      if ( v21 == 2 )
      {
        WdLogSingleEntry3(3LL, *((_QWORD *)v31 + 18), (int)**(_QWORD **)(*((_QWORD *)v31 + 18) + 120LL), -1073741811LL);
        DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v34);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( v30 )
        {
          LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
          v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_32:
          if ( v11 )
            McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v28);
        }
        return 3221225485LL;
      }
      v22 = DXGDOORBELL::Connect(*((DXGDOORBELL **)v31 + 18), v14, v15);
      DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v34);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v33);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 )
      {
        LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v28);
      }
      return v22;
    }
    else
    {
      WdLogSingleEntry2(3LL, *((_QWORD *)v31 + 18), 0LL);
      DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v34);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v33);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v28);
      return 0LL;
    }
  }
  else
  {
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v34);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v28);
    }
    return (unsigned int)v32;
  }
}

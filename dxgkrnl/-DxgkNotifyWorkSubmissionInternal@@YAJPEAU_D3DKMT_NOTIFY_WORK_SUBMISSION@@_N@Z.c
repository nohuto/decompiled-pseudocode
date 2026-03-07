__int64 __fastcall DxgkNotifyWorkSubmissionInternal(struct DXGHWQUEUE **a1, __int64 a2, __int64 a3)
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
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-178h]
  int v21; // [rsp+50h] [rbp-148h] BYREF
  __int64 v22; // [rsp+58h] [rbp-140h]
  char v23; // [rsp+60h] [rbp-138h]
  struct DXGHWQUEUE *v24; // [rsp+68h] [rbp-130h] BYREF
  int v25; // [rsp+70h] [rbp-128h] BYREF
  _BYTE v26[16]; // [rsp+78h] [rbp-120h] BYREF
  _QWORD v27[3]; // [rsp+88h] [rbp-110h] BYREF
  _BYTE v28[224]; // [rsp+A0h] [rbp-F8h] BYREF

  v3 = a1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2223;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2223);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2223);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct DXGHWQUEUE **)MmUserProbeAddress;
  v4 = *v3;
  v24 = v4;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v20 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v20,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  if ( HIDWORD(v24) )
  {
    v12 = HIDWORD(v24);
    WdLogSingleEntry2(2LL, HIDWORD(v24), -1073741811LL);
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
  v24 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v26, (unsigned int)v4, Current, &v24, 0);
  v13 = v24;
  if ( !v24 || !*((_BYTE *)v24 + 140) )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v4, -1073741811LL);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_28:
      if ( v11 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v21);
    }
    return 3221225485LL;
  }
  v25 = 0;
  DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v28, v24, &v25);
  v15 = v25;
  if ( v25 >= 0 )
  {
    v19 = *((_QWORD *)v13 + 18);
    if ( v19 )
    {
      if ( (unsigned int)**(_QWORD **)(v19 + 120) == 1 )
      {
        v27[1] = 0LL;
        v27[0] = *((_QWORD *)v24 + 4);
        v15 = ADAPTER_RENDER::DdiNotifyWorkSubmission(
                *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 16LL),
                (struct _DXGKARG_NOTIFYWORKSUBMISSION *)v27,
                v14);
        goto LABEL_16;
      }
      WdLogSingleEntry2(3LL, *((_QWORD *)v24 + 18), -1073741811LL);
    }
    else
    {
      WdLogSingleEntry2(3LL, v13, -1073741811LL);
    }
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v28);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v26);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_28;
    }
    return 3221225485LL;
  }
LABEL_16:
  DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v28);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v21);
  }
  return v15;
}

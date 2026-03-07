__int64 __fastcall DxgkDestroyDoorbellInternal(struct _D3DKMT_DESTROY_DOORBELL *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_DESTROY_DOORBELL *v3; // rbx
  __int64 v4; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // sf
  struct DXGHWQUEUE *v14; // rsi
  DXGDOORBELL *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rdx
  int v20; // [rsp+50h] [rbp-128h] BYREF
  __int64 v21; // [rsp+58h] [rbp-120h]
  char v22; // [rsp+60h] [rbp-118h]
  struct DXGHWQUEUE *v23; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v25[224]; // [rsp+80h] [rbp-F8h] BYREF

  v3 = a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2221;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2221);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2221);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_DESTROY_DOORBELL *)MmUserProbeAddress;
  v4 = *(unsigned int *)v3;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  v23 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v24, v4, Current, &v23, 0);
  v14 = v23;
  if ( !v23 || !*((_BYTE *)v23 + 140) )
  {
    v19 = v4;
    v8 = -1073741811;
    WdLogSingleEntry2(3LL, v19, -1073741811LL);
LABEL_22:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_24:
      if ( v13 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v20);
    }
    return v8;
  }
  LODWORD(v23) = 0;
  DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v25, v14, (int *)&v23);
  v8 = (unsigned int)v23;
  if ( (int)v23 < 0 )
  {
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v25);
    goto LABEL_22;
  }
  v15 = (DXGDOORBELL *)*((_QWORD *)v14 + 18);
  if ( !v15 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v25);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v24);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_24;
    }
    return v8;
  }
  DXGDOORBELL::`scalar deleting destructor'(v15);
  *((_QWORD *)v14 + 18) = 0LL;
  DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v25);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v20);
  return 0LL;
}

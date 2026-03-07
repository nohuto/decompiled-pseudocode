__int64 __fastcall DxgkGetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  char v9; // r14
  _QWORD *v10; // rax
  DXGCONTEXT *v11; // rsi
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // r8
  int ContextSchedulingPriority; // eax
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+50h] [rbp-108h] BYREF
  __int64 v24; // [rsp+58h] [rbp-100h]
  char v25; // [rsp+60h] [rbp-F8h]
  unsigned int v26[2]; // [rsp+68h] [rbp-F0h] BYREF
  DXGCONTEXT *v27[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v29[160]; // [rsp+90h] [rbp-C8h] BYREF

  v3 = (_QWORD *)a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2085;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2085);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2085);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_16;
    }
    return 3221225485LL;
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v9 = 1;
    v10 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v10 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v26 = *v10;
  }
  else
  {
    v9 = 0;
    *(_QWORD *)v26 = *v3;
  }
  v27[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28, v26[0], Current, v27, 0, 1);
  v11 = v27[0];
  if ( !v27[0] )
  {
    WdLogSingleEntry2(3LL, v26[0], -1073741811LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_16:
      if ( v8 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v23);
    }
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)v27,
    *((struct DXGDEVICE **)v27[0] + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, *((_QWORD *)v11 + 2), 0, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29, 0LL);
  if ( v14 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v23);
    return (unsigned int)v14;
  }
  if ( *((_BYTE *)v11 + 442) )
  {
    ContextSchedulingPriority = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
                                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL)
                                                                           + 16LL)
                                                               + 4472LL),
                                  Current,
                                  v11,
                                  (int *)&v26[1],
                                  1u);
    v18 = ContextSchedulingPriority;
    if ( ContextSchedulingPriority < 0 )
    {
      WdLogSingleEntry1(3LL, ContextSchedulingPriority);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v23);
      return v18;
    }
  }
  else
  {
    v26[1] = DXGCONTEXT::GetInProcessSchedulingPriority(v11);
  }
  if ( v9 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = *(_QWORD *)v26;
  }
  else
  {
    *v3 = *(_QWORD *)v26;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v23);
  return 0LL;
}

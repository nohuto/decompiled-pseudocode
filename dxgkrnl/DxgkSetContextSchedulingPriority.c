__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  bool v4; // si
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // sf
  __int64 v11; // rbx
  DXGCONTEXT *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  char v20; // r12
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // r9
  int v24; // eax
  unsigned int v25; // r15d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int v29; // eax
  int v30; // [rsp+50h] [rbp-108h] BYREF
  __int64 v31; // [rsp+58h] [rbp-100h]
  char v32; // [rsp+60h] [rbp-F8h]
  int v33[2]; // [rsp+68h] [rbp-F0h]
  DXGCONTEXT *v34[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v35[16]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v36[160]; // [rsp+90h] [rbp-C8h] BYREF

  v3 = (__int64 *)a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2029);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2029);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v7 = -1073741811;
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
    goto LABEL_7;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v11 = *v3;
  }
  else
  {
    v11 = *v3;
  }
  *(_QWORD *)v33 = v11;
  v34[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35, v11, Current, v34, 0, 1);
  v12 = v34[0];
  if ( !v34[0] )
  {
    v13 = (unsigned int)v11;
    v7 = -1073741811;
    WdLogSingleEntry2(3LL, v13, -1073741811LL);
LABEL_16:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_29;
    }
    return v7;
  }
  v14 = v33[1];
  if ( *((_BYTE *)v34[0] + 442) )
  {
    v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34[0] + 2) + 16LL) + 16LL) + 4472LL),
            Current,
            v34[0],
            v33[1],
            0);
    v16 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(3LL, v15);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v30);
      return v16;
    }
  }
  v20 = 0;
  v21 = 0;
  if ( v14 >= 0 && (v14 & 0x40000000) != 0 )
  {
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 16LL)) )
    {
      v7 = -1073741637;
      WdLogSingleEntry1(3LL, -1073741637LL);
      goto LABEL_27;
    }
    if ( (v14 & 0x3FFFFFE0) != 0 )
    {
      v7 = -1073741811;
      WdLogSingleEntry1(3LL, -1073741811LL);
      goto LABEL_16;
    }
    v21 = v14 & 0x1F;
    if ( v21 > 0x1E )
    {
      v22 = v14 & 0x1F;
      v7 = -1073741811;
      WdLogSingleEntry2(3LL, v22, -1073741811LL);
LABEL_27:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 )
      {
        LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_29:
        if ( v10 )
          McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v30);
      }
      return v7;
    }
    v20 = 1;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v34,
    *((struct DXGDEVICE **)v12 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, *((_QWORD *)v12 + 2), 0, v23, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
  v25 = v24;
  if ( v24 >= 0 )
  {
    if ( v20 )
    {
      if ( *((_BYTE *)v12 + 442) )
        goto LABEL_39;
      v28 = *((_QWORD *)v12 + 2);
      if ( (*((_DWORD *)v12 + 101) & 0x10) != 0 )
        v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 736LL)
                                                                            + 8LL)
                                                                + 976LL))(
                *((_QWORD *)v12 + 35),
                v21,
                0LL);
      else
        v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 736LL)
                                                                            + 8LL)
                                                                + 968LL))(
                *((_QWORD *)v12 + 32),
                v21,
                0LL);
    }
    else
    {
      v29 = DXGCONTEXT::SetApiSchedulingPriority(v12, v14);
    }
    v25 = v29;
    goto LABEL_39;
  }
  WdLogSingleEntry2(3LL, *((_QWORD *)v12 + 2), v24);
LABEL_39:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
  if ( v34[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v30);
  return v25;
}

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r14
  struct DXGADAPTER *v6; // rdi
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  ADAPTER_DISPLAY *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // [rsp+50h] [rbp-108h] BYREF
  int v21; // [rsp+58h] [rbp-100h] BYREF
  __int64 v22; // [rsp+60h] [rbp-F8h]
  char v23; // [rsp+68h] [rbp-F0h]
  struct DXGADAPTER *v24; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGDEVICE *v25; // [rsp+78h] [rbp-E0h] BYREF
  DXGADAPTER *v26; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v27[4]; // [rsp+90h] [rbp-C8h]
  void *v28[2]; // [rsp+A0h] [rbp-B8h]
  _BYTE v29[144]; // [rsp+B0h] [rbp-A8h] BYREF

  v3 = (_OWORD *)a1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2114;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2114);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2114);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 9591LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 9591LL, 0LL, 0LL, 0LL, 0LL);
LABEL_53:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v27 = *v3;
  *(_OWORD *)v28 = v3[1];
  v25 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, v27[1], Current, &v25);
  if ( !v25 )
  {
    WdLogSingleEntry1(3LL, v27[1]);
LABEL_50:
    if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
    goto LABEL_53;
  }
  v24 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v26, v27[0], Current, &v24, 1);
  v6 = v24;
  if ( !v24 )
  {
    WdLogSingleEntry1(3LL, v27[0]);
    goto LABEL_48;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v24, 0LL);
  v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL);
  if ( v7 >= 0 )
  {
    if ( *((_QWORD *)v6 + 366) || (*((_DWORD *)v6 + 109) & 0x100) == 0 )
    {
      WdLogSingleEntry1(3LL, v27[0]);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
LABEL_48:
      if ( v26 )
        DXGADAPTER::ReleaseReference(v26);
      goto LABEL_50;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v6 + 365), v25, v27[2]) )
    {
      v13 = (ADAPTER_DISPLAY *)*((_QWORD *)v6 + 365);
      if ( LODWORD(v28[1]) )
        v14 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v13, v27[2]);
      else
        v14 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(v13, v27[2], v28[0]);
      v15 = v14;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
      if ( v26 )
        DXGADAPTER::ReleaseReference(v26);
      if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
      if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v21);
      return v15;
    }
    else
    {
      WdLogSingleEntry3(3LL, v25, v6, v27[2]);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
      if ( v26 )
        DXGADAPTER::ReleaseReference(v26);
      if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
      if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v21);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    if ( v26 )
      DXGADAPTER::ReleaseReference(v26);
    if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v21);
    return (unsigned int)v7;
  }
}

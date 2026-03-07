__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r15
  bool v4; // di
  struct _KTHREAD **Current; // r13
  _D3DKMT_SETQUEUEDLIMIT *v6; // r14
  _D3DKMT_SETQUEUEDLIMIT *v7; // rax
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // r9
  int v10; // r12d
  D3DKMT_QUEUEDLIMIT_TYPE Type; // eax
  unsigned int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v17; // sf
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // [rsp+50h] [rbp-118h]
  struct DXGDEVICE *v21; // [rsp+58h] [rbp-110h] BYREF
  int v22; // [rsp+60h] [rbp-108h] BYREF
  __int64 v23; // [rsp+68h] [rbp-100h]
  char v24; // [rsp+70h] [rbp-F8h]
  struct DXGDEVICE *v25; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v26[2]; // [rsp+80h] [rbp-E8h] BYREF
  _D3DKMT_SETQUEUEDLIMIT v27; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v28[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2035);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2035);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v20 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v13 = -1073741811;
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
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v13;
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_49:
    if ( v17 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v22);
    return v13;
  }
  v27 = 0LL;
  v6 = &v27;
  if ( v4 )
  {
    v7 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v7 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v27 = *v7;
  }
  else
  {
    v6 = v3;
  }
  v25 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v6->hDevice, Current, &v25);
  v8 = v25;
  if ( !v25 )
  {
    v13 = -1073741811;
    WdLogSingleEntry2(2LL, v6->hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v6->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v13;
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_49;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v8, 2, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
  if ( v10 >= 0 )
  {
    if ( (*((_BYTE *)v8 + 1901) & 1) != 0 )
    {
      v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 4472LL),
              (struct DXGPROCESS *)Current,
              v8,
              v6);
    }
    else
    {
      Type = v6->Type;
      if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
      {
        v12 = DXGDEVICE::SetQueuedPresentLimit(v8, v6->QueuedPresentLimit);
      }
      else
      {
        if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
        {
          v13 = -1073741811;
LABEL_14:
          if ( (v13 & 0x80000000) == 0 && v20 )
          {
            if ( (unsigned __int64)v3 >= MmUserProbeAddress )
              v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
            *v3 = *v6;
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
          if ( v26[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
          if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
          goto LABEL_24;
        }
        v12 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 736LL) + 8LL) + 176LL))(
                *((_QWORD *)v8 + 100),
                &v6->8);
      }
    }
    v13 = v12;
    goto LABEL_14;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
  if ( v26[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
  return (unsigned int)v10;
}

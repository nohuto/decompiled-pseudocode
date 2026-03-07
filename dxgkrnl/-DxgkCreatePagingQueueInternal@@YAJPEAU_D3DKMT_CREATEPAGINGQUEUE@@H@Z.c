__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct _D3DKMT_CREATEPAGINGQUEUE *v4; // r15
  ULONG64 v5; // rcx
  __int128 *v6; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v7; // rsi
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v9; // r14
  __int64 v10; // r9
  int v11; // r12d
  __int64 PhysicalAdapterIndex; // rdx
  int v13; // r14d
  struct DXGPAGINGQUEUE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // [rsp+50h] [rbp-148h] BYREF
  int v23; // [rsp+58h] [rbp-140h] BYREF
  __int64 v24; // [rsp+60h] [rbp-138h]
  char v25; // [rsp+68h] [rbp-130h]
  struct _D3DKMT_CREATEPAGINGQUEUE *v26; // [rsp+70h] [rbp-128h]
  _QWORD v27[2]; // [rsp+78h] [rbp-120h] BYREF
  struct _D3DKMT_CREATEPAGINGQUEUE *v28; // [rsp+88h] [rbp-110h]
  struct DXGDEVICE *v29; // [rsp+90h] [rbp-108h] BYREF
  struct DXGPAGINGQUEUE *v30; // [rsp+98h] [rbp-100h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-E8h]
  _BYTE v33[160]; // [rsp+C0h] [rbp-D8h] BYREF

  v4 = a1;
  v26 = a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2117;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2117);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2117);
  v31 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    v6 = (__int128 *)v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v6 = (__int128 *)MmUserProbeAddress;
    v31 = *v6;
    v32 = v6[1];
    v7 = (struct _D3DKMT_CREATEPAGINGQUEUE *)&v31;
    v28 = (struct _D3DKMT_CREATEPAGINGQUEUE *)&v31;
  }
  else
  {
    v7 = v4;
    v28 = v4;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  v29 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, v7->hDevice, Current, &v29);
  v9 = v29;
  if ( !v29 )
  {
    WdLogSingleEntry2(2LL, v7->hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v7->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_37:
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v9, 0, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL);
  if ( v11 >= 0 )
  {
    PhysicalAdapterIndex = v7->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 288LL) )
    {
      v30 = 0LL;
      v13 = DXGDEVICE::CreatePagingQueue(v9, PhysicalAdapterIndex, v7->Priority, &v30);
      if ( v13 < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
        if ( v27[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
        if ( !v22 )
          goto LABEL_20;
      }
      else
      {
        v14 = v30;
        v7->hSyncObject = *(_DWORD *)(*((_QWORD *)v30 + 5) + 40LL);
        v7->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v14 + 5) + 56LL);
        v7->hPagingQueue = *((_DWORD *)v14 + 6);
        if ( a2 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
          *(_OWORD *)&v4->hDevice = *(_OWORD *)&v7->hDevice;
          *(_OWORD *)&v4->FenceValueCPUVirtualAddress = *(_OWORD *)&v7->FenceValueCPUVirtualAddress;
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
        if ( v27[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
        if ( !v22 )
          goto LABEL_20;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v23);
      }
      return (unsigned int)v13;
    }
    WdLogSingleEntry1(3LL, PhysicalAdapterIndex);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    goto LABEL_37;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
  if ( v27[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v23);
  return (unsigned int)v11;
}

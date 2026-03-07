__int64 __fastcall DxgkCreateSynchronizationObjectImpl(
        ULONG64 a1,
        unsigned int a2,
        __int64 a3,
        struct DXGADAPTER *a4,
        UINT64 a5)
{
  unsigned int v6; // ebx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v9; // r8
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v10; // rax
  UINT64 FenceValue; // rax
  __int64 hDevice; // rsi
  __int64 v13; // r9
  volatile signed __int64 *v14; // r12
  char *v15; // r12
  __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r8
  _DWORD *v20; // rdx
  ULONG64 v21; // r13
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // ebx
  _OWORD *v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // r9
  struct DXGPROCESS *v26; // rbx
  char *v27; // r13
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  bool v41; // zf
  struct _KTHREAD **v42; // rax
  int v43; // [rsp+50h] [rbp-308h] BYREF
  __int64 v44; // [rsp+58h] [rbp-300h]
  char v45; // [rsp+60h] [rbp-2F8h]
  struct DXGDEVICE *v46; // [rsp+68h] [rbp-2F0h] BYREF
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v47; // [rsp+70h] [rbp-2E8h] BYREF
  struct DXGDEVICE *v48; // [rsp+78h] [rbp-2E0h] BYREF
  __int64 v49; // [rsp+80h] [rbp-2D8h] BYREF
  int v50; // [rsp+88h] [rbp-2D0h]
  struct DXGADAPTER *v51; // [rsp+90h] [rbp-2C8h] BYREF
  struct DXGDEVICE *v52; // [rsp+98h] [rbp-2C0h] BYREF
  int v53; // [rsp+A0h] [rbp-2B8h]
  struct DXGADAPTER *v54[2]; // [rsp+A8h] [rbp-2B0h] BYREF
  struct DXGSYNCOBJECT *v55; // [rsp+B8h] [rbp-2A0h] BYREF
  struct DXGPROCESS *v56; // [rsp+C0h] [rbp-298h]
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v57; // [rsp+D0h] [rbp-288h] BYREF
  __int64 v58; // [rsp+130h] [rbp-228h] BYREF
  DXGADAPTER *v59; // [rsp+138h] [rbp-220h] BYREF
  _BYTE v60[144]; // [rsp+150h] [rbp-208h] BYREF
  _BYTE v61[160]; // [rsp+1E0h] [rbp-178h] BYREF
  _BYTE v62[144]; // [rsp+280h] [rbp-D8h] BYREF
  unsigned int v63; // [rsp+368h] [rbp+10h]

  v63 = a2;
  v51 = a4;
  v50 = a3;
  v6 = a2;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2041);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2041);
  Current = DXGPROCESS::GetCurrent();
  v9 = (struct _KTHREAD **)Current;
  v56 = Current;
  if ( !Current )
  {
    v17 = -1073741811;
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
    goto LABEL_69;
  }
  v47.hSyncObject = *((_DWORD *)Current + 106) & 0x180;
  if ( v50 )
  {
    v10 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v10 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v57 = *v10;
    if ( (v6 & 0x7FFFFFFF) == 1 && (v57.Info.Flags.Value & 0x80000000) != 0 )
    {
      v6 = v6 & 0x80000000 | 5;
      v63 = v6;
    }
  }
  else
  {
    v57 = *(_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
  }
  v57.hSyncObject = 0;
  if ( (v57.Info.Flags.Value & 0x7FFFFC00) != 0 )
  {
    v17 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    goto LABEL_69;
  }
  if ( ((v57.Info.Flags.Value >> 1) & 1) != 0 && (*(_BYTE *)&v57.Info.Flags.0 & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    WdLogSingleEntry1(3LL, 419LL);
    goto LABEL_106;
  }
  if ( (unsigned int)(v57.Info.Type - 5) > 1 )
  {
    if ( (*(_BYTE *)&v57.Info.Flags.0 & 0x80) != 0 )
    {
      WdLogSingleEntry1(3LL, 445LL);
      goto LABEL_106;
    }
  }
  else
  {
    if ( a4 )
    {
      WdLogSingleEntry1(3LL, 428LL);
      goto LABEL_106;
    }
    if ( (*(_BYTE *)&v57.Info.Flags.0 & 1) != 0 && ((v57.Info.Flags.Value >> 1) & 1) == 0 )
    {
      WdLogSingleEntry1(3LL, 433LL);
      goto LABEL_106;
    }
    if ( (*(_BYTE *)&v57.Info.Flags.0 & 0x10) != 0 && (*(_BYTE *)&v57.Info.Flags.0 & 0x20) != 0 )
    {
      WdLogSingleEntry1(3LL, 439LL);
LABEL_106:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v43);
      return (unsigned int)-1073741811;
    }
  }
  FenceValue = v57.Info.Fence.FenceValue;
  if ( a5 )
    FenceValue = a5;
  v57.Info.Fence.FenceValue = FenceValue;
  v48 = 0LL;
  hDevice = v57.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, v57.hDevice, v9, &v48);
  if ( !v48 && (v50 || (_DWORD)hDevice) )
  {
    v37 = hDevice;
    v17 = -1073741811;
    WdLogSingleEntry2(2LL, v37, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v37,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_66;
  }
  v55 = 0LL;
  v58 = 0LL;
  v14 = 0LL;
  v54[0] = 0LL;
  v52 = v48;
  v53 = 0;
  if ( v51 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v51, 0LL);
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62, 0LL);
    if ( v17 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      v41 = v48 == 0LL;
LABEL_123:
      if ( !v41 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
      DXGADAPTER_REFERENCE::Assign(v54, 0LL);
LABEL_66:
      if ( v46 )
        goto LABEL_67;
      goto LABEL_69;
    }
    LOBYTE(v40) = 1;
    v17 = CreateSynchronizationObjectInternal(v48, v40, *((_QWORD *)v51 + 366), &v57, v6, 0, &v55, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
    goto LABEL_26;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v48, 0, v13, 0);
  v15 = (char *)v48 + 16;
  v51 = (struct DXGDEVICE *)((char *)v48 + 16);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v60,
    *(struct DXGADAPTER *const *)(*((_QWORD *)v48 + 2) + 16LL),
    0LL);
  if ( (unsigned int)(v57.Info.Type - 5) <= 1 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61, 0LL);
    if ( v17 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
LABEL_122:
      v41 = v52 == 0LL;
      goto LABEL_123;
    }
    v18 = *(_QWORD *)(*(_QWORD *)v15 + 16LL);
    if ( *(int *)(v18 + 2552) < 0x2000 && !*(_BYTE *)(v18 + 2852) )
    {
      WdLogSingleEntry1(3LL, 499LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
      if ( v52 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
      DXGADAPTER_REFERENCE::Assign(v54, 0LL);
      if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
      goto LABEL_106;
    }
    goto LABEL_23;
  }
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60, 0LL);
  if ( v17 >= 0 )
  {
LABEL_23:
    v14 = *(volatile signed __int64 **)(*(_QWORD *)v15 + 16LL);
    v54[0] = (struct DXGADAPTER *)v14;
    if ( v14 )
    {
      _InterlockedIncrement64(v14 + 3);
      v54[1] = (struct DXGADAPTER *)-1LL;
      v6 = v63;
      v14 = (volatile signed __int64 *)v54[0];
    }
    v49 = 0LL;
    LOBYTE(v16) = 1;
    v17 = CreateSynchronizationObjectInternal(v48, v16, *(_QWORD *)v51, &v57, v6, 0, &v55, &v49, &v58);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
LABEL_26:
    if ( v17 >= 0 )
    {
      if ( v50 )
      {
        v20 = (_DWORD *)(a1 + 88);
        if ( a1 + 88 >= MmUserProbeAddress )
          v20 = (_DWORD *)MmUserProbeAddress;
        *v20 = v57.hSyncObject;
        if ( (*(_BYTE *)&v57.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v57.Info.Flags.0 & 2) == 0 || v47.hSyncObject) )
        {
          v24 = (_DWORD *)(a1 + 80);
          if ( a1 + 80 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = v57.Info.SharedHandle;
        }
        v21 = a1 + 16;
        Type = v57.Info.Type;
        if ( v57.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          v23 = (_OWORD *)v21;
          if ( v21 >= MmUserProbeAddress )
            v23 = (_OWORD *)MmUserProbeAddress;
          *v23 = *(_OWORD *)&v57.Info.SynchronizationMutex.InitialState;
          v23[1] = *(_OWORD *)&v57.Info.Reserved.Reserved[2];
        }
        if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          if ( v21 >= MmUserProbeAddress )
            v21 = MmUserProbeAddress;
          *(_OWORD *)v21 = *(_OWORD *)&v57.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(v21 + 16) = *(_OWORD *)&v57.Info.Reserved.Reserved[2];
          *(_QWORD *)(v21 + 32) = v57.Info.Reserved.Reserved[4];
        }
      }
      else
      {
        *(_DWORD *)(a1 + 88) = v57.hSyncObject;
        if ( (*(_BYTE *)&v57.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v57.Info.Flags.0 & 2) == 0 || v47.hSyncObject) )
          *(_DWORD *)(a1 + 80) = v57.Info.SharedHandle;
        Type = v57.Info.Type;
        v35 = *(_OWORD *)&v57.Info.SynchronizationMutex.InitialState;
        v36 = *(_OWORD *)&v57.Info.Reserved.Reserved[2];
        if ( v57.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v57.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(a1 + 32) = v36;
        }
        if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          *(_OWORD *)(a1 + 16) = v35;
          *(_OWORD *)(a1 + 32) = v36;
          *(_QWORD *)(a1 + 48) = v57.Info.Reserved.Reserved[4];
        }
      }
      if ( bTracingEnabled )
      {
        v25 = v58 ? *(_QWORD *)(v58 + 32) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventOpenSyncObject,
            v19,
            v25,
            v57.hSyncObject,
            v48);
      }
      if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        v51 = 0LL;
        v42 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v59, v57.Info.Semaphore.MaxCount, v42, &v51, 1);
        if ( v51 )
        {
          v17 = CreatePeriodicMonitoredFenceNotificationInternal(v51, (struct DXGADAPTER *)v14, v55, &v57, 0);
        }
        else
        {
          v17 = -1073741811;
          WdLogSingleEntry2(3LL, v57.Info.Semaphore.MaxCount, -1073741811LL);
        }
        if ( v59 )
          DXGADAPTER::ReleaseReference(v59);
      }
      if ( v53 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v52 + 17));
        KeLeaveCriticalRegion();
        v53 = 0;
      }
      v26 = v56;
      v27 = (char *)v56 + 248;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v56 + 248));
      v28 = (v57.hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v28 < *((_DWORD *)v26 + 74) )
      {
        v29 = *((_QWORD *)v26 + 35);
        if ( ((v57.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
          && (*(_DWORD *)(v29 + 16 * v28 + 8) & 0x1F) != 0 )
        {
          v30 = 2 * ((*(_QWORD *)&v57.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v29 + 16 * ((*(_QWORD *)&v57.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)v56 + 35) + 8 * v30 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)v27 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
      KeLeaveCriticalRegion();
      if ( v17 < 0 )
      {
        v47.hSyncObject = v57.hSyncObject;
        DxgkDestroySynchronizationObjectImpl(&v47, 0, v31);
      }
      if ( v52 && v53 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v52 + 17));
        KeLeaveCriticalRegion();
      }
      if ( v14 && _InterlockedExchangeAdd64(v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v54[0] + 2), v54[0]);
      goto LABEL_66;
    }
    WdLogSingleEntry1(3LL, v17);
    goto LABEL_122;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
  DXGADAPTER_REFERENCE::Assign(v54, 0LL);
  if ( v46 )
  {
LABEL_67:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
  }
LABEL_69:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v43);
  return (unsigned int)v17;
}

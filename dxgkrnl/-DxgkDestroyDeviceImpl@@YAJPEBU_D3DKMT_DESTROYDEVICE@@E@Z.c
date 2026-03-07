__int64 __fastcall DxgkDestroyDeviceImpl(const struct _D3DKMT_DESTROYDEVICE *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hDevice; // edi
  unsigned int v8; // esi
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r9
  char *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // sf
  int v23; // [rsp+50h] [rbp-178h] BYREF
  __int64 v24; // [rsp+58h] [rbp-170h]
  char v25; // [rsp+60h] [rbp-168h]
  D3DKMT_HANDLE v26; // [rsp+68h] [rbp-160h]
  _QWORD v27[2]; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v28[24]; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v29[24]; // [rsp+98h] [rbp-130h] BYREF
  _QWORD v30[10]; // [rsp+B0h] [rbp-118h] BYREF
  _BYTE v31[160]; // [rsp+100h] [rbp-C8h] BYREF

  memset(v30, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v30[1]);
  v30[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v30[3]) = 50;
  LOBYTE(v30[6]) = -1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2010);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2010);
  Current = DXGPROCESS::GetCurrent();
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
      v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_42;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const struct _D3DKMT_DESTROYDEVICE *)MmUserProbeAddress;
    hDevice = a1->hDevice;
  }
  else
  {
    hDevice = a1->hDevice;
  }
  v26 = hDevice;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28, Current);
  v8 = (hDevice >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)Current + 74) )
  {
    v9 = *((_QWORD *)Current + 35);
    if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60)
      && (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) == 0 )
    {
      v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
      if ( v10 )
      {
        if ( v10 == 3 )
        {
          v11 = *(_QWORD *)(v9 + 16LL * v8);
          goto LABEL_17;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v11 = 0LL;
LABEL_17:
  if ( !v11 )
  {
    WdLogSingleEntry2(2LL, hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_42:
      if ( v22 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( v8 < *((_DWORD *)Current + 74) )
  {
    v12 = *((_QWORD *)Current + 35);
    v13 = *(_DWORD *)(v12 + 16LL * v8 + 8);
    if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v8 + 8) & 0x60)
      && (v13 & 0x2000) == 0
      && (v13 & 0x1F) != 0 )
    {
      *(_DWORD *)(v12 + 16LL * ((hDevice >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v27,
    (struct DXGDEVICE *)v11);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, (struct _KTHREAD **)(v11 + 144));
  DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v11, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v11, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, v11, 2, v14, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v31, v15);
  DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v11);
  DXGDEVICE::DestroyAllTrackedWorkloads((DXGDEVICE *)v11);
  v16 = *(_QWORD *)(v11 + 1880);
  if ( v16 )
  {
    if ( !*(_QWORD *)(v16 + 2920) )
    {
      WdLogSingleEntry1(1LL, 2342LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2342LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 2920), (const struct DXGDEVICE *)v11)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 2920), (const struct DXGDEVICE *)v11) )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v31);
      DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        (struct DXGDEVICE *)v11,
        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v30,
        1u);
    }
  }
  else if ( *(_DWORD *)(v11 + 1892) )
  {
    WdLogSingleEntry2(2LL, v11, *(unsigned int *)(v11 + 1892));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x is being destroyed but VidPnOwnershipCount = 0x%I64x",
      v11,
      *(unsigned int *)(v11 + 1892),
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  if ( v27[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v23);
  }
  return 0LL;
}

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r15
  __int64 v5; // rdi
  unsigned int v6; // ecx
  unsigned int v7; // r12d
  int *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v11; // rax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // r8
  UINT v17; // ecx
  int StandardAllocationDriverData; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  _BYTE v20[8]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v21; // [rsp+60h] [rbp-21h]
  char v22; // [rsp+68h] [rbp-19h]
  _BYTE v23[8]; // [rsp+70h] [rbp-11h] BYREF
  DXGPUSHLOCK *v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+80h] [rbp-1h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v26; // [rsp+88h] [rbp+7h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v24);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v25 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v5 )
      goto LABEL_3;
    if ( *(_DWORD *)(v5 + 36) >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 288LL) )
    {
      WdLogSingleEntry1(3LL, 2921LL);
      goto LABEL_3;
    }
    v6 = *(_DWORD *)(v5 + 28) + 36;
    if ( *(_DWORD *)(v5 + 28) >= 0xFFFFFFDC )
      goto LABEL_3;
    v7 = v6 + *(_DWORD *)(v5 + 32);
    if ( v7 < v6 )
      goto LABEL_3;
    v8 = (int *)operator new[](v7, 0x4B677844u, 64LL);
    if ( !v8 )
      goto LABEL_3;
    v9 = *((_QWORD *)a1 + 10);
    memset(&v26, 0, sizeof(v26));
    v10 = *(_QWORD *)(v9 + 16);
    v26.StandardAllocationType = *(_DWORD *)(v5 + 24);
    v26.PhysicalAdapterIndex = *(_DWORD *)(v5 + 36);
    switch ( *(_DWORD *)(v5 + 24) )
    {
      case 1:
        v11 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 40);
        if ( !*(_DWORD *)(v5 + 44)
          || !v11->Width
          || (v15 = *(_DWORD *)(v5 + 48)) == 0
          || v15 > 199
          || !*(_DWORD *)(v5 + 52)
          || !*(_DWORD *)(v5 + 56)
          || *(_DWORD *)(v5 + 60) )
        {
          WdLogSingleEntry1(3LL, 3013LL);
          goto LABEL_69;
        }
        break;
      case 2:
        v11 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 40);
        if ( !*(_DWORD *)(v5 + 44)
          || !v11->Width
          || *(_DWORD *)(v5 + 52)
          || (v14 = *(_DWORD *)(v5 + 48)) == 0
          || v14 > 199 )
        {
          WdLogSingleEntry1(3LL, 2972LL);
          goto LABEL_69;
        }
        break;
      case 3:
        v11 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 40);
        if ( !*(_DWORD *)(v5 + 44) || !v11->Width || *(_DWORD *)(v5 + 48) )
        {
          WdLogSingleEntry1(3LL, 2954LL);
          goto LABEL_69;
        }
        break;
      case 4:
        v11 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 40);
        if ( !*(_DWORD *)(v5 + 44)
          || !v11->Width
          || (v12 = *(_DWORD *)(v5 + 52)) == 0
          || v12 > 8
          || *(_DWORD *)(v5 + 60)
          || (v13 = *(_DWORD *)(v5 + 48)) == 0 && v12 != 7
          || v13 > 199
          || *(_DWORD *)(v5 + 56) )
        {
          WdLogSingleEntry1(3LL, 2993LL);
          goto LABEL_69;
        }
        break;
      default:
        WdLogSingleEntry1(2LL, 3024LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid standard allocation type",
          3024LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_69:
        *v8 = -1073741811;
LABEL_70:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v8, v7);
        operator delete(v8);
        goto LABEL_4;
    }
    v26.pCreateSharedPrimarySurfaceData = v11;
    v21 = v10;
    v22 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    if ( *(_DWORD *)(v10 + 200) != 1 )
    {
      *v8 = -1073741130;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v5 + 28) || (v17 = 0, *(_DWORD *)(v5 + 32)) )
    {
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                       *(ADAPTER_RENDER **)(v10 + 2928),
                                       &v26,
                                       v16);
      *v8 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
        goto LABEL_50;
      v17 = *(_DWORD *)(v5 + 28);
      if ( v26.AllocationPrivateDriverDataSize > v17 || v26.ResourcePrivateDriverDataSize > *(_DWORD *)(v5 + 32) )
      {
        WdLogSingleEntry1(3LL, 3052LL);
        *v8 = -1073741811;
        goto LABEL_45;
      }
    }
    v26.AllocationPrivateDriverDataSize = v17;
    if ( v17 )
      v26.pAllocationPrivateDriverData = v8 + 9;
    v26.ResourcePrivateDriverDataSize = *(_DWORD *)(v5 + 32);
    if ( v26.ResourcePrivateDriverDataSize )
      v26.pResourcePrivateDriverData = (char *)v8 + v17 + 36;
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                     *(ADAPTER_RENDER **)(v10 + 2928),
                                     &v26,
                                     v16);
    *v8 = StandardAllocationDriverData;
    if ( StandardAllocationDriverData >= 0 )
    {
      v8[1] = v26.AllocationPrivateDriverDataSize;
      v8[2] = v26.ResourcePrivateDriverDataSize;
      if ( v26.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
      {
        if ( v26.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE )
        {
          *(_OWORD *)(v8 + 3) = *(_OWORD *)v26.pCreateSharedPrimarySurfaceData;
          goto LABEL_45;
        }
        if ( v26.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE )
        {
          pCreateSharedPrimarySurfaceData = v26.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v8 + 3) = *(_QWORD *)v26.pCreateSharedPrimarySurfaceData;
          v8[5] = pCreateSharedPrimarySurfaceData->Format;
          goto LABEL_45;
        }
        if ( v26.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_GDISURFACE )
        {
          WdLogSingleEntry1(2LL, 3093LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid standard allocation type",
            3093LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_45;
        }
      }
      *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v8 + 3) = *v26.pCreateSharedPrimarySurfaceData;
LABEL_45:
      if ( v22 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
      goto LABEL_70;
    }
LABEL_50:
    WdLogSingleEntry1(2LL, StandardAllocationDriverData);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DdiGetStandardAllocationDriverData failed: 0x%I64x",
      *v8,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_45;
  }
  WdLogSingleEntry1(2LL, 2915LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    2915LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_3:
  v3 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return v3;
}

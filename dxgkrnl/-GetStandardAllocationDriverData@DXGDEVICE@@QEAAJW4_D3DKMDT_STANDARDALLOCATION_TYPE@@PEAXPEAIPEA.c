__int64 __fastcall DXGDEVICE::GetStandardAllocationDriverData(
        DXGDEVICE *this,
        enum _D3DKMDT_STANDARDALLOCATION_TYPE a2,
        D3DKMDT_SHAREDPRIMARYSURFACEDATA *a3,
        unsigned int *a4,
        void **a5)
{
  ADAPTER_RENDER *v6; // rcx
  void *v9; // r14
  int StandardAllocationDriverData; // eax
  __int64 v11; // rdi
  void *v13; // rax
  __int64 v14; // r8
  __int64 ResourcePrivateDriverDataSize; // rdx
  ADAPTER_RENDER *v16; // rcx
  int v17; // eax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v18; // [rsp+50h] [rbp-30h] BYREF

  memset(&v18, 0, sizeof(v18));
  v18.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v18.pCreateSharedPrimarySurfaceData = a3;
  v9 = 0LL;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v6, &v18, (__int64)a3);
  v11 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData >= 0 )
  {
    if ( !v18.AllocationPrivateDriverDataSize && !v18.ResourcePrivateDriverDataSize )
    {
      WdLogSingleEntry2(v18.AllocationPrivateDriverDataSize + 2, this, -1073741823LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and                         "
                  "    pResourcePrivateDriverData buffer, returning 0x%I64x",
        (__int64)this,
        -1073741823LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    v13 = (void *)operator new[](v18.AllocationPrivateDriverDataSize, 0x4B677844u, 256LL);
    *a5 = v13;
    if ( v13 )
    {
      if ( !v18.ResourcePrivateDriverDataSize
        || (v9 = (void *)operator new[](v18.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL)) != 0LL )
      {
        v16 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v18.pAllocationPrivateDriverData = *a5;
        v18.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
        v18.pCreateSharedPrimarySurfaceData = a3;
        v18.pResourcePrivateDriverData = v9;
        v17 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v16, &v18, v14);
        v11 = v17;
        if ( v17 >= 0 )
        {
          *a4 = v18.AllocationPrivateDriverDataSize;
        }
        else
        {
          WdLogSingleEntry2(1LL, this, v17);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Device 0x%I64x: Driver failed to generate pPrivateDriverData buffer, returning 0x%I64x",
            (__int64)this,
            v11,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_15;
      }
      ResourcePrivateDriverDataSize = v18.ResourcePrivateDriverDataSize;
    }
    else
    {
      ResourcePrivateDriverDataSize = v18.AllocationPrivateDriverDataSize;
    }
    LODWORD(v11) = -1073741801;
    WdLogSingleEntry2(3LL, ResourcePrivateDriverDataSize, -1073741801LL);
LABEL_15:
    operator delete(v9);
    if ( (int)v11 < 0 )
      operator delete(*a5);
    return (unsigned int)v11;
  }
  WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
    (__int64)this,
    v11,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v11;
}

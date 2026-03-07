__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdi
  ADAPTER_RENDER *v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // r8
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rdi
  const wchar_t *v19; // r9
  int v20; // eax
  int StandardAllocationDriverData; // eax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v24; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v25[2]; // [rsp+80h] [rbp+7h] BYREF
  DXGPUSHLOCK *v26; // [rsp+88h] [rbp+Fh]
  __int64 v27; // [rsp+90h] [rbp+17h]

  v4 = 0;
  if ( a4 )
  {
    v7 = *(_QWORD *)(a4 + 16);
    if ( v7 )
    {
      v8 = *(ADAPTER_RENDER **)(a1 + 16);
      if ( *(ADAPTER_RENDER **)(v7 + 80) == v8
        && ((v9 = *(_QWORD *)(a1 + 1880)) == 0
         || *(_QWORD *)(v9 + 2928)
         || (v16 = *(_QWORD *)(v7 + 96)) == 0
         || v16 == v9) )
      {
        v26 = (DXGPUSHLOCK *)(v7 + 32);
        if ( v7 != -32 && *(struct _KTHREAD **)(v7 + 40) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1453LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
            1453LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGPUSHLOCK::AcquireExclusive(v26);
        a2[7] = 0;
        v10 = *(_QWORD **)(v7 + 136);
        LODWORD(v27) = 2;
        if ( v10 != (_QWORD *)(v7 + 136) )
        {
          v11 = 0;
          while ( 1 )
          {
            v12 = v11;
            v13 = v11 + *((_DWORD *)v10 - 2);
            v11 = -1;
            if ( v13 >= v12 )
              v11 = v13;
            v14 = v13 < v12 ? 0xC0000095 : 0;
            a2[7] = v11;
            v4 = v14;
            if ( v13 < v12 )
              break;
            v10 = (_QWORD *)*v10;
            if ( v10 == (_QWORD *)(v7 + 136) )
              goto LABEL_15;
          }
          WdLogSingleEntry2(3LL, a1, (int)v14);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
          return v14;
        }
LABEL_15:
        a2[8] = *(_DWORD *)(v7 + 128);
        a2[9] = *(_DWORD *)(v7 + 132);
        a2[6] = *(_DWORD *)(v7 + 112);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
      }
      else
      {
        if ( (*(_DWORD *)(v7 + 12) & 0x20) == 0 )
        {
          v17 = 1LL;
          v18 = -1073741811LL;
          WdLogSingleEntry3(2LL, a1, -1073741811LL, 1LL);
          v19 = L"Device 0x%I64x: Query resource info is called for a resource, which is created on a different adapter. R"
                 "eturning 0x%I64x";
LABEL_29:
          v14 = -1073741811;
          goto LABEL_30;
        }
        LODWORD(v26) = *(_DWORD *)(v7 + 216);
        v25[0] = *(_DWORD *)(v7 + 208);
        v20 = *(_DWORD *)(v7 + 212);
        *((_DWORD *)&v24.StandardAllocationType + 1) = 0;
        v25[1] = v20;
        v24.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v25;
        v27 = 0LL;
        HIDWORD(v26) = 7;
        memset(&v24.pAllocationPrivateDriverData, 0, 32);
        v24.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
        StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v8, &v24);
        v14 = StandardAllocationDriverData;
        if ( StandardAllocationDriverData < 0 )
        {
          v18 = StandardAllocationDriverData;
          WdLogSingleEntry2(2LL, a1, StandardAllocationDriverData);
          v19 = L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x";
          v17 = 0LL;
LABEL_30:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, a1, v18, v17, 0LL, 0LL);
          return v14;
        }
        AllocationPrivateDriverDataSize = v24.AllocationPrivateDriverDataSize;
        ResourcePrivateDriverDataSize = v24.ResourcePrivateDriverDataSize;
        if ( !v24.AllocationPrivateDriverDataSize && !v24.ResourcePrivateDriverDataSize )
        {
          v18 = -1073741811LL;
          WdLogSingleEntry2(2LL, a1, -1073741811LL);
          v19 = L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverDat"
                 "a buffer, returning 0x%I64x";
          v17 = 0LL;
          goto LABEL_29;
        }
        a2[9] = *(_DWORD *)(v7 + 132);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v7 + 112);
        a2[7] = AllocationPrivateDriverDataSize;
      }
      return v4;
    }
    WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
      a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}

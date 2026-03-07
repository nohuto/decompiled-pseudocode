__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  struct DXGPROCESS *Current; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rdi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  ADAPTER_RENDER *v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // r8
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  __int64 v20; // rdi
  __int64 v21; // r13
  unsigned int v22; // eax
  __int64 v23; // rdi
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdi
  const wchar_t *v27; // r9
  __int64 v28; // rax
  int v29; // eax
  int StandardAllocationDriverData; // eax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  _BYTE v33[8]; // [rsp+50h] [rbp-49h] BYREF
  char v34; // [rsp+58h] [rbp-41h]
  __int64 v35; // [rsp+60h] [rbp-39h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v36; // [rsp+68h] [rbp-31h] BYREF
  _DWORD v37[2]; // [rsp+98h] [rbp-1h] BYREF
  DXGPUSHLOCK *v38; // [rsp+A0h] [rbp+7h]
  __int64 v39; // [rsp+A8h] [rbp+Fh]

  v3 = 0;
  v4 = a3;
  if ( !a3 )
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
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(a1);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v33);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  if ( (*((_DWORD *)Current + 106) & 0x100) != 0 )
  {
    v20 = *((_QWORD *)Current + 76);
    v21 = v20 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 248));
    v22 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
    if ( v22 < *(_DWORD *)(v20 + 296) )
    {
      v23 = *(_QWORD *)(v20 + 280);
      if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60)
        && (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) == 0 )
      {
        v24 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
        if ( v24 )
        {
          if ( v24 == 2 )
          {
            ObjectA = *(_QWORD *)(v23 + 16LL * v22);
            goto LABEL_29;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    ObjectA = 0LL;
LABEL_29:
    _InterlockedDecrement((volatile signed __int32 *)(v21 + 16));
    ExReleasePushLockSharedEx(v21, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_4;
  }
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v4, 2);
LABEL_4:
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 68));
    v10 = *(_DWORD *)(ObjectA + 68);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v10 + 1, v10);
      if ( v11 == v10 )
      {
        if ( v34 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
        v12 = *(ADAPTER_RENDER **)(a1 + 16);
        v35 = ObjectA;
        if ( *(ADAPTER_RENDER **)(ObjectA + 80) == v12
          && ((v13 = *(_QWORD *)(a1 + 1880)) == 0
           || *(_QWORD *)(v13 + 2928)
           || (v25 = *(_QWORD *)(ObjectA + 96)) == 0
           || v25 == v13) )
        {
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37, (struct _KTHREAD **)(ObjectA + 32), 0);
          DXGPUSHLOCK::AcquireExclusive(v38);
          a2[5] = 0;
          v14 = *(_QWORD **)(ObjectA + 136);
          LODWORD(v39) = 2;
          if ( v14 != (_QWORD *)(ObjectA + 136) )
          {
            v15 = 0;
            while ( 1 )
            {
              v16 = v15;
              v17 = v15 + *((_DWORD *)v14 - 2);
              v15 = -1;
              if ( v17 >= v16 )
                v15 = v17;
              v18 = v17 < v16 ? 0xC0000095 : 0;
              a2[5] = v15;
              v3 = v18;
              if ( v17 < v16 )
                break;
              v14 = (_QWORD *)*v14;
              if ( v14 == (_QWORD *)(ObjectA + 136) )
                goto LABEL_19;
            }
            WdLogSingleEntry2(3LL, a1, (int)v18);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
            goto LABEL_21;
          }
LABEL_19:
          a2[6] = *(_DWORD *)(ObjectA + 128);
          a2[7] = *(_DWORD *)(ObjectA + 132);
          a2[4] = *(_DWORD *)(ObjectA + 112);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
        }
        else
        {
          if ( (*(_DWORD *)(ObjectA + 12) & 0x20) == 0 )
          {
            v26 = -1073741811LL;
            WdLogSingleEntry3(2LL, a1, -1073741811LL, 1LL);
            v27 = L"Device 0x%I64x: Query resource info is called for a resource, which is created on a different adapter."
                   " Returning 0x%I64x";
            v28 = 1LL;
            goto LABEL_42;
          }
          LODWORD(v38) = *(_DWORD *)(ObjectA + 216);
          v37[0] = *(_DWORD *)(ObjectA + 208);
          v29 = *(_DWORD *)(ObjectA + 212);
          *((_DWORD *)&v36.StandardAllocationType + 1) = 0;
          v37[1] = v29;
          v36.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v37;
          v39 = 0LL;
          HIDWORD(v38) = 7;
          memset(&v36.pAllocationPrivateDriverData, 0, 32);
          v36.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
          StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v12, &v36, (__int64)v12);
          v18 = StandardAllocationDriverData;
          if ( StandardAllocationDriverData < 0 )
          {
            v26 = StandardAllocationDriverData;
            WdLogSingleEntry2(2LL, a1, StandardAllocationDriverData);
            v27 = L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x";
            v28 = 0LL;
            goto LABEL_43;
          }
          AllocationPrivateDriverDataSize = v36.AllocationPrivateDriverDataSize;
          ResourcePrivateDriverDataSize = v36.ResourcePrivateDriverDataSize;
          if ( !v36.AllocationPrivateDriverDataSize && !v36.ResourcePrivateDriverDataSize )
          {
            v26 = -1073741811LL;
            WdLogSingleEntry2(2LL, a1, -1073741811LL);
            v27 = L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverD"
                   "ata buffer, returning 0x%I64x";
            v28 = 0LL;
LABEL_42:
            v18 = -1073741811;
LABEL_43:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, a1, v26, v28, 0LL, 0LL);
LABEL_21:
            `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v35);
            return v18;
          }
          a2[7] = *(_DWORD *)(ObjectA + 132);
          a2[6] = ResourcePrivateDriverDataSize;
          a2[4] = *(_DWORD *)(ObjectA + 112);
          a2[5] = AllocationPrivateDriverDataSize;
        }
        v18 = v3;
        goto LABEL_21;
      }
    }
    WdLogSingleEntry4(3LL, a1, v4, -1073741811LL, 8149LL);
  }
  else
  {
    WdLogSingleEntry3(3LL, a1, v4, -1073741811LL);
  }
  if ( v34 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  return 3221225485LL;
}

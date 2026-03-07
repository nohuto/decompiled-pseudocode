__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        unsigned int *a5)
{
  __int64 v7; // r15
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // r8d
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r9
  int v15; // edx
  struct _EX_RUNDOWN_REF *v16; // rdx
  UINT Pitch; // eax
  struct _EX_RUNDOWN_REF *v19; // [rsp+50h] [rbp-68h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v20; // [rsp+58h] [rbp-60h] BYREF

  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 11429LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      11429LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_DWORD *)this + 1);
  v10 = 0;
  if ( (v9 & 0x40) != 0 )
  {
    v11 = *((_DWORD *)this + 105);
    *((_DWORD *)this + 1) = v9 & 0xFFFFFFBF;
    if ( v11 )
    {
      DXGDEVICE::DestroyStagingSurface(a2, 0, v11, a4);
      *((_QWORD *)this + 52) = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 105) )
  {
    v12 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 248));
    v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( v13 < *(_DWORD *)(v12 + 296) )
    {
      v14 = *(_QWORD *)(v12 + 280);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60)
        && (*(_DWORD *)(v14 + 16LL * v13 + 8) & 0x2000) == 0 )
      {
        v15 = *(_DWORD *)(v14 + 16LL * v13 + 8) & 0x1F;
        if ( v15 )
        {
          if ( v15 == 5 )
          {
            v16 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * v13);
            goto LABEL_14;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v16 = 0LL;
LABEL_14:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19, v16);
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 264));
    ExReleasePushLockSharedEx(v12 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v19 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v19[1].Count + 16) + 16LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v20.Width = *((_DWORD *)this + 19);
        v20.Height = *((_DWORD *)this + 20);
        v20.Pitch = 0;
        v10 = DXGDEVICE::CreateStagingSurface2(a2, &v20, a4, (unsigned int *)this + 104, (unsigned int *)this + 105);
        if ( v10 >= 0 )
        {
          if ( !*((_DWORD *)this + 104) )
          {
            WdLogSingleEntry1(1LL, 11476LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"NULL != m_hStagingBufferAllocation",
              11476LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          Pitch = v20.Pitch;
          if ( !v20.Pitch )
          {
            WdLogSingleEntry1(1LL, 11478LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"0 != StagingSurfaceData.Pitch",
              11478LL,
              0LL,
              0LL,
              0LL,
              0LL);
            Pitch = v20.Pitch;
          }
          *((_DWORD *)this + 106) = Pitch;
        }
      }
      else
      {
        v10 = -1073741811;
        WdLogSingleEntry3(2LL, a2, v19, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)a2,
          (__int64)v19,
          -1073741811LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v10 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v7);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
  }
  *a5 = *((_DWORD *)this + 104);
  return (unsigned int)v10;
}

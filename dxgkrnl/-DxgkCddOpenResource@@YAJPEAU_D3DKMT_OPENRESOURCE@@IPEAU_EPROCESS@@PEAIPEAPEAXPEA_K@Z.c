__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v11; // r15
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v18; // eax
  __int64 v19; // rdi
  ADAPTER_RENDER *v20; // rbx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KTHREAD *v25; // rdx
  int v26; // ecx
  struct DXGDEVICE *v27; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v28; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h]
  char v32; // [rsp+78h] [rbp-88h]
  char v33[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h]
  char v35; // [rsp+90h] [rbp-70h]
  _BYTE v36[24]; // [rsp+98h] [rbp-68h] BYREF
  char v37[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v38[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v39[88]; // [rsp+F8h] [rbp-8h] BYREF

  v30 = -1;
  v29 = a6;
  v31 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 3034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v11 = Current;
  if ( !Current )
  {
    v21 = -1073741811;
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
    goto LABEL_22;
  }
  hDevice = a1->hDevice;
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v28, hDevice, Current, &v27);
  v13 = v27;
  if ( v27 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v21 = -1073741811;
      WdLogSingleEntry2(3LL, v27, -1073741811LL);
      goto LABEL_19;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v36, v27);
    v14 = *((_QWORD *)v13 + 2);
    v35 = 0;
    v34 = *(_QWORD *)(v14 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v13, 0, v15, 0);
    v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
    if ( v16 < 0
      || (v16 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(v13, a2, (struct COREDEVICEACCESS *)v37, 0, a3, a4, v29),
          v16 < 0) )
    {
      v21 = v16;
LABEL_16:
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      if ( v35 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v36);
      goto LABEL_19;
    }
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 31));
    v18 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v18 < *((_DWORD *)v11 + 74) )
    {
      v25 = v11[35];
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v25 + 16 * v18 + 8) & 0x60)
        && (*((_DWORD *)v25 + 4 * v18 + 2) & 0x2000) == 0 )
      {
        v26 = *((_DWORD *)v25 + 4 * v18 + 2) & 0x1F;
        if ( v26 )
        {
          if ( v26 == 5 )
          {
            v19 = *((_QWORD *)v25 + 2 * v18);
LABEL_10:
            _InterlockedDecrement((volatile signed __int32 *)v11 + 66);
            ExReleasePushLockSharedEx(v11 + 31, 0LL);
            KeLeaveCriticalRegion();
            if ( v19 )
            {
              v20 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 2);
              if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v20)
                && (v21 = MapGpuVirtualAddressToAllocation(v20, (struct DXGALLOCATION *)v19), v21 < 0) )
              {
                DXGDEVICE::DestroyAllocationInternal(
                  v27,
                  0,
                  0LL,
                  *(struct DXGRESOURCE **)(v19 + 40),
                  0LL,
                  (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
              }
              else
              {
                if ( a5 )
                  *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2)
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 680LL))(
                                  *(_QWORD *)(*((_QWORD *)v13 + 2) + 768LL),
                                  *(_QWORD *)(v19 + 24));
                v21 = 0;
              }
            }
            else
            {
              v21 = -1073741811;
            }
            goto LABEL_16;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v19 = 0LL;
    goto LABEL_10;
  }
  v21 = -1073741811;
  WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
    a1->hDevice,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_19:
  if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28 + 2), v28);
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v30);
  }
  return (unsigned int)v21;
}

/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02D9C70
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001580 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C01660F8 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0184E44 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  int v9; // ebx
  HANDLE hNtHandle; // rcx
  NTSTATUS v11; // eax
  PVOID v12; // r13
  __int64 v13; // r8
  D3DKMT_HANDLE hDevice; // edx
  char v15; // si
  struct DXGDEVICE *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v20; // eax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rdi
  ADAPTER_RENDER *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGDEVICE *v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  _BYTE v30[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  char v32; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v34; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[16]; // [rsp+98h] [rbp-68h] BYREF
  int v38; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h]
  char v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v44[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v45[88]; // [rsp+118h] [rbp+18h] BYREF

  v38 = -1;
  v42 = (__int64)a4;
  v29 = (__int64)a3;
  v33 = a2;
  v41 = (__int64)a6;
  v39 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v7);
  if ( !Current )
  {
    v9 = -1073741811;
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
    goto LABEL_49;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(
          hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v12 = Object;
  v13 = -1073741788LL;
  v9 = v11;
  if ( v11 == -1073741788 )
    goto LABEL_8;
  if ( v11 < 0 )
  {
    v13 = v11;
LABEL_8:
    WdLogSingleEntry2(3LL, a1->hNtHandle, v13);
    goto LABEL_47;
  }
  hDevice = a1->hDevice;
  v34 = 0LL;
  v15 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v28, hDevice, (struct _KTHREAD **)Current, &v34);
  v16 = v34;
  if ( !v34 )
  {
    v9 = -1073741811;
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
    goto LABEL_13;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, v34, -1073741811LL);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37, v34);
  v17 = *((_QWORD *)v16 + 2);
  v32 = 0;
  v31 = *(_QWORD *)(v17 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v43, (__int64)v16, 0, v18, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v43, 0LL);
  if ( v9 >= 0 )
  {
    v9 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
           v16,
           (__int64)a1,
           0,
           (__int64)v12,
           v33,
           (struct COREDEVICEACCESS *)&v43,
           v15,
           (struct _EPROCESS *)v29,
           (unsigned int *)v42,
           (unsigned __int64 *)v41);
    if ( v9 >= 0 )
    {
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
      v20 = (hAllocation >> 6) & 0xFFFFFF;
      if ( v20 < *((_DWORD *)Current + 74) )
      {
        v21 = *((_QWORD *)Current + 35);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60)
          && (*(_DWORD *)(v21 + 16LL * v20 + 8) & 0x2000) == 0 )
        {
          v22 = *(_DWORD *)(v21 + 16LL * v20 + 8) & 0x1F;
          if ( v22 )
          {
            if ( v22 == 5 )
            {
              v23 = *(_QWORD *)(v21 + 16LL * v20);
LABEL_30:
              _InterlockedAdd((volatile signed __int32 *)Current + 66, 0xFFFFFFFF);
              ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
              KeLeaveCriticalRegion();
              if ( v23 )
              {
                v24 = (ADAPTER_RENDER *)*((_QWORD *)v16 + 2);
                if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v24)
                  || (v9 = MapGpuVirtualAddressToAllocation(v24, (struct DXGALLOCATION *)v23), v9 >= 0) )
                {
                  if ( a5 )
                    *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 760LL)
                                                                                        + 8LL)
                                                                            + 680LL))(
                                    *(_QWORD *)(*((_QWORD *)v16 + 2) + 768LL),
                                    *(_QWORD *)(v23 + 24));
                  COREACCESS::~COREACCESS((COREACCESS *)v45);
                  COREACCESS::~COREACCESS((COREACCESS *)v44);
                  if ( v32 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
                  if ( !v28 )
                    goto LABEL_47;
                  goto LABEL_45;
                }
                DXGDEVICE::DestroyAllocationInternal(
                  v34,
                  0,
                  0LL,
                  *(struct DXGRESOURCE **)(v23 + 40),
                  0LL,
                  (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
              }
              else
              {
                v9 = -1073741811;
              }
              COREACCESS::~COREACCESS((COREACCESS *)v45);
              COREACCESS::~COREACCESS((COREACCESS *)v44);
              if ( v32 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
              if ( !v28 )
                goto LABEL_47;
              goto LABEL_45;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v23 = 0LL;
      goto LABEL_30;
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v45);
  COREACCESS::~COREACCESS((COREACCESS *)v44);
  if ( v32 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
LABEL_13:
  if ( v28 )
  {
LABEL_45:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28 + 2), v28);
  }
LABEL_47:
  if ( v12 )
    ObfDereferenceObject(v12);
LABEL_49:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v38);
  return (unsigned int)v9;
}

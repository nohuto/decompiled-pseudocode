/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003FBDC (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01227D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C022E868 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        UINT a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD **Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD **v17; // rdi
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 hDevice; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // eax
  struct _KTHREAD **v32; // r14
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v34; // rax
  struct _KTHREAD *v35; // rdi
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  struct ADAPTER_RENDER *v40; // r11
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGDEVICE *v44; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h]
  char v49; // [rsp+78h] [rbp-88h]
  char v50[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h]
  char v52; // [rsp+90h] [rbp-70h]
  _BYTE v53[24]; // [rsp+98h] [rbp-68h] BYREF
  char v54[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v55[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v56[88]; // [rsp+F8h] [rbp-8h] BYREF

  v47 = -1;
  v46 = a6;
  v48 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 3034LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v10, v12, v13);
  v17 = Current;
  if ( !Current )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    v19 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_37;
  }
  hDevice = a1->hDevice;
  v44 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, hDevice, Current, &v44);
  v25 = v44;
  if ( v44 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v28 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      v19 = -1073741811;
      *(_QWORD *)(v28 + 24) = v25;
      *(_QWORD *)(v28 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
      goto LABEL_34;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v53, v44);
    v29 = *((_QWORD *)v25 + 2);
    v52 = 0;
    v51 = *(_QWORD *)(v29 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v25, 0, v30, 0);
    v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v54, 0LL);
    if ( v31 < 0
      || (v31 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                  (struct _DXGK_ALLOCATIONINFO *)v25,
                  (__int64)a1,
                  a1->hGlobalShare,
                  0LL,
                  a2,
                  (struct COREDEVICEACCESS *)v54,
                  0,
                  a3,
                  a4,
                  v46),
          v31 < 0) )
    {
      v19 = v31;
LABEL_31:
      COREACCESS::~COREACCESS((COREACCESS *)v56);
      COREACCESS::~COREACCESS((COREACCESS *)v55);
      if ( v52 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v53);
      goto LABEL_34;
    }
    v32 = v17 + 26;
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v17 + 26));
    v34 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < *((_DWORD *)v17 + 64) )
    {
      v35 = v17[30];
      v36 = *((_DWORD *)v35 + 4 * v34 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v35 + 16 * v34 + 8) & 0x60)
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0 )
      {
        v37 = v36 & 0x1F;
        if ( (_BYTE)v37 == 5 )
        {
          v39 = *((_QWORD *)v35 + 2 * (unsigned int)v34);
LABEL_21:
          ExReleasePushLockSharedEx(v32, 0LL);
          KeLeaveCriticalRegion();
          if ( v39 )
          {
            if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(*((ADAPTER_RENDER **)v25 + 2))
              && (v19 = MapGpuVirtualAddressToAllocation(v40, (struct DXGALLOCATION *)v39), v19 < 0) )
            {
              DXGDEVICE::DestroyAllocationInternal(
                v25,
                0,
                0LL,
                *(struct DXGRESOURCE **)(v39 + 40),
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              if ( a5 )
                *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 688LL))(
                                *(_QWORD *)(*((_QWORD *)v25 + 2) + 648LL),
                                *(_QWORD *)(v39 + 24));
              v19 = 0;
            }
          }
          else
          {
            v19 = -1073741811;
          }
          goto LABEL_31;
        }
        v38 = WdLogNewEntry5_WdError(v37, 2LL * (unsigned int)v34);
        *(_QWORD *)(v38 + 24) = 316LL;
        WdLogEvent5_WdError(v38);
      }
    }
    v39 = 0LL;
    goto LABEL_21;
  }
  v26 = WdLogNewEntry5_WdError(v23, v22);
  v27 = a1->hDevice;
  v19 = -1073741811;
  *(_QWORD *)(v26 + 24) = v27;
  *(_QWORD *)(v26 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v26);
LABEL_34:
  if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
LABEL_37:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v20);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v47);
  return (unsigned int)v19;
}

/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022D5B0
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
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0129E20 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C022E868 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // rdx
  HANDLE hNtHandle; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  PVOID v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rax
  HANDLE v25; // rcx
  __int64 hDevice; // rdx
  char v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGDEVICE *v31; // rsi
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  D3DKMT_HANDLE hAllocation; // edi
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdi
  struct ADAPTER_RENDER *v44; // r11
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DXGDEVICE *v48; // [rsp+50h] [rbp-B0h] BYREF
  struct _EPROCESS *v49; // [rsp+58h] [rbp-A8h]
  _BYTE v50[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h]
  char v52; // [rsp+70h] [rbp-90h]
  struct COREDEVICEACCESS *v53; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-78h] BYREF
  struct DXGDEVICE *v56; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v57[16]; // [rsp+98h] [rbp-68h] BYREF
  int v58; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h]
  char v60; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v61; // [rsp+C0h] [rbp-40h]
  unsigned int *v62; // [rsp+C8h] [rbp-38h]
  _BYTE v63[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v64[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v65[88]; // [rsp+118h] [rbp+18h] BYREF

  v58 = -1;
  v62 = a4;
  v49 = a3;
  LODWORD(v53) = a2;
  v61 = a6;
  v59 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v60 = 1;
    v58 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 3034LL);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v8, v7, v9, v10);
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    v15 = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_47;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(
          hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v22 = Object;
  v23 = v18;
  v15 = v18;
  if ( v18 == -1073741788 )
  {
    v24 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    v25 = a1->hNtHandle;
    *(_QWORD *)(v24 + 32) = -1073741788LL;
LABEL_9:
    *(_QWORD *)(v24 + 24) = v25;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_45;
  }
  if ( v18 < 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    v25 = a1->hNtHandle;
    *(_QWORD *)(v24 + 32) = v23;
    goto LABEL_9;
  }
  hDevice = a1->hDevice;
  v56 = 0LL;
  v27 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, hDevice, (struct _KTHREAD **)Current, &v56);
  v31 = v56;
  if ( !v56 )
  {
    v32 = WdLogNewEntry5_WdError(v29, v28);
    v15 = -1073741811;
    *(_QWORD *)(v32 + 24) = a1->hDevice;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_14;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    v34 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    v15 = -1073741811;
    *(_QWORD *)(v34 + 24) = v31;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
    goto LABEL_14;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v57, v56);
  v35 = *((_QWORD *)v31 + 2);
  v52 = 0;
  v51 = *(_QWORD *)(v35 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)v31, 0, v36, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v63, 0LL);
  if ( v15 >= 0 )
  {
    v15 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
            (struct _DXGK_ALLOCATIONINFO *)v31,
            (__int64)a1,
            0,
            (__int64)v22,
            (UINT)v53,
            (struct COREDEVICEACCESS *)v63,
            v27,
            v49,
            v62,
            v61);
    if ( v15 >= 0 )
    {
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v38 = (hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v38 < *((_DWORD *)Current + 64) )
      {
        v39 = *((_QWORD *)Current + 30);
        v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60)
          && (v40 & 0x2000) == 0
          && (v40 & 0x1F) != 0 )
        {
          v41 = v40 & 0x1F;
          if ( (_BYTE)v41 == 5 )
          {
            v43 = *(_QWORD *)(v39 + 16LL * (unsigned int)v38);
LABEL_31:
            ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
            KeLeaveCriticalRegion();
            if ( v43 )
            {
              if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(*((ADAPTER_RENDER **)v31 + 2))
                || (v15 = MapGpuVirtualAddressToAllocation(v44, (struct DXGALLOCATION *)v43), v15 >= 0) )
              {
                if ( a5 )
                  *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 2)
                                                                                                  + 640LL)
                                                                                      + 8LL)
                                                                          + 688LL))(
                                  *(_QWORD *)(*((_QWORD *)v31 + 2) + 648LL),
                                  *(_QWORD *)(v43 + 24));
                COREACCESS::~COREACCESS((COREACCESS *)v65);
                COREACCESS::~COREACCESS((COREACCESS *)v64);
                if ( v52 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
                DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v57);
                if ( !v48 )
                  goto LABEL_45;
                v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL);
                v33 = v16 == 1;
                goto LABEL_43;
              }
              DXGDEVICE::DestroyAllocationInternal(
                v31,
                0,
                0LL,
                *(struct DXGRESOURCE **)(v43 + 40),
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              v15 = -1073741811;
            }
            goto LABEL_20;
          }
          v42 = WdLogNewEntry5_WdError(v41, 2LL * (unsigned int)v38);
          *(_QWORD *)(v42 + 24) = 316LL;
          WdLogEvent5_WdError(v42);
        }
      }
      v43 = 0LL;
      goto LABEL_31;
    }
  }
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v65);
  COREACCESS::~COREACCESS((COREACCESS *)v64);
  if ( v52 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v57);
LABEL_14:
  if ( v48 )
  {
    v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_43:
    if ( v33 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
  }
LABEL_45:
  if ( v22 )
    ObfDereferenceObject(v22);
LABEL_47:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v16);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v58);
  return (unsigned int)v15;
}

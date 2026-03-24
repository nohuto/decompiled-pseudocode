/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B910
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B528 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000E5CC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0129E20 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C012A4E4 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C024A2B8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C024A4A0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C024E510 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  int Resident; // ebx
  __int64 v12; // rax
  __int64 hAsyncEvent_high; // rbx
  struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A Value; // r12d
  UINT v16; // r14d
  int hAsyncEvent; // r13d
  UINT v18; // eax
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _BYTE *PoolWithTag; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  void *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r14d
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rax
  struct _EX_RUNDOWN_REF *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  struct _EX_RUNDOWN_REF *v47; // rax
  ULONG_PTR Count; // rcx
  char v49; // r15
  __int64 v50; // rdx
  _QWORD *v51; // rsi
  ULONG_PTR v52; // r13
  struct DXGPROCESS *Current; // rax
  char v54; // r14
  int *v55; // r12
  char v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  struct D3DDDI_MAKERESIDENT_FLAGS v72; // [rsp+20h] [rbp-E0h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v74; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v77; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  __int64 v79; // [rsp+80h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v80; // [rsp+88h] [rbp-78h] BYREF
  void *v81; // [rsp+90h] [rbp-70h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v82; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v83[14]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v84; // [rsp+130h] [rbp+30h] BYREF
  PVOID P; // [rsp+1A0h] [rbp+A0h]
  _BYTE v86[320]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v87; // [rsp+2E8h] [rbp+1E8h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 235LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)this;
  memset(&v82, 0, sizeof(v82));
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)a2, &v82, v6, v8);
  if ( Resident < 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdEvent(v12);
    return (unsigned int)Resident;
  }
  hAsyncEvent_high = HIDWORD(v82.hAsyncEvent);
  Value = (struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A)v82.Flags.Value;
  v16 = HIDWORD(v82.hAsyncEvent) + v82.Flags.Value;
  if ( HIDWORD(v82.hAsyncEvent) + v82.Flags.Value < HIDWORD(v82.hAsyncEvent) )
  {
    v71 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v71 + 24) = 251LL;
  }
  else
  {
    hAsyncEvent = (int)v82.hAsyncEvent;
    v18 = v16 + LODWORD(v82.hAsyncEvent);
    if ( v16 + LODWORD(v82.hAsyncEvent) >= v16 )
    {
      v19 = v18;
      v81 = operator new[](v18, 0x674D444Fu, PagedPool);
      if ( !v81 )
      {
        v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = v19;
        WdLogEvent5_WdLowResource(v24);
        return 3221225495LL;
      }
      memset(v83, 0, 0x68uLL);
      P = 0LL;
      v87 = 0;
      v29 = *((unsigned int *)&v82.Flags + 1);
      if ( *((_DWORD *)&v82.Flags + 1) <= 4u )
      {
        PoolWithTag = v86;
        P = v86;
      }
      else
      {
        v25 = 0xFFFFFFFFFFFFFFFFuLL % *((unsigned int *)&v82.Flags + 1);
        if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v82.Flags + 1) < 0x50 )
          goto LABEL_61;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * *((unsigned int *)&v82.Flags + 1), 0x4B677844u);
        P = PoolWithTag;
      }
      v87 = v29;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v29);
        PoolWithTag = P;
        if ( P )
        {
          LODWORD(v83[0]) = *((_DWORD *)a2 + 109);
          v30 = (void *)v83[9];
          v83[3] = P;
          if ( (_DWORD)hAsyncEvent_high )
            v30 = v81;
          LODWORD(v83[2]) = v29;
          v83[9] = v30;
          LODWORD(v83[8]) = hAsyncEvent_high;
          if ( Value )
            v83[7] = (char *)v81 + hAsyncEvent_high;
          LODWORD(v83[6]) = Value;
          if ( hAsyncEvent )
            v83[5] = (char *)v81 + v16;
          v31 = *(_QWORD *)this;
          LODWORD(v83[4]) = hAsyncEvent;
          Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                       (struct _DXGK_ALLOCATIONINFO *)a2,
                       (__int64)v83,
                       0,
                       v31,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0LL);
          if ( Resident < 0 )
          {
            v69 = WdLogNewEntry5_WdEvent(v33, v32);
            *(_QWORD *)(v69 + 24) = this;
            *(_QWORD *)(v69 + 32) = *(_QWORD *)this;
            WdLogEvent5_WdEvent(v69);
LABEL_60:
            operator delete[](v81);
            goto LABEL_62;
          }
          v34 = *((_QWORD *)this + 1);
          v35 = v83[10];
          *((_DWORD *)this + 22) = v83[10];
          v36 = *(_QWORD *)(v34 + 40);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v36 + 208));
          v37 = (v35 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v37 < *(_DWORD *)(v36 + 256) )
          {
            v38 = *(_QWORD *)(v36 + 240);
            v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
            if ( ((v35 >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
              && (v39 & 0x2000) == 0
              && (v39 & 0x1F) != 0 )
            {
              v40 = v39 & 0x1F;
              if ( (_BYTE)v40 == 4 )
              {
                v42 = *(struct _EX_RUNDOWN_REF **)(v38 + 16LL * (unsigned int)v37);
                goto LABEL_30;
              }
              v41 = WdLogNewEntry5_WdError(v40, 2LL * (unsigned int)v37);
              *(_QWORD *)(v41 + 24) = 316LL;
              WdLogEvent5_WdError(v41);
            }
          }
          v42 = 0LL;
LABEL_30:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v80, v42);
          ExReleasePushLockSharedEx(v36 + 208, 0LL);
          KeLeaveCriticalRegion();
          v47 = v80;
          if ( v80 )
          {
            Count = v80[3].Count;
            v49 = 0;
            v50 = *(unsigned int *)(Count + 16);
            *((_DWORD *)this + 23) = v50;
            v51 = (_QWORD *)*((_QWORD *)a2 + 2);
            PagingFenceValue = 0LL;
            v75 = 0LL;
            v79 = 0LL;
            v52 = v47[3].Count;
            Current = DXGPROCESS::GetCurrent(Count, v50, v45, v46);
            v54 = *((_BYTE *)a2 + 1869);
            v55 = (int *)Current;
            v76 = v51[2];
            v56 = v54 & 1;
            if ( !v56
              && (DXGDEVICE::UmdManagesResidency(a2)
               || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2060LL) & 0x40) != 0) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v51[80] + 8LL) + 984LL))(
                *((_QWORD *)a2 + 95),
                (*(_DWORD *)(v52 + 72) >> 12) & 0x3F,
                &v75,
                &v79);
            }
            if ( DXGDEVICE::UmdManagesResidency(a2) )
            {
              v74 = 0LL;
              v78 = 0LL;
              if ( v56 )
              {
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                  (DXGALLOCATIONREFERENCE *)&v77,
                  (struct _EX_RUNDOWN_REF *)v52);
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v76 + 4240),
                             (unsigned int)v55[106],
                             *((_DWORD *)a2 + 110),
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)&v77,
                             &v74,
                             &v78);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77, v58);
              }
              else
              {
                Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, __int64, int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)(v51[80] + 8LL) + 776LL))(
                             v51[81],
                             v75,
                             v52 + 24,
                             1LL,
                             3,
                             &v74,
                             &v78);
              }
              if ( Resident >= 0 )
              {
                if ( Resident == 259 )
                {
                  v49 = 1;
                  PagingFenceValue = v74;
                  Resident = 0;
                }
              }
              else
              {
                v61 = WdLogNewEntry5_WdWarning(v59, v57, v60);
                *(_QWORD *)(v61 + 24) = Resident;
                WdLogEvent5_WdWarning(v61);
              }
            }
            if ( Resident >= 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2060LL) & 0x40) != 0 )
              {
                memset(&v84, 0, sizeof(v84));
                v62 = v51[2];
                v84.Protection.Value = 1LL;
                v84.MinimumAddress = *(_QWORD *)(v62 + 2544);
                v84.MaximumAddress = *(_QWORD *)(v62 + 2552);
                if ( v56 )
                {
                  v63 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v76 + 4240),
                          v55[106],
                          a2,
                          0,
                          *(_DWORD *)(v52 + 16),
                          &v84);
                }
                else
                {
                  *(_BYTE *)&v72.0 = 1;
                  v63 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, struct D3DDDI_MAKERESIDENT_FLAGS, int))(*(_QWORD *)(v51[80] + 8LL) + 800LL))(
                          v51[81],
                          v75,
                          *(_QWORD *)(v52 + 24),
                          &v84,
                          v72,
                          -2);
                }
                Resident = v63;
                if ( v63 >= 0 )
                {
                  if ( v63 == 259 )
                  {
                    v49 = 1;
                    PagingFenceValue = v84.PagingFenceValue;
                    Resident = 0;
                  }
                }
                else
                {
                  v66 = WdLogNewEntry5_WdWarning(v64, v57, v65);
                  *(_QWORD *)(v66 + 24) = Resident;
                  WdLogEvent5_WdWarning(v66);
                }
              }
              if ( v49 )
              {
                if ( v56 )
                {
                  v67 = *((unsigned int *)a2 + 110);
                  v82.ObjectHandleArray = 0LL;
                  v82.hDevice = v67;
                  v82.ObjectCount = 1;
                  *(_OWORD *)&v82.hAsyncEvent = 0LL;
                  v82.FenceValueArray = &PagingFenceValue;
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v76 + 4240),
                               (struct DXGPROCESS *)v55,
                               v67,
                               &v82,
                               1u);
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, unsigned __int64 *, __int64))(*(_QWORD *)(v51[80] + 8LL)
                                                                                         + 992LL))(
                    v51[81],
                    &v79,
                    &PagingFenceValue,
                    1LL);
                }
              }
            }
          }
          else
          {
            v68 = WdLogNewEntry5_WdError(v44, v43);
            *(_QWORD *)(v68 + 24) = this;
            *(_QWORD *)(v68 + 32) = *((unsigned int *)this + 22);
            WdLogEvent5_WdError(v68);
            Resident = -1073741811;
          }
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v80, v57);
          goto LABEL_60;
        }
      }
LABEL_61:
      v70 = WdLogNewEntry5_WdLowResource(PoolWithTag, v25, v27, v28);
      *(_QWORD *)(v70 + 24) = 278LL;
      WdLogEvent5_WdLowResource(v70);
      Resident = -1073741801;
LABEL_62:
      if ( P != v86 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return (unsigned int)Resident;
    }
    v71 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v71 + 24) = 257LL;
  }
  WdLogEvent5_WdError(v71);
  return 3221225621LL;
}

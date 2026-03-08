/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0328A78
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C03285FC (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0006768 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0184E44 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0185514 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C018555C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0386678 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C03868F8 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C038C34C (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int Resident; // edi
  __int64 hAsyncEvent_high; // r14
  struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A Value; // r12d
  UINT v10; // r15d
  int hAsyncEvent; // r13d
  UINT v12; // eax
  __int64 v13; // rdi
  int v14; // edi
  _BYTE *Pool2; // rcx
  void *v16; // rax
  char v17; // r12
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // r13
  unsigned int v22; // eax
  __int64 v23; // r8
  int v24; // ecx
  struct _EX_RUNDOWN_REF *v25; // rdx
  struct _EX_RUNDOWN_REF *v26; // rax
  ULONG_PTR Count; // rcx
  _QWORD *v28; // r14
  ULONG_PTR v29; // r13
  struct DXGPROCESS *Current; // rax
  char v31; // r15
  char v32; // r15
  __int64 v33; // rcx
  int v34; // eax
  D3DKMT_HANDLE v35; // r8d
  int v36; // [rsp+20h] [rbp-E0h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  struct DXGPROCESS *v41; // [rsp+70h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v42; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v45; // [rsp+90h] [rbp-70h] BYREF
  void *v46; // [rsp+98h] [rbp-68h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v47; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v48[14]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v49; // [rsp+140h] [rbp+40h] BYREF
  PVOID P; // [rsp+1B0h] [rbp+B0h]
  _BYTE v51[320]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v52; // [rsp+2F8h] [rbp+1F8h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 231LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      231LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *(_QWORD *)this;
  memset(&v47, 0, sizeof(v47));
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)a2, &v47, v4, v5);
  if ( Resident < 0 )
  {
    WdLogSingleEntry1(4LL, a2);
    return (unsigned int)Resident;
  }
  hAsyncEvent_high = HIDWORD(v47.hAsyncEvent);
  Value = (struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A)v47.Flags.Value;
  v10 = HIDWORD(v47.hAsyncEvent) + v47.Flags.Value;
  if ( HIDWORD(v47.hAsyncEvent) + v47.Flags.Value < HIDWORD(v47.hAsyncEvent) )
  {
    WdLogSingleEntry1(2LL, 247LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Overflow while calculating buffer size",
      247LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    hAsyncEvent = (int)v47.hAsyncEvent;
    v12 = v10 + LODWORD(v47.hAsyncEvent);
    if ( v10 + LODWORD(v47.hAsyncEvent) >= v10 )
    {
      v13 = v12;
      v46 = (void *)operator new[](v12, 0x674D444Fu, 256LL);
      if ( !v46 )
      {
        WdLogSingleEntry2(6LL, this, (unsigned int)v13);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"KeyedMutex 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
          (__int64)this,
          v13,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      memset(v48, 0, 0x68uLL);
      P = 0LL;
      v52 = 0;
      v14 = *((_DWORD *)&v47.Flags + 1);
      if ( *((_DWORD *)&v47.Flags + 1) <= 4u )
      {
        Pool2 = v51;
        P = v51;
        if ( *((_DWORD *)&v47.Flags + 1) )
        {
          memset(v51, 0, 80LL * *((unsigned int *)&v47.Flags + 1));
          Pool2 = P;
        }
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v47.Flags + 1) < 0x50 )
        {
LABEL_16:
          WdLogSingleEntry1(6LL, 274LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
            274LL,
            0LL,
            0LL,
            0LL,
            0LL);
          Resident = -1073741801;
          goto LABEL_61;
        }
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * *((unsigned int *)&v47.Flags + 1), 1265072196LL);
        P = Pool2;
      }
      v52 = v14;
      if ( !Pool2 )
        goto LABEL_16;
      LODWORD(v48[0]) = *((_DWORD *)a2 + 117);
      v16 = (void *)v48[9];
      v48[3] = Pool2;
      if ( (_DWORD)hAsyncEvent_high )
        v16 = v46;
      LODWORD(v48[2]) = v14;
      v48[9] = v16;
      LODWORD(v48[8]) = hAsyncEvent_high;
      if ( Value )
        v48[7] = (char *)v46 + hAsyncEvent_high;
      LODWORD(v48[6]) = Value;
      v17 = 0;
      if ( hAsyncEvent )
        v48[5] = (char *)v46 + v10;
      v18 = *(_QWORD *)this;
      LODWORD(v48[4]) = hAsyncEvent;
      Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                   a2,
                   (__int64)v48,
                   0,
                   v18,
                   0,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   0LL);
      if ( Resident < 0 )
      {
        WdLogSingleEntry2(4LL, this, *(_QWORD *)this);
        goto LABEL_60;
      }
      v19 = *((_QWORD *)this + 1);
      v20 = v48[10];
      *((_DWORD *)this + 22) = v48[10];
      v21 = *(_QWORD *)(v19 + 40);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 248));
      v22 = (v20 >> 6) & 0xFFFFFF;
      if ( v22 < *(_DWORD *)(v21 + 296) )
      {
        v23 = *(_QWORD *)(v21 + 280);
        if ( ((v20 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60)
          && (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) == 0 )
        {
          v24 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
          if ( v24 )
          {
            if ( v24 == 4 )
            {
              v25 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * v22);
LABEL_31:
              DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v45, v25);
              _InterlockedDecrement((volatile signed __int32 *)(v21 + 264));
              ExReleasePushLockSharedEx(v21 + 248, 0LL);
              KeLeaveCriticalRegion();
              v26 = v45;
              if ( !v45 )
              {
                WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 22));
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"KeyedMutex 0x%I64x failed to find resource for handle 0x%I64x",
                  (__int64)this,
                  *((unsigned int *)this + 22),
                  0LL,
                  0LL,
                  0LL);
                Resident = -1073741811;
                goto LABEL_58;
              }
              Count = v45[3].Count;
              *((_DWORD *)this + 23) = *(_DWORD *)(Count + 16);
              v28 = (_QWORD *)*((_QWORD *)a2 + 2);
              PagingFenceValue = 0LL;
              v39 = 0LL;
              v44 = 0LL;
              v29 = v26[3].Count;
              Current = DXGPROCESS::GetCurrent(Count);
              v31 = *((_BYTE *)a2 + 1901);
              v41 = Current;
              v40 = v28[2];
              v32 = v31 & 1;
              if ( !v32
                && (DXGDEVICE::UmdManagesResidency(a2)
                 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2284LL) & 0x40) != 0) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v28[95] + 8LL) + 976LL))(
                  *((_QWORD *)a2 + 99),
                  (*(_DWORD *)(v29 + 72) >> 12) & 0x3F,
                  &v39,
                  &v44);
              }
              if ( DXGDEVICE::UmdManagesResidency(a2) )
              {
                v38 = 0LL;
                v43 = 0LL;
                if ( v32 )
                {
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                    (DXGALLOCATIONREFERENCE *)&v42,
                    (struct _EX_RUNDOWN_REF *)v29);
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v40 + 4472),
                               *((_DWORD *)v41 + 126),
                               *((_DWORD *)a2 + 118),
                               0,
                               (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                               1u,
                               (const struct DXGALLOCATIONREFERENCE *)&v42,
                               &v38,
                               &v43);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42);
                }
                else
                {
                  Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, __int64, int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)(v28[95] + 8LL) + 768LL))(
                               v28[96],
                               v39,
                               v29 + 24,
                               1LL,
                               3,
                               &v38,
                               &v43);
                }
                if ( Resident < 0 )
                {
                  WdLogSingleEntry1(3LL, Resident);
LABEL_58:
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v45);
LABEL_60:
                  operator delete(v46);
LABEL_61:
                  if ( P != v51 )
                  {
                    if ( P )
                      ExFreePoolWithTag(P, 0);
                  }
                  return (unsigned int)Resident;
                }
                if ( Resident == 259 )
                {
                  v17 = 1;
                  PagingFenceValue = v38;
                  Resident = 0;
                }
              }
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2284LL) & 0x40) != 0 )
              {
                memset(&v49, 0, sizeof(v49));
                v33 = v28[2];
                v49.Protection.Value = 1LL;
                v49.MinimumAddress = *(_QWORD *)(v33 + 2768);
                v49.MaximumAddress = *(_QWORD *)(v33 + 2776);
                if ( v32 )
                {
                  v34 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v40 + 4472),
                          *((_DWORD *)v41 + 126),
                          a2,
                          0,
                          *(_DWORD *)(v29 + 16),
                          &v49);
                }
                else
                {
                  LOBYTE(v36) = 1;
                  v34 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v28[95] + 8LL) + 792LL))(
                          v28[96],
                          v39,
                          *(_QWORD *)(v29 + 24),
                          &v49,
                          v36,
                          -2);
                }
                Resident = v34;
                if ( v34 >= 0 )
                {
                  if ( v34 == 259 )
                  {
                    PagingFenceValue = v49.PagingFenceValue;
                    Resident = 0;
                    goto LABEL_52;
                  }
                }
                else
                {
                  WdLogSingleEntry1(3LL, v34);
                }
              }
              if ( !v17 )
                goto LABEL_58;
LABEL_52:
              if ( v32 )
              {
                v35 = *((_DWORD *)a2 + 118);
                v47.ObjectHandleArray = 0LL;
                *(_OWORD *)&v47.hAsyncEvent = 0LL;
                v47.hDevice = v35;
                v47.ObjectCount = 1;
                v47.FenceValueArray = &PagingFenceValue;
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v40 + 4472),
                             v41,
                             v35,
                             &v47,
                             1u);
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, __int64 *, unsigned __int64 *, __int64))(*(_QWORD *)(v28[95] + 8LL)
                                                                                       + 984LL))(
                  v28[96],
                  &v44,
                  &PagingFenceValue,
                  1LL);
              }
              goto LABEL_58;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v25 = 0LL;
      goto LABEL_31;
    }
    WdLogSingleEntry1(2LL, 253LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Overflow while calculating buffer size",
      253LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225621LL;
}

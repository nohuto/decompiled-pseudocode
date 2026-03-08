/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03CD888
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CE0B0 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01881E4 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4968 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0385DF8 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0386678 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C03CCD2C (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall BLTQUEUE::PrepareStagingBuffer(
        BLTQUEUE *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  struct COREDEVICEACCESS *v5; // r13
  __int64 v6; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  int v12; // edx
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // eax
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v27; // esi
  struct DXGPROCESS *v28; // r13
  volatile signed __int32 *v29; // r14
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  struct _EX_RUNDOWN_REF *v35; // rdx
  struct COREDEVICEACCESS *v36; // rax
  int Resident; // eax
  D3DKMT_HANDLE v38; // eax
  int v39; // eax
  UINT Width; // ecx
  UINT Height; // eax
  unsigned int v43[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v45; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_LOCK2 v46; // [rsp+90h] [rbp-70h] BYREF
  DXGSYNCOBJECT *v47; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v48[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v49[54]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v50[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v51; // [rsp+2C8h] [rbp+1C8h]

  *(_QWORD *)v43 = a4;
  v5 = a4;
  v6 = a3;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 4384LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      4384LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)a2 + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 248));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v10 < *(_DWORD *)(v9 + 296)
    && (v11 = *(_QWORD *)(v9 + 280), (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60))
    && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0
    && (v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F) != 0 )
  {
    if ( v12 == 5 )
    {
      v13 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * v10);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v13);
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 264));
  ExReleasePushLockSharedEx(v9 + 248, 0LL);
  KeLeaveCriticalRegion();
  memset(&v45, 0, sizeof(v45));
  if ( !v44 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, this, v6);
    goto LABEL_18;
  }
  v14 = *((_QWORD *)a2 + 2);
  v15 = *(_QWORD *)(v44[1].Count + 16);
  if ( *(_QWORD *)(v15 + 16) == *(_QWORD *)(v14 + 16) )
  {
    v45.hAllocation = *(HANDLE *)(v44[6].Count + 16);
    v17 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 2928LL), &v45, v15);
    v16 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry1(2LL, v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DdiDescribeAllocation failed: 0x%I64x",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_54;
    }
LABEL_18:
    if ( !*((_DWORD *)this + 704) )
    {
      *((_QWORD *)this + 354) = 0LL;
      memset(v48, 0, sizeof(v48));
      v18 = *((_DWORD *)a2 + 117);
      v19 = *((_QWORD *)a2 + 2);
      HIDWORD(v48[1]) |= 0x80u;
      LODWORD(v48[0]) = v18;
      LODWORD(v48[1]) = 5;
      v20 = CreateSynchronizationObjectInternal(
              (__int64)a2,
              0,
              v19,
              (__int64)v48,
              0xCu,
              0,
              &v47,
              (struct DXGDEVICESYNCOBJECT **)this + 353,
              0LL);
      v8 = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry2(2LL, v20, 4443LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkCreateSynchronizationObjectInternal failed: 0x%I64x",
          v8,
          4443LL,
          0LL,
          0LL,
          0LL);
LABEL_53:
        LODWORD(v16) = v8;
        goto LABEL_54;
      }
      v21 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v21 + 248));
      v22 = (LODWORD(v48[11]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v22 < *(_DWORD *)(v21 + 296) )
      {
        v23 = *(_QWORD *)(v21 + 280);
        if ( ((LODWORD(v48[11]) >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
          && (*(_DWORD *)(v23 + 16 * v22 + 8) & 0x1F) != 0 )
        {
          v24 = 2 * ((v48[11] >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v23 + 16 * ((v48[11] >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v21 + 280) + 8 * v24 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v21 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v21 + 248, 0LL);
      KeLeaveCriticalRegion();
      v5 = *(struct COREDEVICEACCESS **)v43;
      *((_DWORD *)this + 704) = v48[11];
    }
    if ( *((_DWORD *)this + 698) )
    {
      if ( v45.Width != *((_DWORD *)this + 700) || v45.Height != *((_DWORD *)this + 701) )
        BLTQUEUE::DestroyStagingBuffer(this);
      if ( *((_DWORD *)this + 698) )
        goto LABEL_53;
    }
    memset(v49, 0, 0x1A8uLL);
    v50[0] = v45.Width;
    v50[1] = v45.Height;
    v51 = 0;
    v49[3] = v50;
    HIDWORD(v49[0]) = 0;
    LODWORD(v49[2]) = 3;
    LODWORD(v8) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v49, v5);
    if ( (int)v8 < 0 )
      goto LABEL_53;
    *((_DWORD *)this + 696) = HIDWORD(v49[6]);
    *((_DWORD *)this + 698) = v49[1];
    Current = DXGPROCESS::GetCurrent(v25);
    v27 = HIDWORD(v49[6]);
    v28 = Current;
    v29 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v30 = (v27 >> 6) & 0xFFFFFF;
    if ( v30 < *((_DWORD *)v28 + 74) )
    {
      v31 = *((_QWORD *)v28 + 35);
      v32 = 2LL * v30;
      v33 = *(_DWORD *)(v31 + 16LL * v30 + 8);
      if ( ((v27 >> 25) & 0x60) == (v33 & 0x60) && (v33 & 0x2000) == 0 )
      {
        v34 = v33 & 0x1F;
        if ( v34 )
        {
          if ( v34 == 5 )
          {
            v35 = *(struct _EX_RUNDOWN_REF **)(v31 + 8 * v32);
            goto LABEL_41;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v35 = 0LL;
LABEL_41:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v43, v35);
    _InterlockedDecrement(v29 + 4);
    ExReleasePushLockSharedEx(v29, 0LL);
    KeLeaveCriticalRegion();
    v36 = *(struct COREDEVICEACCESS **)v43;
    if ( !*(_QWORD *)v43 )
    {
      WdLogSingleEntry1(1LL, 4488LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"AllocRef.m_pAllocation != NULL",
        4488LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v36 = *(struct COREDEVICEACCESS **)v43;
    }
    *((_DWORD *)this + 697) = *((_DWORD *)v36 + 5);
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4472LL),
                 *((_DWORD *)v28 + 126),
                 *((_DWORD *)a2 + 118),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)v43,
                 0LL,
                 0LL);
    v8 = Resident;
    if ( Resident >= 0 )
    {
      v38 = *((_DWORD *)this + 696);
      memset(&v46, 0, sizeof(v46));
      v46.hAllocation = v38;
      LODWORD(v8) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4472LL),
                      v28,
                      a2,
                      &v46,
                      0);
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry1(2LL, 4514LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed", 4514LL, 0LL, 0LL, 0LL, 0LL);
      }
      *((_QWORD *)this + 351) = v46.pData;
      if ( (int)v8 >= 0 )
      {
        v39 = v51;
        if ( !v51 )
        {
          WdLogSingleEntry1(1LL, 4520LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"0 != StagingSurfaceData.Pitch",
            4520LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v39 = v51;
        }
        Width = v45.Width;
        *((_QWORD *)this + 355) = 0LL;
        *((_DWORD *)this + 699) = v39;
        Height = v45.Height;
        *((_DWORD *)this + 701) = v45.Height;
        *((_DWORD *)this + 713) = Height;
        *((_DWORD *)this + 700) = Width;
        *((_DWORD *)this + 712) = Width;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, Resident);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v43);
    goto LABEL_53;
  }
  LODWORD(v16) = -1073741811;
  WdLogSingleEntry3(2LL, a2, v44, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    (__int64)a2,
    (__int64)v44,
    -1073741811LL,
    0LL,
    0LL);
LABEL_54:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
  return (unsigned int)v16;
}

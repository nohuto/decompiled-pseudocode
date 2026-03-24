/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE29C
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE9E4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0119EC8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0249D50 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C024A2B8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C02FD78C (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall BLTQUEUE::PrepareStagingBuffer(
        BLTQUEUE *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rax
  struct COREDEVICEACCESS *v6; // r13
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r15
  int v42; // r12d
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rax
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct DXGPROCESS *Current; // rax
  unsigned int v52; // esi
  struct DXGPROCESS *v53; // r15
  char *v54; // r13
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  struct _EX_RUNDOWN_REF *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  struct COREDEVICEACCESS *v66; // rax
  __int64 v67; // rax
  int Resident; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  D3DKMT_HANDLE v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rax
  UINT Width; // ecx
  UINT Height; // eax
  struct _OBJECT_HANDLE_INFORMATION *v81; // [rsp+20h] [rbp-E0h]
  unsigned int v82[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v83; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v84; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_LOCK2 v85; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v86[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v87[54]; // [rsp+110h] [rbp+10h] BYREF
  DXGSYNCOBJECT *v88; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v89; // [rsp+2C8h] [rbp+1C8h]

  v4 = *((_QWORD *)a2 + 2);
  v6 = a4;
  *(_QWORD *)v82 = a4;
  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 4257LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)a2 + 5);
  LODWORD(v13) = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *(_DWORD *)(v12 + 232);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventBlockThread, v15, v16);
    }
    ExAcquirePushLockSharedEx(v12 + 208, 0LL);
  }
  v17 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *(_DWORD *)(v12 + 256) )
    goto LABEL_15;
  v18 = *(_QWORD *)(v12 + 240);
  v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_15;
  }
  v20 = v19 & 0x1F;
  if ( (_BYTE)v20 != 5 )
  {
    v21 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60, v20);
    *(_QWORD *)(v21 + 24) = 316LL;
    WdLogEvent5_WdError(v21);
LABEL_15:
    v22 = 0LL;
    goto LABEL_16;
  }
  v22 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * (unsigned int)v17);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83, v22);
  ExReleasePushLockSharedEx(v12 + 208, 0LL);
  KeLeaveCriticalRegion();
  memset(&v84, 0, sizeof(v84));
  if ( !v83 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v34[3] = -1073741811LL;
    v34[4] = this;
    v34[5] = v7;
    WdLogEvent5_WdWarning(v34);
    goto LABEL_24;
  }
  v26 = *((_QWORD *)a2 + 2);
  v27 = *(_QWORD *)(v83[1].Count + 16);
  v28 = *(_QWORD *)(v26 + 16);
  if ( *(_QWORD *)(v27 + 16) == v28 )
  {
    v84.hAllocation = *(HANDLE *)(v83[6].Count + 16);
    v31 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v26 + 16) + 2704LL), &v84, v26);
    v30 = v31;
    if ( v31 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
      v29[3] = v30;
      goto LABEL_22;
    }
LABEL_24:
    if ( !*((_DWORD *)this + 700) )
    {
      *((_QWORD *)this + 352) = 0LL;
      memset(v86, 0, sizeof(v86));
      v35 = *((_DWORD *)a2 + 109);
      v36 = *((_QWORD *)a2 + 2);
      HIDWORD(v86[1]) |= 0x80u;
      LODWORD(v86[0]) = v35;
      LODWORD(v81) = 12;
      LODWORD(v86[1]) = 5;
      v37 = CreateSynchronizationObjectInternal(
              (__int64)a2,
              0,
              v36,
              (__int64)v86,
              v81,
              0,
              &v88,
              (__int64 *)this + 351,
              0LL);
      v13 = v37;
      if ( v37 < 0 )
      {
        v40 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v40 + 24) = v13;
        *(_QWORD *)(v40 + 32) = 4316LL;
        WdLogEvent5_WdError(v40);
LABEL_65:
        LODWORD(v30) = v13;
        goto LABEL_66;
      }
      v41 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v41 + 208));
      v42 = v86[11];
      v43 = (LODWORD(v86[11]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v43 < *(_DWORD *)(v41 + 256) )
      {
        v44 = *(_QWORD *)(v41 + 240);
        if ( ((LODWORD(v86[11]) >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60)
          && (*(_DWORD *)(v44 + 16 * v43 + 8) & 0x1F) != 0 )
        {
          v45 = 2 * ((v86[11] >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v44 + 16 * ((v86[11] >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            v46 = WdLogNewEntry5_WdAssertion((LODWORD(v86[11]) >> 25) & 0x60, v44);
            *(_QWORD *)(v46 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v46);
            v44 = *(_QWORD *)(v41 + 240);
          }
          *(_DWORD *)(v44 + 8 * v45 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v41 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v41 + 208, 0LL);
      KeLeaveCriticalRegion();
      v6 = *(struct COREDEVICEACCESS **)v82;
      *((_DWORD *)this + 700) = v42;
    }
    v47 = *((_DWORD *)this + 694);
    if ( v47 )
    {
      if ( v84.Width != *((_DWORD *)this + 696) || v84.Height != *((_DWORD *)this + 697) )
      {
        BLTQUEUE::DestroyStagingBuffer(this);
        v47 = *((_DWORD *)this + 694);
      }
      if ( v47 )
        goto LABEL_65;
    }
    memset(v87, 0, 0x1A8uLL);
    v88 = *(DXGSYNCOBJECT **)&v84.Width;
    v89 = 0;
    HIDWORD(v87[0]) = 0;
    LODWORD(v87[2]) = 3;
    v87[3] = &v88;
    LODWORD(v13) = DXGDEVICE::CreateStandardAllocation(
                     (struct _DXGK_ALLOCATIONINFO *)a2,
                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v87,
                     v6);
    if ( (int)v13 < 0 )
      goto LABEL_65;
    *((_DWORD *)this + 692) = HIDWORD(v87[6]);
    *((_DWORD *)this + 694) = v87[1];
    Current = DXGPROCESS::GetCurrent(v48, v32, v49, v50);
    v52 = HIDWORD(v87[6]);
    v53 = Current;
    v54 = (char *)Current + 208;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v54, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v57 = *((_DWORD *)v54 + 6);
        if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v55, &EventBlockThread, v56, v57);
      }
      ExAcquirePushLockSharedEx(v54, 0LL);
    }
    v58 = (v52 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v58 < *((_DWORD *)v53 + 64) )
    {
      v59 = *((_QWORD *)v53 + 30);
      v60 = *(_DWORD *)(v59 + 16 * v58 + 8);
      if ( ((v52 >> 25) & 0x60) == (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x60) && (v60 & 0x2000) == 0 && (v60 & 0x1F) != 0 )
      {
        v61 = v60 & 0x1F;
        if ( (_BYTE)v61 == 5 )
        {
          v63 = *(struct _EX_RUNDOWN_REF **)(v59 + 16LL * (unsigned int)v58);
          goto LABEL_53;
        }
        v62 = WdLogNewEntry5_WdError(v61, 2LL * (unsigned int)v58);
        *(_QWORD *)(v62 + 24) = 316LL;
        WdLogEvent5_WdError(v62);
      }
    }
    v63 = 0LL;
LABEL_53:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v82, v63);
    ExReleasePushLockSharedEx(v54, 0LL);
    KeLeaveCriticalRegion();
    v66 = *(struct COREDEVICEACCESS **)v82;
    if ( !*(_QWORD *)v82 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v65, v64);
      *(_QWORD *)(v67 + 24) = 4361LL;
      WdLogEvent5_WdAssertion(v67);
      v66 = *(struct COREDEVICEACCESS **)v82;
    }
    *((_DWORD *)this + 693) = *((_DWORD *)v66 + 24);
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4240LL),
                 *((unsigned int *)v53 + 106),
                 *((_DWORD *)a2 + 110),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)v82,
                 0LL,
                 0LL);
    v13 = Resident;
    if ( Resident >= 0 )
    {
      v73 = *((_DWORD *)this + 692);
      memset(&v85, 0, sizeof(v85));
      v85.hAllocation = v73;
      LODWORD(v13) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4240LL),
                       v53,
                       a2,
                       &v85,
                       0);
      if ( (int)v13 < 0 )
      {
        v75 = WdLogNewEntry5_WdError(v74, v72);
        *(_QWORD *)(v75 + 24) = 4387LL;
        WdLogEvent5_WdError(v75);
      }
      *((_QWORD *)this + 349) = v85.pData;
      if ( (int)v13 >= 0 )
      {
        v76 = v89;
        if ( !v89 )
        {
          v77 = WdLogNewEntry5_WdAssertion(v74, v72);
          *(_QWORD *)(v77 + 24) = 4393LL;
          WdLogEvent5_WdAssertion(v77);
          v76 = v89;
        }
        Width = v84.Width;
        *((_QWORD *)this + 353) = 0LL;
        *((_DWORD *)this + 695) = v76;
        Height = v84.Height;
        *((_DWORD *)this + 697) = v84.Height;
        *((_DWORD *)this + 709) = Height;
        *((_DWORD *)this + 696) = Width;
        *((_DWORD *)this + 708) = Width;
      }
    }
    else
    {
      v71 = WdLogNewEntry5_WdError(v70, v69);
      *(_QWORD *)(v71 + 24) = v13;
      WdLogEvent5_WdError(v71);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v82, v72);
    goto LABEL_65;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
  LODWORD(v30) = -1073741811;
  v29[3] = a2;
  v29[4] = v83;
  v29[5] = -1073741811LL;
LABEL_22:
  WdLogEvent5_WdError(v29);
LABEL_66:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v83, v32);
  return (unsigned int)v30;
}

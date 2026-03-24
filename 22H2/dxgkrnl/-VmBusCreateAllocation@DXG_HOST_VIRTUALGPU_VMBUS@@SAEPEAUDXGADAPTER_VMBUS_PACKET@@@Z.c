/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000E5CC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00269AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00F9FD0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  unsigned int v21; // edi
  unsigned int v22; // r11d
  SIZE_T v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  SIZE_T v26; // rax
  _DWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned int v33; // r12d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *p_hAllocation; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // r10d
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  char Flags; // al
  __int64 v49; // rax
  unsigned int v50; // r13d
  char *v51; // r12
  unsigned int v52; // ebx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rax
  struct _EX_RUNDOWN_REF *v61; // rdx
  struct _EX_RUNDOWN_REF *v62; // r9
  __int64 v63; // rdi
  int v64; // edx
  int v65; // ecx
  int v66; // edx
  int v67; // ecx
  int v68; // edx
  int v69; // ecx
  int v70; // edx
  int v71; // ecx
  int v72; // edx
  int v73; // r8d
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 v75; // rcx
  char *v76; // rbx
  __int64 v77; // r8
  __int64 v78; // rdx
  struct DXGDEVICE *Count; // rbx
  __int64 v80; // r9
  __int64 v81; // rdi
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rax
  struct _EX_RUNDOWN_REF *v88; // [rsp+48h] [rbp-C0h] BYREF
  void *v89; // [rsp+50h] [rbp-B8h]
  __int64 v90; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v91; // [rsp+60h] [rbp-A8h]
  void *v92; // [rsp+68h] [rbp-A0h]
  struct DXGPROCESS *v93; // [rsp+70h] [rbp-98h]
  __int64 v94; // [rsp+78h] [rbp-90h] BYREF
  __int64 v95; // [rsp+80h] [rbp-88h] BYREF
  void *v96; // [rsp+88h] [rbp-80h]
  struct _D3DKMT_CREATEALLOCATION v97; // [rsp+98h] [rbp-70h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-20h]
  __int64 v99; // [rsp+F0h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v100; // [rsp+F8h] [rbp-10h]
  _BYTE v101[24]; // [rsp+100h] [rbp-8h] BYREF
  char v102[8]; // [rsp+118h] [rbp+10h] BYREF
  char v103[64]; // [rsp+120h] [rbp+18h] BYREF
  char v104[88]; // [rsp+160h] [rbp+58h] BYREF

  v100 = a1;
  v2 = 0;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v7 )
    return 0;
  Current = DXGPROCESS::GetCurrent(v4, v3, v5, v6);
  v11 = *(unsigned int *)(v7 + 40);
  v93 = Current;
  v98 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( !(_DWORD)v11 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 983LL;
    goto LABEL_72;
  }
  if ( (*(_DWORD *)(v7 + 44) & 0x1000) != 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 989LL;
    goto LABEL_72;
  }
  v13 = 12 * v11;
  if ( 12 * v11 > 0xFFFFFFFF )
  {
    v12 = WdLogNewEntry5_WdError(v10, v13);
    *(_QWORD *)(v12 + 24) = 996LL;
LABEL_72:
    WdLogEvent5_WdError(v12);
    return 0;
  }
  v14 = *((unsigned int *)a1 + 22);
  if ( v14 - 64 < (unsigned __int64)(unsigned int)v13 )
  {
    v12 = WdLogNewEntry5_WdError(v14 - 64, v13);
    *(_QWORD *)(v12 + 24) = 1002LL;
    goto LABEL_72;
  }
  v15 = *(unsigned int *)(v7 + 32);
  v16 = v13 + 64;
  LODWORD(v89) = v15;
  if ( (int)v14 - ((int)v13 + 64) < (unsigned int)v15 )
  {
    v12 = WdLogNewEntry5_WdError(v15, v13);
    *(_QWORD *)(v12 + 24) = 1008LL;
    goto LABEL_72;
  }
  v17 = *(unsigned int *)(v7 + 36);
  v18 = v16 + (unsigned int)v15;
  if ( (int)v14 - (int)v18 < (unsigned int)v17 )
  {
    v12 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v12 + 24) = 1014LL;
    goto LABEL_72;
  }
  v19 = v17 + v18;
  v20 = 0LL;
  v21 = v19;
  do
  {
    v22 = *(_DWORD *)(v7 + 12LL * (unsigned int)v20 + 68);
    if ( (unsigned int)v14 - v21 < v22 )
    {
      v12 = WdLogNewEntry5_WdError(3LL * (unsigned int)v20, v20);
      *(_QWORD *)(v12 + 24) = 1025LL;
      goto LABEL_72;
    }
    v21 += v22;
    v20 = (unsigned int)(v20 + 1);
  }
  while ( (unsigned int)v20 < (unsigned int)v11 );
  v23 = 96 * v11;
  if ( !is_mul_ok(v11, 0x60uLL) )
    v23 = -1LL;
  v96 = operator new(v23, 0x4B677844u, 1, PagedPool);
  if ( !v96 )
  {
    v12 = WdLogNewEntry5_WdError(v25, v24);
    *(_QWORD *)(v12 + 24) = 1036LL;
    goto LABEL_72;
  }
  v26 = 8LL * *(unsigned int *)(v7 + 40);
  if ( !is_mul_ok(*(unsigned int *)(v7 + 40), 8uLL) )
    v26 = -1LL;
  v27 = 0LL;
  v92 = operator new(v26, 0x4B677844u, 1, PagedPool);
  if ( !v92 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
    *(_QWORD *)(v32 + 24) = 1044LL;
    WdLogEvent5_WdLowResource(v32);
    goto LABEL_70;
  }
  LODWORD(v88) = 72 * *(_DWORD *)(v7 + 40) + 16;
  v33 = v21 + (_DWORD)v88 - v19;
  LODWORD(v91) = v33;
  v27 = operator new(v33, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v27 )
  {
    v36 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v36 + 24) = 1054LL;
    goto LABEL_69;
  }
  v37 = *(unsigned int *)(v7 + 44);
  p_hAllocation = v96;
  v39 = *(unsigned int *)(v7 + 36);
  v40 = *(unsigned int *)(v7 + 40);
  v97.hDevice = *(_DWORD *)(v7 + 24);
  v97.hResource = *(_DWORD *)(v7 + 28);
  *(_QWORD *)&v97.hGlobalShare = 0LL;
  v97.pPrivateRuntimeData = (const void *)(v7 + v16);
  v97.PrivateRuntimeDataSize = *(_DWORD *)(v7 + 32);
  *(&v97.PrivateRuntimeDataSize + 1) = 0;
  *((_DWORD *)&v97.Flags + 1) = 0;
  v97.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v7 + v16 + (unsigned int)v89);
  v97.hPrivateRuntimeResourceHandle = *(HANDLE *)(v7 + 48);
  v97.PrivateDriverDataSize = v39;
  v97.NumAllocations = v40;
  v97.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v96;
  v97.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)v37;
  if ( (v37 & 0x10000) != 0 )
  {
    if ( (unsigned int)v39 < 0x18 )
    {
      v36 = WdLogNewEntry5_WdError(v37, v39);
      *(_QWORD *)(v36 + 24) = 1075LL;
      goto LABEL_69;
    }
    v97.PrivateDriverDataSize = 0;
  }
  v41 = 0;
  if ( (_DWORD)v40 )
  {
    while ( 1 )
    {
      v42 = v41;
      if ( (*(_DWORD *)(v7 + 44) & 0x20) != 0 )
      {
        p_hAllocation[12 * v41 + 1] = 4096LL;
        p_hAllocation = &v97.pAllocationInfo->hAllocation;
      }
      v40 = 3LL * v41++;
      v43 = 96 * v42;
      LODWORD(p_hAllocation[(unsigned __int64)v43 / 8 + 4]) = *(_DWORD *)(v7 + 12 * v42 + 64);
      *(UINT *)((char *)&v97.pAllocationInfo->PrivateDriverDataSize + v43) = *(_DWORD *)(v7 + 12 * v42 + 68);
      *(void **)((char *)&v97.pAllocationInfo->pPrivateDriverData + v43) = (void *)(v7 + v19);
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v97.pAllocationInfo->VidPnSourceId + v43) = *(_DWORD *)(v7 + 12 * v42 + 72);
      v19 += *(_DWORD *)(v7 + 4 * v40 + 68);
      if ( v41 >= *(_DWORD *)(v7 + 40) )
        break;
      p_hAllocation = &v97.pAllocationInfo->hAllocation;
    }
  }
  v44 = DxgkCreateAllocationInternal(&v97, (unsigned __int64 *)v92, v40);
  v47 = v44;
  if ( v44 < 0 )
  {
    v36 = WdLogNewEntry5_WdError(v46, v45);
    *(_QWORD *)(v36 + 24) = v47;
    *(_QWORD *)(v36 + 32) = 1192LL;
LABEL_69:
    WdLogEvent5_WdError(v36);
  }
  else
  {
    Flags = (char)v97.Flags;
    *v27 = v97.Flags;
    if ( (Flags & 0x40) != 0 )
    {
      if ( v97.hGlobalShare )
      {
        v49 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v49 + 24) = 1101LL;
        WdLogEvent5_WdAssertion(v49);
      }
    }
    else
    {
      v27[2] = v97.hGlobalShare;
    }
    v50 = 0;
    v27[1] = v97.hResource;
    v89 = (char *)v27 + (unsigned int)v88;
    if ( *(_DWORD *)(v7 + 40) )
    {
      v51 = (char *)v93 + 208;
      while ( 1 )
      {
        v90 = 96LL * v50;
        v52 = *(D3DKMT_HANDLE *)((char *)&v97.pAllocationInfo->hAllocation + v90);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v51, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v55 = *((_DWORD *)v51 + 6);
            if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v53, &EventBlockThread, v54, v55);
          }
          ExAcquirePushLockSharedEx(v51, 0LL);
        }
        v56 = (v52 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v56 < *((_DWORD *)v93 + 64) )
        {
          v57 = *((_QWORD *)v93 + 30);
          v58 = *(_DWORD *)(v57 + 16 * v56 + 8);
          if ( ((v52 >> 25) & 0x60) == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60)
            && (v58 & 0x2000) == 0
            && (v58 & 0x1F) != 0 )
          {
            v59 = v58 & 0x1F;
            if ( (_BYTE)v59 == 5 )
            {
              v61 = *(struct _EX_RUNDOWN_REF **)(v57 + 16LL * (unsigned int)v56);
              goto LABEL_56;
            }
            v60 = WdLogNewEntry5_WdError(v59, 2LL * (unsigned int)v56);
            *(_QWORD *)(v60 + 24) = 316LL;
            WdLogEvent5_WdError(v60);
          }
        }
        v61 = 0LL;
LABEL_56:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v88, v61);
        ExReleasePushLockSharedEx(v51, 0LL);
        KeLeaveCriticalRegion();
        v62 = v88;
        v63 = 9LL * v50;
        v27[2 * v63 + 6] ^= (v27[2 * v63 + 6] ^ *(_DWORD *)(v88[6].Count + 4)) & 1;
        v64 = v27[18 * v50 + 6] ^ ((unsigned __int8)v27[18 * v50 + 6] ^ (unsigned __int8)*(_DWORD *)(v62[6].Count + 4)) & 2;
        v27[2 * v63 + 6] = v64;
        v65 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)*(_DWORD *)(v62[6].Count + 4)) & 4;
        v27[2 * v63 + 6] = v65;
        v66 = v65 ^ ((unsigned __int8)v65 ^ (unsigned __int8)*(_DWORD *)(v62[6].Count + 4)) & 8;
        v27[2 * v63 + 6] = v66;
        v67 = v66 ^ ((unsigned __int8)v66 ^ (unsigned __int8)*(_DWORD *)(v62[6].Count + 4)) & 0x20;
        v27[2 * v63 + 6] = v67;
        v68 = v67 ^ ((unsigned __int16)v67 ^ (unsigned __int16)*(_DWORD *)(v62[6].Count + 4)) & 0x800;
        v27[2 * v63 + 6] = v68;
        v69 = v68 ^ ((unsigned __int16)v68 ^ (unsigned __int16)*(_DWORD *)(v62[6].Count + 4)) & 0x1000;
        v27[2 * v63 + 6] = v69;
        v70 = v69 ^ ((unsigned __int16)v69 ^ (unsigned __int16)*(_DWORD *)(v62[6].Count + 4)) & 0x2000;
        v27[2 * v63 + 6] = v70;
        v71 = v70 ^ ((unsigned __int16)v70 ^ (unsigned __int16)*(_DWORD *)(v62[6].Count + 4)) & 0x4000;
        v27[2 * v63 + 6] = v71;
        v72 = v71 ^ (v71 ^ *(_DWORD *)(v62[6].Count + 4)) & 0x40000;
        v27[2 * v63 + 6] = v72;
        v73 = v72 ^ (v72 ^ *(_DWORD *)(v62[6].Count + 4)) & 0x80000;
        pAllocationInfo = v97.pAllocationInfo;
        v27[2 * v63 + 6] = v73;
        v27[2 * v63 + 6] = v73 ^ (v73 ^ *(_DWORD *)(v62[6].Count + 4)) & 0x100000;
        v75 = v90;
        v27[2 * v63 + 4] = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + v90);
        v27[2 * v63 + 5] = *(_DWORD *)(v7 + 12LL * v50 + 68);
        *(_QWORD *)&v27[2 * v63 + 8] = *((_QWORD *)v92 + v50);
        memmove(
          v89,
          *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + v75),
          *(unsigned int *)(v7 + 12LL * v50 + 68));
        v76 = (char *)&v27[18 * v50];
        v89 = (char *)v89 + *(unsigned int *)(v7 + 12LL * v50 + 68);
        *((_QWORD *)v76 + 5) = *(_QWORD *)(v88[6].Count + 16);
        ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(v98 + 2704),
          (struct _DXGKARG_DESCRIBEALLOCATION *)(v76 + 40),
          v77);
        *((_QWORD *)v76 + 5) = 0LL;
        if ( *(_BYTE *)(v7 + 56) )
        {
          Count = (struct DXGDEVICE *)v88[1].Count;
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
            (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v101,
            Count);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, (__int64)Count, 0, v80, 0);
          if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v102, 0LL) >= 0
            && DXGDEVICE::UmdManagesResidency(Count) )
          {
            v81 = *((_QWORD *)Count + 2);
            v94 = 0LL;
            v90 = 0LL;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v81 + 640) + 8LL)
                                                                         + 984LL))(
              *((_QWORD *)Count + 95),
              0LL,
              &v94,
              &v90);
            v95 = 0LL;
            v99 = 0LL;
            v82 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v81 + 640) + 8LL) + 776LL))(
                    *(_QWORD *)(v81 + 648),
                    v94,
                    v88 + 3,
                    1LL,
                    3,
                    &v95,
                    &v99);
            v85 = v82;
            if ( v82 >= 0 )
            {
              if ( v82 == 259 )
                (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v81 + 640) + 8LL)
                                                                              + 992LL))(
                  *(_QWORD *)(v81 + 648),
                  &v90,
                  &v95,
                  1LL);
            }
            else
            {
              v86 = WdLogNewEntry5_WdError(v84, v83);
              *(_QWORD *)(v86 + 24) = v85;
              WdLogEvent5_WdError(v86);
            }
          }
          COREACCESS::~COREACCESS((COREACCESS *)v104);
          COREACCESS::~COREACCESS((COREACCESS *)v103);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v101);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v88, v78);
        if ( ++v50 >= *(_DWORD *)(v7 + 40) )
        {
          v33 = v91;
          break;
        }
      }
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v100 + 9), v27, v33);
    v2 = 1;
  }
LABEL_70:
  operator delete[](v96);
  operator delete[](v92);
  operator delete[](v27);
  return v2;
}

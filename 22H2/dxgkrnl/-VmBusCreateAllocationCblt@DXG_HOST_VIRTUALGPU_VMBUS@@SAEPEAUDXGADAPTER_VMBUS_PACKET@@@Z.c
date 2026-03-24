/*
 * XREFs of ?VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D80E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000E5CC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00269AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0027BC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003F96C (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAVVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1C003F9A8 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MU.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C003FA08 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00F9FD0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocationCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v1; // si
  unsigned __int64 v2; // r13
  __int64 v3; // rcx
  __int64 v4; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned int v18; // edi
  unsigned int v19; // r11d
  unsigned __int128 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int128 v23; // rax
  _DWORD *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  UINT v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *p_hAllocation; // r8
  void *v38; // rax
  UINT v39; // r10d
  unsigned int v40; // r9d
  UINT v41; // r11d
  __int64 v42; // rdx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v43; // ecx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  char Flags; // al
  __int64 v49; // rax
  unsigned int v50; // r13d
  _QWORD *v51; // r12
  DXGPUSHLOCK *v52; // rdx
  unsigned int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // r8
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rax
  struct DXGALLOCATION *v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rdi
  int v62; // edx
  int v63; // ecx
  int v64; // edx
  int v65; // ecx
  int v66; // edx
  int v67; // ecx
  int v68; // edx
  int v69; // ecx
  int v70; // edx
  int v71; // r8d
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  struct _VIDSCH_SYNC_OBJECT *v73; // rcx
  char *v74; // rbx
  char v75; // cl
  struct DXGDEVICE *v76; // rbx
  __int64 v77; // r9
  __int64 v78; // rdi
  struct VIDMM_DEVICE *v79; // rdx
  int Resident; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v86; // [rsp+48h] [rbp-C0h] BYREF
  void *v87; // [rsp+50h] [rbp-B8h]
  struct VIDMM_PAGING_QUEUE *v88; // [rsp+58h] [rbp-B0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v89; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v90; // [rsp+68h] [rbp-A0h]
  unsigned int v91; // [rsp+6Ch] [rbp-9Ch]
  void *v92; // [rsp+70h] [rbp-98h]
  struct DXGPROCESS *v93; // [rsp+78h] [rbp-90h]
  unsigned __int64 v94; // [rsp+80h] [rbp-88h] BYREF
  DXGPUSHLOCK *v95; // [rsp+88h] [rbp-80h]
  void *v96; // [rsp+90h] [rbp-78h]
  struct _D3DKMT_CREATEALLOCATION v97; // [rsp+98h] [rbp-70h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v99; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v100; // [rsp+F8h] [rbp-10h]
  _BYTE v101[24]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v102[160]; // [rsp+118h] [rbp+10h] BYREF

  v1 = 0;
  v2 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  v100 = v2;
  v3 = v2 + 40;
  if ( !v2 )
    v3 = 0LL;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>(v3);
  if ( !v4 )
    return 0;
  Current = DXGPROCESS::GetCurrent();
  v8 = *(unsigned int *)(v4 + 40);
  v93 = Current;
  v98 = *(_QWORD *)(*(_QWORD *)(v2 + 80) + 16LL);
  v90 = *(_DWORD *)(v2 + 152);
  if ( !(_DWORD)v8 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 693LL;
    goto LABEL_76;
  }
  if ( (*(_DWORD *)(v4 + 44) & 0x1000) != 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 699LL;
    goto LABEL_76;
  }
  v10 = 12 * v8;
  if ( 12 * v8 > 0xFFFFFFFF )
  {
    v9 = WdLogNewEntry5_WdError(v7, v10);
    *(_QWORD *)(v9 + 24) = 706LL;
LABEL_76:
    WdLogEvent5_WdError(v9);
    return 0;
  }
  v11 = *(unsigned int *)(v2 + 128);
  if ( v11 - 64 < (unsigned __int64)(unsigned int)v10 )
  {
    v9 = WdLogNewEntry5_WdError(v11 - 64, v10);
    *(_QWORD *)(v9 + 24) = 712LL;
    goto LABEL_76;
  }
  v12 = (unsigned int)(v10 + 64);
  v13 = *(unsigned int *)(v4 + 32);
  LODWORD(v88) = v12;
  if ( (int)v11 - (int)v12 < (unsigned int)v13 )
  {
    v9 = WdLogNewEntry5_WdError(v12, v13);
    *(_QWORD *)(v9 + 24) = 718LL;
    goto LABEL_76;
  }
  v14 = (unsigned int)(v13 + v12);
  v15 = *(unsigned int *)(v4 + 36);
  LODWORD(v87) = v14;
  if ( (int)v11 - (int)v14 < (unsigned int)v15 )
  {
    v9 = WdLogNewEntry5_WdError(v14, v15);
    *(_QWORD *)(v9 + 24) = 724LL;
    goto LABEL_76;
  }
  v16 = v15 + v14;
  v17 = 0LL;
  v18 = v16;
  do
  {
    v19 = *(_DWORD *)(v4 + 12LL * (unsigned int)v17 + 68);
    if ( (unsigned int)v11 - v18 < v19 )
    {
      v9 = WdLogNewEntry5_WdError(3LL * (unsigned int)v17, v17);
      *(_QWORD *)(v9 + 24) = 735LL;
      goto LABEL_76;
    }
    v18 += v19;
    v17 = (unsigned int)(v17 + 1);
  }
  while ( (unsigned int)v17 < (unsigned int)v8 );
  v20 = v8 * (unsigned __int128)0x60uLL;
  if ( !is_mul_ok(v8, 0x60uLL) )
    *(_QWORD *)&v20 = -1LL;
  v96 = (void *)operator new[](v20, *((__int64 *)&v20 + 1), 256LL);
  if ( !v96 )
  {
    v9 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v9 + 24) = 746LL;
    goto LABEL_76;
  }
  v23 = *(unsigned int *)(v4 + 40) * (unsigned __int128)8uLL;
  v24 = 0LL;
  if ( !is_mul_ok(*(unsigned int *)(v4 + 40), 8uLL) )
    *(_QWORD *)&v23 = -1LL;
  v92 = (void *)operator new[](v23, *((__int64 *)&v23 + 1), 256LL);
  if ( !v92 )
  {
    v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    *(_QWORD *)(v29 + 24) = 754LL;
    WdLogEvent5_WdLowResource(v29);
    goto LABEL_74;
  }
  LODWORD(v86) = 72 * *(_DWORD *)(v4 + 40) + 16;
  v30 = v18 + v86 - v16;
  v91 = v30;
  v24 = (_DWORD *)operator new[](v30, v25, 64LL);
  if ( !v24 )
  {
    v33 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v33 + 24) = 764LL;
    goto LABEL_73;
  }
  memset(&v97, 0, sizeof(v97));
  v34 = *(_DWORD *)(v4 + 32);
  v97.hDevice = *(_DWORD *)(v4 + 24);
  v97.hResource = *(_DWORD *)(v4 + 28);
  if ( v34 )
  {
    v97.PrivateRuntimeDataSize = v34;
    v97.pPrivateRuntimeData = (const void *)(v4 + (unsigned int)v88);
  }
  v35 = *(unsigned int *)(v4 + 36);
  if ( (_DWORD)v35 )
  {
    v97.PrivateDriverDataSize = *(_DWORD *)(v4 + 36);
    v97.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v4 + (unsigned int)v87);
  }
  v36 = *(unsigned int *)(v4 + 44);
  p_hAllocation = v96;
  v38 = *(void **)(v4 + 48);
  v39 = *(_DWORD *)(v4 + 40);
  v97.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v96;
  v97.hPrivateRuntimeResourceHandle = v38;
  v97.NumAllocations = v39;
  v97.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)v36;
  if ( (v36 & 0x10000) != 0 )
  {
    if ( (unsigned int)v35 < 0x18 )
    {
      v33 = WdLogNewEntry5_WdError(v36, v35);
      *(_QWORD *)(v33 + 24) = 791LL;
      goto LABEL_73;
    }
    v97.PrivateDriverDataSize = 0;
  }
  v40 = 0;
  if ( v39 )
  {
    while ( 1 )
    {
      v41 = *(_DWORD *)(v4 + 12LL * v40 + 68);
      if ( (*(_DWORD *)(v4 + 44) & 0x20) != 0 )
      {
        p_hAllocation[12 * v40 + 1] = 4096LL;
        p_hAllocation = &v97.pAllocationInfo->hAllocation;
      }
      v42 = 96LL * v40;
      LODWORD(p_hAllocation[(unsigned __int64)v42 / 8 + 4]) = *(_DWORD *)(v4 + 12LL * v40 + 64);
      *(UINT *)((char *)&v97.pAllocationInfo->PrivateDriverDataSize + v42) = v41;
      if ( v41 )
        *(void **)((char *)&v97.pAllocationInfo->pPrivateDriverData + v42) = (void *)(v4 + v16);
      v16 += v41;
      v43 = *(_DWORD *)(v4 + 12LL * v40++ + 72);
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v97.pAllocationInfo->VidPnSourceId + v42) = v43;
      if ( v40 >= *(_DWORD *)(v4 + 40) )
        break;
      p_hAllocation = &v97.pAllocationInfo->hAllocation;
    }
  }
  v44 = DxgkCreateAllocationInternal(&v97, (unsigned __int64 *)v92);
  v47 = v44;
  if ( v44 < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v46, v45);
    *(_QWORD *)(v33 + 24) = v47;
    *(_QWORD *)(v33 + 32) = 922LL;
LABEL_73:
    WdLogEvent5_WdError(v33);
  }
  else
  {
    Flags = (char)v97.Flags;
    *v24 = v97.Flags;
    if ( (Flags & 0x40) != 0 )
    {
      if ( v97.hGlobalShare )
      {
        v49 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v49 + 24) = 822LL;
        WdLogEvent5_WdAssertion(v49);
      }
    }
    else
    {
      v24[2] = v97.hGlobalShare;
    }
    v24[1] = v97.hResource;
    v87 = (char *)v24 + (unsigned int)v86;
    if ( *(_DWORD *)(v4 + 40) )
    {
      v50 = 0;
      v51 = v92;
      v52 = (struct DXGPROCESS *)((char *)v93 + 208);
      v95 = (struct DXGPROCESS *)((char *)v93 + 208);
      while ( 1 )
      {
        v89 = (struct _VIDSCH_SYNC_OBJECT *)(96LL * v50);
        v53 = *(_DWORD *)((char *)v89 + (unsigned __int64)v97.pAllocationInfo);
        DXGPUSHLOCK::AcquireShared(v52);
        v54 = (v53 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v54 < *((_DWORD *)v93 + 64) )
        {
          v55 = *((_QWORD *)v93 + 30);
          v56 = *(_DWORD *)(v55 + 16 * v54 + 8);
          if ( ((v53 >> 25) & 0x60) == (*(_BYTE *)(v55 + 16 * v54 + 8) & 0x60)
            && (v56 & 0x2000) == 0
            && (v56 & 0x1F) != 0 )
          {
            v57 = v56 & 0x1F;
            if ( (_BYTE)v57 == 5 )
            {
              v59 = *(struct DXGALLOCATION **)(v55 + 16LL * (unsigned int)v54);
              goto LABEL_58;
            }
            v58 = WdLogNewEntry5_WdError(v57, 2LL * (unsigned int)v54);
            *(_QWORD *)(v58 + 24) = 316LL;
            WdLogEvent5_WdError(v58);
          }
        }
        v59 = 0LL;
LABEL_58:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86, v59);
        ExReleasePushLockSharedEx(v95, 0LL);
        KeLeaveCriticalRegion();
        v60 = v86;
        v61 = 9LL * v50;
        v24[2 * v61 + 6] ^= (v24[2 * v61 + 6] ^ *(_DWORD *)(*(_QWORD *)(v86 + 48) + 4LL)) & 1;
        v62 = v24[18 * v50 + 6] ^ ((unsigned __int8)v24[18 * v50 + 6] ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 2;
        v24[2 * v61 + 6] = v62;
        v63 = v62 ^ ((unsigned __int8)v62 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 4;
        v24[2 * v61 + 6] = v63;
        v64 = v63 ^ ((unsigned __int8)v63 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 8;
        v24[2 * v61 + 6] = v64;
        v65 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 0x20;
        v24[2 * v61 + 6] = v65;
        v66 = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)*(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 0x800;
        v24[2 * v61 + 6] = v66;
        v67 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)*(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 0x1000;
        v24[2 * v61 + 6] = v67;
        v68 = v67 ^ ((unsigned __int16)v67 ^ (unsigned __int16)*(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 0x2000;
        v24[2 * v61 + 6] = v68;
        v69 = v68 ^ ((unsigned __int16)v68 ^ (unsigned __int16)*(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 0x4000;
        v24[2 * v61 + 6] = v69;
        v70 = v69 ^ (v69 ^ *(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 0x40000;
        v24[2 * v61 + 6] = v70;
        v71 = v70 ^ (v70 ^ *(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 0x80000;
        pAllocationInfo = v97.pAllocationInfo;
        v24[2 * v61 + 6] = v71;
        v24[2 * v61 + 6] = v71 ^ (v71 ^ *(_DWORD *)(*(_QWORD *)(v60 + 48) + 4LL)) & 0x100000;
        v73 = v89;
        v24[2 * v61 + 4] = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + (_QWORD)v89);
        v24[2 * v61 + 5] = *(_DWORD *)(v4 + 12LL * v50 + 68);
        *(_QWORD *)&v24[2 * v61 + 8] = v51[v50];
        memmove(
          v87,
          *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + (_QWORD)v73),
          *(unsigned int *)(v4 + 12LL * v50 + 68));
        v74 = (char *)&v24[18 * v50];
        v87 = (char *)v87 + *(unsigned int *)(v4 + 12LL * v50 + 68);
        *((_QWORD *)v74 + 5) = *(_QWORD *)(*(_QWORD *)(v86 + 48) + 16LL);
        ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(v98 + 2704),
          (struct _DXGKARG_DESCRIBEALLOCATION *)(v74 + 40));
        *((_QWORD *)v74 + 5) = 0LL;
        v75 = *(_BYTE *)(v4 + 56) & 1;
        if ( v90 < 0x1E )
          v75 = *(_BYTE *)(v4 + 56);
        if ( v75 )
        {
          v76 = *(struct DXGDEVICE **)(v86 + 8);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
            (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v101,
            v76);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, (__int64)v76, 0, v77, 0);
          if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v102, 0LL) >= 0
            && DXGDEVICE::UmdManagesResidency(v76) )
          {
            v78 = *((_QWORD *)v76 + 2);
            v79 = (struct VIDMM_DEVICE *)*((_QWORD *)v76 + 95);
            v88 = 0LL;
            v89 = 0LL;
            VIDMM_EXPORT::VidMmGetDevicePagingQueue(*(VIDMM_EXPORT **)(v78 + 640), v79, 0, &v88, &v89);
            v94 = 0LL;
            v99 = 0LL;
            Resident = VIDMM_EXPORT::VidMmMakeResident(
                         *(VIDMM_EXPORT **)(v78 + 640),
                         *(struct VIDMM_GLOBAL **)(v78 + 648),
                         v88,
                         (struct _VIDMM_MULTI_ALLOC **)(v86 + 24),
                         1u,
                         3u,
                         &v94,
                         &v99);
            v83 = Resident;
            if ( Resident >= 0 )
            {
              if ( Resident == 259 )
                VIDMM_EXPORT::VidMmWaitForFences(
                  *(VIDMM_EXPORT **)(v78 + 640),
                  *(struct VIDMM_GLOBAL **)(v78 + 648),
                  &v89,
                  &v94);
            }
            else
            {
              v84 = WdLogNewEntry5_WdError(v82, v81);
              *(_QWORD *)(v84 + 24) = v83;
              WdLogEvent5_WdError(v84);
            }
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v101);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86);
        v52 = v95;
        if ( ++v50 >= *(_DWORD *)(v4 + 40) )
        {
          v2 = v100;
          v30 = v91;
          break;
        }
      }
    }
    VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v2 + 112), v24, v30);
    v1 = 1;
  }
LABEL_74:
  operator delete[](v96);
  operator delete[](v92);
  operator delete[](v24);
  return v1;
}

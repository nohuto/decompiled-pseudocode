/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0121F7C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C0126010 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01296D4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151F40 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0236F90 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0254A84 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE29C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00FD200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C011B5D4 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01527BC (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     GetPixelSizeInBytes @ 0x1C0228A4C (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        struct _DXGK_ALLOCATIONINFO *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  __int64 v5; // r8
  SIZE_T Size; // rcx
  void *v7; // r15
  struct _EX_RUNDOWN_REF *v8; // rbx
  __int64 v9; // rdi
  UINT v10; // r12d
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // r13
  ADAPTER_RENDER *v12; // rcx
  D3DKMDT_STANDARDALLOCATION_TYPE v13; // eax
  int StandardAllocationDriverData; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v21; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  PVOID v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  ADAPTER_RENDER *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r15
  unsigned int v32; // ecx
  int v33; // edx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  struct COREDEVICEACCESS *v39; // rdi
  unsigned int v40; // edi
  __int64 v41; // r8
  __int64 v42; // rax
  ULONG_PTR v43; // r8
  int v44; // ecx
  __int64 v45; // rcx
  struct _EX_RUNDOWN_REF *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct COREDEVICEACCESS *v49; // rdi
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  void **p_pPrivateDriverData; // r13
  __int64 v54; // rbx
  __int64 v55; // rdx
  UINT v57; // ecx
  int v58; // ecx
  _QWORD *v59; // rax
  PVOID v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  _QWORD *v64; // rax
  unsigned int *v65; // r12
  int PixelSizeInBytes; // eax
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  int Count; // r9d
  __int64 v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // rax
  struct DXGRESOURCE *v87; // rbx
  __int64 v88; // rax
  char v89; // [rsp+80h] [rbp-80h]
  char v90; // [rsp+81h] [rbp-7Fh]
  UINT v91; // [rsp+84h] [rbp-7Ch]
  UINT v92; // [rsp+84h] [rbp-7Ch]
  int v93; // [rsp+88h] [rbp-78h]
  _DWORD *v94; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v95; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v96; // [rsp+98h] [rbp-68h]
  void *v97; // [rsp+A0h] [rbp-60h]
  struct COREDEVICEACCESS *v98; // [rsp+A8h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v99; // [rsp+B0h] [rbp-50h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v100; // [rsp+B8h] [rbp-48h] BYREF
  struct _D3DKMT_CREATEALLOCATION v101; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v102[32]; // [rsp+140h] [rbp+40h] BYREF
  PVOID P; // [rsp+160h] [rbp+60h]
  _BYTE v104[384]; // [rsp+168h] [rbp+68h] BYREF
  UINT v105; // [rsp+2E8h] [rbp+1E8h]

  v98 = a3;
  memset(&v101, 0, sizeof(v101));
  Size = this->Size;
  v7 = 0LL;
  v8 = 0LL;
  v97 = 0LL;
  v89 = 0;
  v95 = 0LL;
  v9 = *(_QWORD *)(Size + 16);
  v10 = 1;
  v93 = 1;
  v96 = 0;
  if ( *((_DWORD *)a2 + 4) != 1 )
  {
LABEL_2:
    if ( !DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(Size + 16)) )
      goto LABEL_3;
    if ( *((_DWORD *)a2 + 4) != 4 )
      goto LABEL_3;
    v58 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v58 - 1) & 0xFFFFFFFC) != 0 || v58 == 2 )
      goto LABEL_3;
    goto LABEL_66;
  }
  if ( !*(_BYTE *)(v9 + 2615) && !DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v9) )
  {
    Size = this->Size;
    goto LABEL_2;
  }
LABEL_66:
  if ( *(int *)(v9 + 2328) >= 0x2000 )
    v10 = *(_DWORD *)(v9 + 280);
  v93 = v10;
LABEL_3:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v9 + 2696) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  v105 = 0;
  if ( v10 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 0x60 )
      goto LABEL_8;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(PagedPool, 96LL * v10, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v104;
    P = v104;
  }
  v105 = v10;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * v10);
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)P;
  }
LABEL_8:
  v12 = (ADAPTER_RENDER *)this->Size;
  v90 = *(_BYTE *)(*((_QWORD *)v12 + 2) + 209LL);
  v13 = *((_DWORD *)a2 + 4);
  memset(&v100, 0, sizeof(v100));
  v100.StandardAllocationType = v13;
  v100.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v12, &v100, v5);
  v18 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
LABEL_79:
    v59[4] = v18;
    v59[3] = this;
    WdLogEvent5_WdError(v59);
    goto LABEL_55;
  }
  AllocationPrivateDriverDataSize = v100.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v100.ResourcePrivateDriverDataSize;
  if ( !v100.AllocationPrivateDriverDataSize && !v100.ResourcePrivateDriverDataSize )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v100.ResourcePrivateDriverDataSize, v100.AllocationPrivateDriverDataSize);
LABEL_78:
    v18 = -1073741811LL;
    goto LABEL_79;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 90) != v100.ResourcePrivateDriverDataSize )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v100.ResourcePrivateDriverDataSize, v100.AllocationPrivateDriverDataSize);
      v59[5] = 1LL;
      goto LABEL_78;
    }
    if ( *((_DWORD *)a2 + 94) != v100.AllocationPrivateDriverDataSize )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v100.ResourcePrivateDriverDataSize, v100.AllocationPrivateDriverDataSize);
      v59[5] = 2LL;
      goto LABEL_78;
    }
  }
  if ( !v100.ResourcePrivateDriverDataSize )
    goto LABEL_12;
  v60 = operator new[](v100.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
  v97 = v60;
  if ( v60 )
  {
    memset(v60, 0, v100.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v100.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v100.AllocationPrivateDriverDataSize;
LABEL_12:
    v21 = 0;
    v91 = 0;
    if ( !v10 )
      goto LABEL_27;
    p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
    while ( 1 )
    {
      if ( AllocationPrivateDriverDataSize )
      {
        v23 = operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
        v7 = v23;
        if ( !v23 )
        {
          v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
          LODWORD(v31) = -1073741801;
          v69[3] = this;
          v69[4] = v100.AllocationPrivateDriverDataSize;
          v69[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v69);
          goto LABEL_51;
        }
        memset(v23, 0, v100.AllocationPrivateDriverDataSize);
        ++v96;
        v21 = v91;
      }
      *((_QWORD *)p_PrivateDriverDataSize - 1) = v7;
      *p_PrivateDriverDataSize = v100.AllocationPrivateDriverDataSize;
      v100.pResourcePrivateDriverData = v97;
      v100.pAllocationPrivateDriverData = v7;
      if ( v10 <= 1 )
        v21 = *((_DWORD *)a2 + 95);
      v27 = (ADAPTER_RENDER *)this->Size;
      v100.PhysicalAdapterIndex = v21;
      v28 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v27, &v100, v17);
      v31 = v28;
      if ( v28 < 0 )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v29);
        v70[5] = 0LL;
        v70[3] = this;
        v70[4] = v31;
        WdLogEvent5_WdAssertion(v70);
        goto LABEL_50;
      }
      v7 = 0LL;
      if ( (*(_DWORD *)a2 & 0x60) != 0 )
      {
        v65 = (unsigned int *)*((_QWORD *)a2 + 3);
        v30 = v65[2];
        if ( (_DWORD)v30 )
        {
          PixelSizeInBytes = GetPixelSizeInBytes();
          v29 = *(_QWORD *)(this->Size + 16);
          v30 = *(unsigned int *)(v29 + 348);
          if ( (v30 & 8) == 0 )
          {
            if ( PixelSizeInBytes )
            {
              v29 = v65[5];
              if ( (_DWORD)v29 )
              {
                v30 = (PixelSizeInBytes * *v65 + 127) & 0xFFFFFF80;
                if ( (_DWORD)v29 != (_DWORD)v30 )
                {
                  LODWORD(v31) = -1073741811;
                  v67 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
                  v67[3] = this;
                  v67[4] = v65[5];
                  v67[5] = *v65;
                  v67[6] = -1073741811LL;
                  WdLogEvent5_WdError(v67);
                  goto LABEL_51;
                }
              }
            }
          }
        }
        v10 = v93;
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v68 + 24) = 7375LL;
        WdLogEvent5_WdAssertion(v68);
      }
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v57 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
        p_PrivateDriverDataSize[2] |= 1u;
        p_PrivateDriverDataSize[1] = v57;
      }
      p_PrivateDriverDataSize += 24;
      v21 = v91 + 1;
      v91 = v21;
      if ( v21 >= v10 )
        break;
      AllocationPrivateDriverDataSize = v100.AllocationPrivateDriverDataSize;
    }
    ResourcePrivateDriverDataSize = v100.ResourcePrivateDriverDataSize;
LABEL_27:
    v101.hDevice = *((_DWORD *)a2 + 1);
    v101.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)v97;
    v101.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
    v101.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
    v101.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
    v32 = *(_DWORD *)a2;
    v33 = *(_DWORD *)a2 & 0x60;
    *(_QWORD *)&v101.hResource = 0LL;
    v101.NumAllocations = v10;
    v101.pAllocationInfo = PoolWithTag;
    v101.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v101.Flags & 0xFFFFA094 | (v32 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v32 & 1 | (2 * (v32 & 2 | (2 * (v32 & 0x800 | v32 & 4 | (4 * (v32 & 0x18 | (2 * v33))))))))));
    v34 = DXGDEVICE::CreateAllocation(this, &v101, 0LL, 0, 0LL, a2, v98, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    v31 = v34;
    if ( v34 < 0 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
      v76[3] = this;
      v76[4] = v31;
      v76[5] = 1LL;
      WdLogEvent5_WdWarning(v76);
      goto LABEL_50;
    }
    v89 = 1;
    v92 = 0;
    if ( v10 )
    {
      v98 = (struct COREDEVICEACCESS *)PoolWithTag;
      v94 = (_DWORD *)((char *)a2 + 52);
      v39 = (struct COREDEVICEACCESS *)PoolWithTag;
      do
      {
        v40 = *(_DWORD *)v39;
        v95 = *(struct _EX_RUNDOWN_REF **)&this->SupportedReadSegmentSet;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v95[26], 0LL) )
        {
          if ( bTracingEnabled )
          {
            Count = v95[29].Count;
            if ( Count != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)v95, &EventBlockThread, v41, Count);
          }
          ExAcquirePushLockSharedEx(&v95[26], 0LL);
        }
        v42 = (v40 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v42 < LODWORD(v95[32].Count) )
        {
          v43 = v95[30].Count;
          v44 = *(_DWORD *)(v43 + 16 * v42 + 8);
          if ( ((v40 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
            && (v44 & 0x2000) == 0
            && (v44 & 0x1F) != 0 )
          {
            v45 = v44 & 0x1F;
            if ( (_BYTE)v45 == 5 )
            {
              v46 = *(struct _EX_RUNDOWN_REF **)(v43 + 16LL * (unsigned int)v42);
              goto LABEL_37;
            }
            v72 = WdLogNewEntry5_WdError(v45, 2LL * (unsigned int)v42);
            *(_QWORD *)(v72 + 24) = 316LL;
            WdLogEvent5_WdError(v72);
          }
        }
        v46 = 0LL;
LABEL_37:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v99, v46);
        ExReleasePushLockSharedEx(&v95[26], 0LL);
        KeLeaveCriticalRegion();
        if ( v8 )
          ExReleaseRundownProtection(v8 + 11);
        v8 = v99;
        v99 = 0LL;
        v95 = v8;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v99, v47);
        if ( !v8 )
        {
          LODWORD(v31) = -1073741811;
          v75 = (_QWORD *)WdLogNewEntry5_WdAssertion(v48, v35);
          v75[3] = this;
          v75[4] = *(&PoolWithTag->hAllocation + 24 * v92);
          v75[5] = -1073741811LL;
          WdLogEvent5_WdAssertion(v75);
          goto LABEL_107;
        }
        v49 = v98;
        v50 = v94;
        *v94 = *(_DWORD *)v98;
        if ( !v90 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(this->Size + 640) + 8LL)
                                                                  + 192LL))(
                  *(_QWORD *)(this->Size + 648),
                  *(_QWORD *)(v8[6].Count + 8)) )
          {
            v35 = *((unsigned int *)a2 + 4);
            if ( ((_DWORD)v35 != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) && (_DWORD)v35 != 5 )
            {
              v73 = *(_QWORD *)(this->Size + 16);
              if ( (*(_DWORD *)(v73 + 2060) & 0x200) == 0 || (_DWORD)v35 != 1 )
              {
                LODWORD(v31) = -1073741811;
                v74 = (_QWORD *)WdLogNewEntry5_WdError(v73, v35);
                v74[3] = this;
                v74[4] = *((int *)a2 + 4);
                v74[5] = -1073741811LL;
                WdLogEvent5_WdError(v74);
                goto LABEL_107;
              }
            }
          }
          v50 = v94;
        }
        v94 = v50 + 1;
        v39 = (struct COREDEVICEACCESS *)((char *)v49 + 96);
        ++v92;
        v98 = v39;
      }
      while ( v92 < v10 );
    }
    *((_DWORD *)a2 + 2) = v101.hResource;
    *((_DWORD *)a2 + 3) = v101.hGlobalShare;
    v51 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6);
    if ( (v51 & 0xFFFFFFFD) != 0 )
      v52 = 0LL;
    else
      v52 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(this->Size + 640) + 8LL) + 688LL))(
              *(_QWORD *)(this->Size + 648),
              v8[3].Count);
    *((_QWORD *)a2 + 41) = v52;
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      memmove(*((void **)a2 + 46), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 94));
      memmove(*((void **)a2 + 44), v100.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
    }
LABEL_50:
    if ( (int)v31 >= 0 || !v89 )
      goto LABEL_51;
LABEL_107:
    if ( !v101.hResource )
    {
      v77 = WdLogNewEntry5_WdAssertion(v51, v35);
      *(_QWORD *)(v77 + 24) = 7501LL;
      WdLogEvent5_WdAssertion(v77);
    }
    Current = DXGPROCESS::GetCurrent(v51, v35, v37, v38);
    if ( !Current )
    {
      v81 = WdLogNewEntry5_WdAssertion(v79, v78);
      *(_QWORD *)(v81 + 24) = 7509LL;
      WdLogEvent5_WdAssertion(v81);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v102,
      (struct _KTHREAD **)Current);
    v84 = (v101.hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v84 < *((_DWORD *)Current + 64) )
    {
      v85 = *((_QWORD *)Current + 30);
      v83 = (v101.hResource >> 25) & 0x60;
      v82 = *(unsigned int *)(v85 + 16 * v84 + 8);
      if ( ((v101.hResource >> 25) & 0x60) == (*(_BYTE *)(v85 + 16 * v84 + 8) & 0x60) )
      {
        v83 = 0x2000LL;
        if ( (v82 & 0x2000) == 0 && (v82 & 0x1F) != 0 )
        {
          v82 &= 0x1Fu;
          if ( (_BYTE)v82 == 4 )
          {
            v87 = *(struct DXGRESOURCE **)(v85 + 16LL * (unsigned int)v84);
            if ( v87 )
            {
              *(_DWORD *)(v85 + 16 * (((unsigned __int64)v101.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_119:
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v102);
              if ( v87 )
                DXGDEVICE::DestroyAllocationInternal(
                  (DXGDEVICE *)this,
                  0,
                  0LL,
                  v87,
                  0LL,
                  DXGDEVICE::DestroyFlagsDefault);
LABEL_51:
              if ( v96 )
              {
                p_pPrivateDriverData = &PoolWithTag->pPrivateDriverData;
                v54 = v96;
                do
                {
                  operator delete[](*p_pPrivateDriverData);
                  p_pPrivateDriverData += 12;
                  --v54;
                }
                while ( v54 );
              }
              goto LABEL_54;
            }
LABEL_118:
            v88 = WdLogNewEntry5_WdAssertion(v83, v82);
            *(_QWORD *)(v88 + 24) = 7515LL;
            WdLogEvent5_WdAssertion(v88);
            goto LABEL_119;
          }
          v86 = WdLogNewEntry5_WdError(0x2000LL, v82);
          *(_QWORD *)(v86 + 24) = 316LL;
          WdLogEvent5_WdError(v86);
        }
      }
    }
    v87 = 0LL;
    goto LABEL_118;
  }
  v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63);
  LODWORD(v31) = -1073741801;
  v64[3] = this;
  v64[4] = v100.ResourcePrivateDriverDataSize;
  v64[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v64);
LABEL_54:
  operator delete[](v97);
  LODWORD(v18) = v31;
LABEL_55:
  if ( P != v104 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v105 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v95, v55);
  return (unsigned int)v18;
}

/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A0874
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016A4FC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019E2B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01A4774 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01E4BFC (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 *     ?CreateStandardAllocCallout@@YAXPEAX@Z @ 0x1C01E8480 (-CreateStandardAllocCallout@@YAXPEAX@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E8F30 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0307E5C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C0370490 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03D20D0 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01A0DF8 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01A1DDC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C01C5980 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C01CD980 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01DE690 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01E0700 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     GetPixelSizeInBytes @ 0x1C02D7E44 (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  UINT v9; // r12d
  D3DDDI_ALLOCATIONINFO *Pool2; // rax
  ADAPTER_RENDER *v11; // rcx
  D3DKMDT_STANDARDALLOCATION_TYPE v12; // eax
  int StandardAllocationDriverData; // eax
  unsigned int v14; // edi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v17; // r8d
  UINT *p_PrivateDriverDataSize; // rdi
  void *v19; // rax
  int v20; // eax
  __int64 v21; // r12
  unsigned int v22; // ecx
  int v23; // edx
  int v24; // eax
  unsigned int v25; // edi
  D3DDDI_ALLOCATIONINFO *v26; // rbx
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v28; // eax
  __int64 v29; // r8
  int v30; // ecx
  struct DXGALLOCATION *v31; // rdx
  volatile signed __int32 *v32; // rcx
  D3DKMT_HANDLE *v33; // rcx
  int v34; // edx
  __int64 v35; // rax
  D3DDDI_ALLOCATIONINFO *v36; // rbx
  void **p_pPrivateDriverData; // rbx
  __int64 v38; // rdi
  UINT v40; // ecx
  int v41; // ecx
  __int64 v42; // rbx
  const wchar_t *v43; // r9
  unsigned int *v44; // rdi
  int PixelSizeInBytes; // eax
  unsigned int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r10
  const wchar_t *v50; // r9
  int v51; // edx
  __int64 v52; // rbx
  struct DXGPROCESS *Current; // rdi
  D3DKMT_HANDLE v54; // eax
  __int64 v55; // r10
  int v56; // edx
  struct DXGRESOURCE *v57; // rbx
  __int64 v58; // rax
  int v59; // edx
  char v60; // [rsp+80h] [rbp-80h]
  UINT v61; // [rsp+84h] [rbp-7Ch]
  unsigned int v62; // [rsp+84h] [rbp-7Ch]
  D3DDDI_ALLOCATIONINFO *v63; // [rsp+88h] [rbp-78h]
  UINT *v64; // [rsp+90h] [rbp-70h]
  D3DKMT_HANDLE *v65; // [rsp+90h] [rbp-70h]
  unsigned int v66; // [rsp+98h] [rbp-68h]
  D3DDDI_ALLOCATIONINFO *v67; // [rsp+98h] [rbp-68h]
  unsigned int v68; // [rsp+A0h] [rbp-60h]
  D3DKMT_CREATESTANDARDALLOCATION *v69; // [rsp+A8h] [rbp-58h]
  unsigned int *v70; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-48h] BYREF
  struct COREDEVICEACCESS *v72; // [rsp+C0h] [rbp-40h]
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v73; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v74; // [rsp+F8h] [rbp-8h]
  struct _D3DKMT_CREATEALLOCATION v75; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v76[32]; // [rsp+150h] [rbp+50h] BYREF
  PVOID P; // [rsp+170h] [rbp+70h]
  _BYTE v78[384]; // [rsp+178h] [rbp+78h] BYREF
  UINT v79; // [rsp+2F8h] [rbp+1F8h]

  v72 = a3;
  memset(&v75, 0, sizeof(v75));
  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v69 = 0LL;
  v68 = 0;
  v71 = 0LL;
  v7 = *(_QWORD *)(v5 + 16);
  v8 = 1LL;
  v9 = 1;
  v66 = 1;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( *(_BYTE *)(v7 + 2839) || DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v7) )
    {
LABEL_63:
      if ( *(int *)(v7 + 2552) < 0x2000 )
      {
        v66 = 1;
      }
      else
      {
        v9 = *(_DWORD *)(v7 + 288);
        v66 = v9;
      }
      goto LABEL_3;
    }
    v5 = *((_QWORD *)this + 2);
  }
  if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v5 + 16)) && *((_DWORD *)a2 + 4) == 4 )
  {
    v41 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v41 - 1) & 0xFFFFFFFC) != 0 || v41 == 2 )
      goto LABEL_4;
    goto LABEL_63;
  }
LABEL_3:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v7 + 2920) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
LABEL_4:
  v79 = 0;
  v63 = 0LL;
  P = 0LL;
  if ( v9 <= 4 )
  {
    v63 = (D3DDDI_ALLOCATIONINFO *)v78;
    P = v78;
    if ( !v9 )
    {
LABEL_8:
      v79 = v9;
      goto LABEL_9;
    }
    memset(v78, 0, 96LL * v9);
    Pool2 = (D3DDDI_ALLOCATIONINFO *)P;
LABEL_7:
    v63 = Pool2;
    goto LABEL_8;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v9 >= 0x60 )
  {
    Pool2 = (D3DDDI_ALLOCATIONINFO *)ExAllocatePool2(256LL, 96LL * v9, 1265072196LL);
    P = Pool2;
    goto LABEL_7;
  }
LABEL_9:
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v60 = *(_BYTE *)(*((_QWORD *)v11 + 2) + 209LL);
  v12 = *((_DWORD *)a2 + 4);
  memset(&v73, 0, sizeof(v73));
  v73.StandardAllocationType = v12;
  v73.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v73);
  v14 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v42 = StandardAllocationDriverData;
    WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
    v43 = L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x";
LABEL_71:
    v8 = 0LL;
LABEL_77:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v43, (__int64)this, v42, v8, 0LL, 0LL);
    goto LABEL_52;
  }
  AllocationPrivateDriverDataSize = v73.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v73.ResourcePrivateDriverDataSize;
  if ( !v73.AllocationPrivateDriverDataSize && !v73.ResourcePrivateDriverDataSize )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    v43 = L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData buff"
           "er, returning 0x%I64x";
    v42 = -1073741811LL;
    goto LABEL_71;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 )
    goto LABEL_12;
  if ( *((_DWORD *)a2 + 90) != v73.ResourcePrivateDriverDataSize )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 1LL);
    v43 = L"Device 0x%I64x: Input ResourcePrivateDriverDataSize does not match the driver's ResourcePrivateDriverDataSize,"
           " returning 0x%I64x";
LABEL_76:
    v42 = -1073741811LL;
    goto LABEL_77;
  }
  if ( *((_DWORD *)a2 + 94) != v73.AllocationPrivateDriverDataSize )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 2LL);
    v43 = L"Device 0x%I64x: Input TotalPrivateDriverDataBufferSize does not match the driver's AllocationPrivateDriverData"
           "Size, returning 0x%I64x";
    v8 = 2LL;
    goto LABEL_76;
  }
LABEL_12:
  if ( v73.ResourcePrivateDriverDataSize )
  {
    v69 = (D3DKMT_CREATESTANDARDALLOCATION *)operator new[](v73.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL);
    if ( !v69 )
    {
      LODWORD(v21) = -1073741801;
      WdLogSingleEntry3(3LL, this, v73.ResourcePrivateDriverDataSize, -1073741801LL);
      goto LABEL_51;
    }
    ResourcePrivateDriverDataSize = v73.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v73.AllocationPrivateDriverDataSize;
  }
  v61 = 0;
  v17 = 0;
  if ( v9 )
  {
    p_PrivateDriverDataSize = &v63->PrivateDriverDataSize;
    v64 = &v63->PrivateDriverDataSize;
    while ( 1 )
    {
      v19 = 0LL;
      if ( AllocationPrivateDriverDataSize )
      {
        v19 = (void *)operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, 256LL);
        if ( !v19 )
        {
          v47 = v73.AllocationPrivateDriverDataSize;
          LODWORD(v21) = -1073741801;
          v48 = -1073741801LL;
LABEL_92:
          WdLogSingleEntry3(3LL, this, v47, v48);
          goto LABEL_93;
        }
        ++v68;
        v17 = v61;
      }
      *((_QWORD *)p_PrivateDriverDataSize - 1) = v19;
      *p_PrivateDriverDataSize = v73.AllocationPrivateDriverDataSize;
      v73.pAllocationPrivateDriverData = v19;
      v73.pResourcePrivateDriverData = v69;
      if ( v9 > 1 )
        v73.PhysicalAdapterIndex = v17;
      else
        v73.PhysicalAdapterIndex = *((_DWORD *)a2 + 95);
      v20 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*((ADAPTER_RENDER **)this + 2), &v73);
      v21 = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry3(1LL, this, v20, 0LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Device 0x%I64x: Driver fialed to generate pPrivateDriverData buffer, returning 0x%I64x",
          (__int64)this,
          v21,
          0LL,
          0LL,
          0LL);
        goto LABEL_93;
      }
      if ( (*(_DWORD *)a2 & 0x60) != 0 )
      {
        v44 = (unsigned int *)*((_QWORD *)a2 + 3);
        v70 = v44;
        if ( v44[2] )
        {
          PixelSizeInBytes = GetPixelSizeInBytes();
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 436LL) & 8) == 0 )
          {
            if ( PixelSizeInBytes )
            {
              v46 = v44[5];
              if ( v46 )
              {
                if ( v46 != ((PixelSizeInBytes * *v44 + 127) & 0xFFFFFF80) )
                {
                  LODWORD(v21) = -1073741811;
                  WdLogSingleEntry4(2LL, this, v46, *v44, -1073741811LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Device 0x%I64x: Driver returned invalid pitch (0x%I64x) for the cross adapter allocation wi"
                              "dth (0x%I64x), returning 0x%I64x",
                    (__int64)this,
                    v70[5],
                    *v70,
                    -1073741811LL,
                    0LL);
                  goto LABEL_93;
                }
              }
            }
          }
        }
        p_PrivateDriverDataSize = v64;
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        WdLogSingleEntry1(1LL, 7581LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!pCreateStandardAllocation->Flags.OpenCrossAdapter || !pCreateStandardAllocation->Flags.Primary",
          7581LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v40 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
        p_PrivateDriverDataSize[2] |= 1u;
        p_PrivateDriverDataSize[1] = v40;
      }
      p_PrivateDriverDataSize += 24;
      v9 = v66;
      v17 = v61 + 1;
      v61 = v17;
      v64 = p_PrivateDriverDataSize;
      if ( v17 >= v66 )
      {
        ResourcePrivateDriverDataSize = v73.ResourcePrivateDriverDataSize;
        break;
      }
      AllocationPrivateDriverDataSize = v73.AllocationPrivateDriverDataSize;
    }
  }
  v75.hDevice = *((_DWORD *)a2 + 1);
  v75.pAllocationInfo = v63;
  v75.pStandardAllocation = v69;
  v75.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
  v75.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
  v75.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
  v22 = *(_DWORD *)a2;
  v23 = *(_DWORD *)a2 & 0x60;
  *(_QWORD *)&v75.hResource = 0LL;
  v75.NumAllocations = v9;
  v75.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v75.Flags & 0xFFFFA094 | (v22 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v22 & 1 | (2 * (v22 & 2 | (2 * (v22 & 0x800 | v22 & 4 | (4 * (v22 & 0x18 | (2 * v23))))))))));
  v24 = DXGDEVICE::CreateAllocation(this, &v75, 0, 0, 0LL, a2, v72, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LODWORD(v21) = v24;
  if ( v24 < 0 )
  {
    v47 = v24;
    v48 = 1LL;
    goto LABEL_92;
  }
  v62 = 0;
  v25 = v66;
  if ( !v66 )
  {
LABEL_44:
    *((_DWORD *)a2 + 2) = v75.hResource;
    *((_DWORD *)a2 + 3) = v75.hGlobalShare;
    if ( ((*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6) & 0xFFFFFFFD) != 0 )
      v35 = 0LL;
    else
      v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                      + 680LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              *(_QWORD *)(v6 + 24));
    v36 = v63;
    *((_QWORD *)a2 + 41) = v35;
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      memmove(*((void **)a2 + 46), v63->pPrivateDriverData, *((unsigned int *)a2 + 94));
      memmove(*((void **)a2 + 44), v73.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
    }
    goto LABEL_48;
  }
  v26 = v63;
  v67 = v63;
  v65 = (D3DKMT_HANDLE *)((char *)a2 + 52);
  while ( 1 )
  {
    hAllocation = v26->hAllocation;
    v72 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 5);
    v74 = (volatile signed __int32 *)((char *)v72 + 248);
    DXGPUSHLOCK::AcquireShared((struct COREDEVICEACCESS *)((char *)v72 + 248));
    v28 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v28 < *((_DWORD *)v72 + 74)
      && (v29 = *((_QWORD *)v72 + 35), ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x60))
      && (*(_DWORD *)(v29 + 16LL * v28 + 8) & 0x2000) == 0
      && (v30 = *(_DWORD *)(v29 + 16LL * v28 + 8) & 0x1F) != 0 )
    {
      if ( v30 == 5 )
      {
        v31 = *(struct DXGALLOCATION **)(v29 + 16LL * v28);
      }
      else
      {
        WdLogSingleEntry1(2LL, 316LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        v31 = 0LL;
      }
    }
    else
    {
      v31 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v70, v31);
    v32 = v74;
    _InterlockedDecrement(v74 + 4);
    ExReleasePushLockSharedEx(v32, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v71, &v70);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v70);
    v6 = v71;
    if ( !v71 )
      break;
    v33 = v65;
    *v65 = v67->hAllocation;
    if ( v60 )
      goto LABEL_43;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                        + 8LL)
                                                            + 176LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL)) )
    {
      v34 = *((_DWORD *)a2 + 4);
      if ( v34 == 4 )
      {
        if ( *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2 )
          goto LABEL_97;
      }
      else if ( v34 != 5 )
      {
LABEL_97:
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2284LL) & 0x200) == 0 || v34 != 1 )
        {
          LODWORD(v21) = -1073741811;
          WdLogSingleEntry3(2LL, this, *((int *)a2 + 4), -1073741811LL);
          v49 = *((int *)a2 + 4);
          v50 = L"Device 0x%I64x: Driver did not create CPUVisible allocation for standard allocation type 0x%I64x, returning 0x%I64x";
          v51 = 0x40000;
          goto LABEL_102;
        }
      }
    }
    v33 = v65;
LABEL_43:
    v67 = (D3DDDI_ALLOCATIONINFO *)((char *)v67 + 96);
    ++v62;
    v65 = v33 + 1;
    if ( v62 >= v25 )
      goto LABEL_44;
    v26 = v67;
  }
  LODWORD(v21) = -1073741811;
  v52 = 96LL * v62;
  WdLogSingleEntry3(1LL, this, *(unsigned int *)((char *)&v63->hAllocation + v52), -1073741811LL);
  v49 = *(unsigned int *)((char *)&v63->hAllocation + v52);
  v50 = L"Device 0x%I64x: created standard allocation but the allocation handle (0x%I64x) lookup failed!, returning 0x%I64x";
  v51 = 262146;
LABEL_102:
  DxgkLogInternalTriageEvent(0LL, v51, -1, (__int64)v50, (__int64)this, v49, -1073741811LL, 0LL, 0LL);
  if ( !v75.hResource )
  {
    WdLogSingleEntry1(1LL, 7707LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"CreateAlloc.hResource != NULL", 7707LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 7715LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 7715LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v76, Current);
  v54 = (v75.hResource >> 6) & 0xFFFFFF;
  if ( v54 >= *((_DWORD *)Current + 74)
    || (v55 = *((_QWORD *)Current + 35), ((v75.hResource >> 25) & 0x60) != (*(_BYTE *)(v55 + 16LL * v54 + 8) & 0x60))
    || (*(_DWORD *)(v55 + 16LL * v54 + 8) & 0x2000) != 0
    || (v56 = *(_DWORD *)(v55 + 16LL * v54 + 8) & 0x1F) == 0 )
  {
LABEL_112:
    v57 = 0LL;
LABEL_113:
    WdLogSingleEntry1(1LL, 7721LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 7721LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_114;
  }
  if ( v56 != 4 )
  {
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_112;
  }
  v57 = *(struct DXGRESOURCE **)(v55 + 16LL * v54);
  if ( !v57 )
    goto LABEL_113;
  v58 = (v75.hResource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v58 < *((_DWORD *)Current + 74) )
  {
    v59 = *(_DWORD *)(v55 + 16 * v58 + 8);
    if ( ((v75.hResource >> 25) & 0x60) == (*(_BYTE *)(v55 + 16 * v58 + 8) & 0x60)
      && (v59 & 0x2000) == 0
      && (v59 & 0x1F) != 0 )
    {
      *(_DWORD *)(v55 + 16 * (((unsigned __int64)v75.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
LABEL_114:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v76);
  if ( v57 )
    DXGDEVICE::DestroyAllocationInternal(
      this,
      0,
      0LL,
      v57,
      0LL,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
LABEL_93:
  v36 = v63;
LABEL_48:
  if ( v68 )
  {
    p_pPrivateDriverData = &v36->pPrivateDriverData;
    v38 = v68;
    do
    {
      operator delete(*p_pPrivateDriverData);
      p_pPrivateDriverData += 12;
      --v38;
    }
    while ( v38 );
  }
LABEL_51:
  operator delete(v69);
  v14 = v21;
LABEL_52:
  if ( P != v78 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v79 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71);
  return v14;
}

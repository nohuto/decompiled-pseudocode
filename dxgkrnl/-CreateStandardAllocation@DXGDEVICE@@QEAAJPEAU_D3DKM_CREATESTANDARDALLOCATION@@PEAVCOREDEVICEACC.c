/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4968
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164F3C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0185A34 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01B08FC (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5264 (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 *     ?CreateStandardAllocCallout@@YAXPEAX@Z @ 0x1C01B52E0 (-CreateStandardAllocCallout@@YAXPEAX@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E41A0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036B9E0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03CD888 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01B4EEC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01B50A0 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     GetPixelSizeInBytes @ 0x1C02D30AC (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  __int64 v5; // rcx
  struct _EX_RUNDOWN_REF *v6; // rbx
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
  struct _EX_RUNDOWN_REF *v31; // rdx
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
  struct _EX_RUNDOWN_REF *v44; // rdi
  int PixelSizeInBytes; // eax
  unsigned int Ptr_high; // ecx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r10
  const wchar_t *v50; // r9
  int v51; // edx
  __int64 v52; // rbx
  __int64 v53; // rcx
  struct DXGPROCESS *Current; // rdi
  D3DKMT_HANDLE v55; // eax
  __int64 v56; // r10
  int v57; // edx
  struct DXGRESOURCE *v58; // rbx
  __int64 v59; // rax
  int v60; // edx
  char v61; // [rsp+80h] [rbp-80h]
  UINT v62; // [rsp+84h] [rbp-7Ch]
  unsigned int v63; // [rsp+84h] [rbp-7Ch]
  D3DDDI_ALLOCATIONINFO *v64; // [rsp+88h] [rbp-78h]
  UINT *v65; // [rsp+90h] [rbp-70h]
  D3DKMT_HANDLE *v66; // [rsp+90h] [rbp-70h]
  unsigned int v67; // [rsp+98h] [rbp-68h]
  D3DDDI_ALLOCATIONINFO *v68; // [rsp+98h] [rbp-68h]
  unsigned int v69; // [rsp+A0h] [rbp-60h]
  D3DKMT_CREATESTANDARDALLOCATION *v70; // [rsp+A8h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v71; // [rsp+B0h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v72; // [rsp+B8h] [rbp-48h] BYREF
  struct COREDEVICEACCESS *v73; // [rsp+C0h] [rbp-40h]
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v74; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v75; // [rsp+F8h] [rbp-8h]
  struct _D3DKMT_CREATEALLOCATION v76; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v77[32]; // [rsp+150h] [rbp+50h] BYREF
  PVOID P; // [rsp+170h] [rbp+70h]
  _BYTE v79[384]; // [rsp+178h] [rbp+78h] BYREF
  UINT v80; // [rsp+2F8h] [rbp+1F8h]

  v73 = a3;
  memset(&v76, 0, sizeof(v76));
  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v70 = 0LL;
  v69 = 0;
  v72 = 0LL;
  v7 = *(_QWORD *)(v5 + 16);
  v8 = 1LL;
  v9 = 1;
  v67 = 1;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( *(_BYTE *)(v7 + 2839) || DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v7) )
    {
LABEL_63:
      if ( *(int *)(v7 + 2552) < 0x2000 )
      {
        v67 = 1;
      }
      else
      {
        v9 = *(_DWORD *)(v7 + 288);
        v67 = v9;
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
  v80 = 0;
  v64 = 0LL;
  P = 0LL;
  if ( v9 <= 4 )
  {
    v64 = (D3DDDI_ALLOCATIONINFO *)v79;
    P = v79;
    if ( !v9 )
    {
LABEL_8:
      v80 = v9;
      goto LABEL_9;
    }
    memset(v79, 0, 96LL * v9);
    Pool2 = (D3DDDI_ALLOCATIONINFO *)P;
LABEL_7:
    v64 = Pool2;
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
  v61 = *(_BYTE *)(*((_QWORD *)v11 + 2) + 209LL);
  v12 = *((_DWORD *)a2 + 4);
  memset(&v74, 0, sizeof(v74));
  v74.StandardAllocationType = v12;
  v74.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v74);
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
  AllocationPrivateDriverDataSize = v74.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v74.ResourcePrivateDriverDataSize;
  if ( !v74.AllocationPrivateDriverDataSize && !v74.ResourcePrivateDriverDataSize )
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
  if ( *((_DWORD *)a2 + 90) != v74.ResourcePrivateDriverDataSize )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 1LL);
    v43 = L"Device 0x%I64x: Input ResourcePrivateDriverDataSize does not match the driver's ResourcePrivateDriverDataSize,"
           " returning 0x%I64x";
LABEL_76:
    v42 = -1073741811LL;
    goto LABEL_77;
  }
  if ( *((_DWORD *)a2 + 94) != v74.AllocationPrivateDriverDataSize )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 2LL);
    v43 = L"Device 0x%I64x: Input TotalPrivateDriverDataBufferSize does not match the driver's AllocationPrivateDriverData"
           "Size, returning 0x%I64x";
    v8 = 2LL;
    goto LABEL_76;
  }
LABEL_12:
  if ( v74.ResourcePrivateDriverDataSize )
  {
    v70 = (D3DKMT_CREATESTANDARDALLOCATION *)operator new[](v74.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL);
    if ( !v70 )
    {
      LODWORD(v21) = -1073741801;
      WdLogSingleEntry3(3LL, this, v74.ResourcePrivateDriverDataSize, -1073741801LL);
      goto LABEL_51;
    }
    ResourcePrivateDriverDataSize = v74.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v74.AllocationPrivateDriverDataSize;
  }
  v62 = 0;
  v17 = 0;
  if ( v9 )
  {
    p_PrivateDriverDataSize = &v64->PrivateDriverDataSize;
    v65 = &v64->PrivateDriverDataSize;
    while ( 1 )
    {
      v19 = 0LL;
      if ( AllocationPrivateDriverDataSize )
      {
        v19 = (void *)operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, 256LL);
        if ( !v19 )
        {
          v47 = v74.AllocationPrivateDriverDataSize;
          LODWORD(v21) = -1073741801;
          v48 = -1073741801LL;
LABEL_92:
          WdLogSingleEntry3(3LL, this, v47, v48);
          goto LABEL_93;
        }
        ++v69;
        v17 = v62;
      }
      *((_QWORD *)p_PrivateDriverDataSize - 1) = v19;
      *p_PrivateDriverDataSize = v74.AllocationPrivateDriverDataSize;
      v74.pAllocationPrivateDriverData = v19;
      v74.pResourcePrivateDriverData = v70;
      if ( v9 > 1 )
        v74.PhysicalAdapterIndex = v17;
      else
        v74.PhysicalAdapterIndex = *((_DWORD *)a2 + 95);
      v20 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*((ADAPTER_RENDER **)this + 2), &v74);
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
        v44 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a2 + 3);
        v71 = v44;
        if ( LODWORD(v44[1].Count) )
        {
          PixelSizeInBytes = GetPixelSizeInBytes();
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 436LL) & 8) == 0 )
          {
            if ( PixelSizeInBytes )
            {
              Ptr_high = HIDWORD(v44[2].Ptr);
              if ( Ptr_high )
              {
                if ( Ptr_high != ((PixelSizeInBytes * LODWORD(v44->Count) + 127) & 0xFFFFFF80) )
                {
                  LODWORD(v21) = -1073741811;
                  WdLogSingleEntry4(2LL, this, Ptr_high, LODWORD(v44->Count), -1073741811LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Device 0x%I64x: Driver returned invalid pitch (0x%I64x) for the cross adapter allocation wi"
                              "dth (0x%I64x), returning 0x%I64x",
                    (__int64)this,
                    HIDWORD(v71[2].Ptr),
                    LODWORD(v71->Count),
                    -1073741811LL,
                    0LL);
                  goto LABEL_93;
                }
              }
            }
          }
        }
        p_PrivateDriverDataSize = v65;
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        WdLogSingleEntry1(1LL, 7565LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!pCreateStandardAllocation->Flags.OpenCrossAdapter || !pCreateStandardAllocation->Flags.Primary",
          7565LL,
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
      v9 = v67;
      v17 = v62 + 1;
      v62 = v17;
      v65 = p_PrivateDriverDataSize;
      if ( v17 >= v67 )
      {
        ResourcePrivateDriverDataSize = v74.ResourcePrivateDriverDataSize;
        break;
      }
      AllocationPrivateDriverDataSize = v74.AllocationPrivateDriverDataSize;
    }
  }
  v76.hDevice = *((_DWORD *)a2 + 1);
  v76.pAllocationInfo = v64;
  v76.pStandardAllocation = v70;
  v76.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
  v76.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
  v76.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
  v22 = *(_DWORD *)a2;
  v23 = *(_DWORD *)a2 & 0x60;
  *(_QWORD *)&v76.hResource = 0LL;
  v76.NumAllocations = v9;
  v76.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v76.Flags & 0xFFFFA094 | (v22 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v22 & 1 | (2 * (v22 & 2 | (2 * (v22 & 0x800 | v22 & 4 | (4 * (v22 & 0x18 | (2 * v23))))))))));
  v24 = DXGDEVICE::CreateAllocation(
          (struct _KTHREAD **)this,
          &v76,
          0,
          0,
          0LL,
          a2,
          v73,
          0,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
  LODWORD(v21) = v24;
  if ( v24 < 0 )
  {
    v47 = v24;
    v48 = 1LL;
    goto LABEL_92;
  }
  v63 = 0;
  v25 = v67;
  if ( !v67 )
  {
LABEL_44:
    *((_DWORD *)a2 + 2) = v76.hResource;
    *((_DWORD *)a2 + 3) = v76.hGlobalShare;
    if ( ((*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6) & 0xFFFFFFFD) != 0 )
      v35 = 0LL;
    else
      v35 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                         + 680LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              v6[3].Count);
    v36 = v64;
    *((_QWORD *)a2 + 41) = v35;
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      memmove(*((void **)a2 + 46), v64->pPrivateDriverData, *((unsigned int *)a2 + 94));
      memmove(*((void **)a2 + 44), v74.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
    }
    goto LABEL_48;
  }
  v26 = v64;
  v68 = v64;
  v66 = (D3DKMT_HANDLE *)((char *)a2 + 52);
  while ( 1 )
  {
    hAllocation = v26->hAllocation;
    v73 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 5);
    v75 = (volatile signed __int32 *)((char *)v73 + 248);
    DXGPUSHLOCK::AcquireShared((struct COREDEVICEACCESS *)((char *)v73 + 248));
    v28 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v28 < *((_DWORD *)v73 + 74)
      && (v29 = *((_QWORD *)v73 + 35), ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x60))
      && (*(_DWORD *)(v29 + 16LL * v28 + 8) & 0x2000) == 0
      && (v30 = *(_DWORD *)(v29 + 16LL * v28 + 8) & 0x1F) != 0 )
    {
      if ( v30 == 5 )
      {
        v31 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * v28);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v31 = 0LL;
      }
    }
    else
    {
      v31 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71, v31);
    v32 = v75;
    _InterlockedDecrement(v75 + 4);
    ExReleasePushLockSharedEx(v32, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v72, &v71);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v71);
    v6 = v72;
    if ( !v72 )
      break;
    v33 = v66;
    *v66 = v68->hAllocation;
    if ( v61 )
      goto LABEL_43;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                        + 8LL)
                                                            + 176LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            *(_QWORD *)(v6[6].Count + 8)) )
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
    v33 = v66;
LABEL_43:
    v68 = (D3DDDI_ALLOCATIONINFO *)((char *)v68 + 96);
    ++v63;
    v66 = v33 + 1;
    if ( v63 >= v25 )
      goto LABEL_44;
    v26 = v68;
  }
  LODWORD(v21) = -1073741811;
  v52 = 96LL * v63;
  WdLogSingleEntry3(1LL, this, *(unsigned int *)((char *)&v64->hAllocation + v52), -1073741811LL);
  v49 = *(unsigned int *)((char *)&v64->hAllocation + v52);
  v50 = L"Device 0x%I64x: created standard allocation but the allocation handle (0x%I64x) lookup failed!, returning 0x%I64x";
  v51 = 262146;
LABEL_102:
  DxgkLogInternalTriageEvent(0LL, v51, -1, (__int64)v50, (__int64)this, v49, -1073741811LL, 0LL, 0LL);
  if ( !v76.hResource )
  {
    WdLogSingleEntry1(1LL, 7691LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"CreateAlloc.hResource != NULL", 7691LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v53);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 7699LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 7699LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v77, Current);
  v55 = (v76.hResource >> 6) & 0xFFFFFF;
  if ( v55 >= *((_DWORD *)Current + 74)
    || (v56 = *((_QWORD *)Current + 35), ((v76.hResource >> 25) & 0x60) != (*(_BYTE *)(v56 + 16LL * v55 + 8) & 0x60))
    || (*(_DWORD *)(v56 + 16LL * v55 + 8) & 0x2000) != 0
    || (v57 = *(_DWORD *)(v56 + 16LL * v55 + 8) & 0x1F) == 0 )
  {
LABEL_112:
    v58 = 0LL;
LABEL_113:
    WdLogSingleEntry1(1LL, 7705LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 7705LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_114;
  }
  if ( v57 != 4 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_112;
  }
  v58 = *(struct DXGRESOURCE **)(v56 + 16LL * v55);
  if ( !v58 )
    goto LABEL_113;
  v59 = (v76.hResource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v59 < *((_DWORD *)Current + 74) )
  {
    v60 = *(_DWORD *)(v56 + 16 * v59 + 8);
    if ( ((v76.hResource >> 25) & 0x60) == (*(_BYTE *)(v56 + 16 * v59 + 8) & 0x60)
      && (v60 & 0x2000) == 0
      && (v60 & 0x1F) != 0 )
    {
      *(_DWORD *)(v56 + 16 * (((unsigned __int64)v76.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
LABEL_114:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v77);
  if ( v58 )
    DXGDEVICE::DestroyAllocationInternal(
      this,
      0,
      0LL,
      v58,
      0LL,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
LABEL_93:
  v36 = v64;
LABEL_48:
  if ( v69 )
  {
    p_pPrivateDriverData = &v36->pPrivateDriverData;
    v38 = v69;
    do
    {
      operator delete(*p_pPrivateDriverData);
      p_pPrivateDriverData += 12;
      --v38;
    }
    while ( v38 );
  }
LABEL_51:
  operator delete(v70);
  v14 = v21;
LABEL_52:
  if ( P != v79 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v80 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v72);
  return v14;
}

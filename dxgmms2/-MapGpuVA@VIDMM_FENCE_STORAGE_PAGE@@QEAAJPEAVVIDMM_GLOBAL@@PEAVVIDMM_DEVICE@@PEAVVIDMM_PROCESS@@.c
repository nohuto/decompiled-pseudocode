/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00AB020
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00AA934 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00A610C (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00A640C (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00A6558 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABBB0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABCF0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B1F64 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00B1F9C (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B467C (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00C3074 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00E6E74 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        struct VIDMM_MONITORED_FENCE_STORAGE *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        bool a8)
{
  VIDMM_PROCESS *v8; // r13
  unsigned int v11; // ecx
  char v12; // dl
  unsigned int v13; // edi
  __int64 v14; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *i; // rsi
  char *v16; // r15
  char *j; // rcx
  __int64 v18; // r10
  struct _KTHREAD **v19; // rcx
  int v20; // r13d
  unsigned int v21; // edi
  unsigned int v22; // r15d
  char *v23; // rcx
  __int64 Pool2; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rax
  char **v30; // rcx
  char *v31; // rax
  struct VIDMM_MAPPED_VA_RANGE *v32; // r13
  void *v33; // rcx
  unsigned __int64 LogicalAddress; // rax
  int v35; // eax
  int v37; // eax
  int v38; // edi
  char v39; // r15
  bool v40; // r8
  VIDMM_FENCE_STORAGE_PAGE *v41; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v42; // rax
  VIDMM_FENCE_STORAGE_PAGE **v43; // rdx
  char *v44; // rcx
  CVirtualAddressAllocator *v45; // rax
  unsigned int v46; // [rsp+78h] [rbp-90h]
  struct _KTHREAD **VirtualAddressAllocator; // [rsp+80h] [rbp-88h]
  unsigned __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  char *v49; // [rsp+90h] [rbp-78h]
  __int128 v50; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v51[20]; // [rsp+A8h] [rbp-60h] BYREF
  char v53; // [rsp+160h] [rbp+58h]
  unsigned int v54; // [rsp+160h] [rbp+58h]

  v8 = a4;
  *a6 = 0LL;
  if ( (*((_BYTE *)a2 + 40936) & 4) == 0 )
    return 0LL;
  v11 = *((_DWORD *)a2 + 1754);
  v12 = -1;
  if ( v11 > 1 )
  {
    v13 = a7;
    if ( a7 )
    {
      if ( ((-1 << v11) & a7) != 0 )
      {
        WdLogSingleEntry0(3LL);
        return 3221225485LL;
      }
    }
    else
    {
      v13 = (1 << v11) - 1;
    }
  }
  else
  {
    v13 = 1;
  }
  v46 = 0;
  if ( a8 )
  {
    if ( _BitScanForward((unsigned int *)&v37, v13) )
      v12 = v37;
    v46 = v12;
  }
  v14 = 0LL;
  v49 = (char *)this + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)*((_QWORD *)this + 7);
        i != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56);
        i = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)i )
  {
    if ( a2 == *((struct VIDMM_GLOBAL **)i + 6) )
      goto LABEL_8;
  }
  i = VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(this, a2);
  if ( !i )
  {
    v38 = -1073741801;
    v39 = 0;
    goto LABEL_68;
  }
LABEL_8:
  v16 = (char *)i + 32;
  for ( j = (char *)*((_QWORD *)i + 4); j != v16; j = *(char **)j )
  {
    if ( v8 == *((VIDMM_PROCESS **)j - 1) && (!a8 || *((_DWORD *)j + 5) == v13) )
    {
      ++*((_DWORD *)j + 4);
      v14 = (__int64)(j - 40);
      break;
    }
  }
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                  v8,
                                                  *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL),
                                                  v46);
  v19 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v53 = 1, *(_BYTE *)(v18 + 2859)) )
    v53 = 0;
  v20 = 0;
  if ( v14 )
  {
    v20 = *(_DWORD *)(v14 + 60);
    *(_DWORD *)(v14 + 60) = v13 | v20;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 64LL, 1700882774LL);
    v14 = Pool2;
    if ( !Pool2 )
    {
      v38 = -1073741801;
      v39 = 0;
      goto LABEL_67;
    }
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_QWORD *)(Pool2 + 32) = a4;
    *(_QWORD *)(Pool2 + 8) = i;
    *(_DWORD *)(Pool2 + 60) = v13;
    ++*((_DWORD *)i + 18);
    if ( v53 )
    {
      v27 = *((_QWORD *)a2 + 3);
      if ( a8 )
      {
        *(_BYTE *)(v14 + 25) = 1;
        v28 = *((_QWORD *)a2 + 5118);
        v29 = *((_QWORD *)a2 + 5119);
      }
      else
      {
        v28 = *(_QWORD *)(v27 + 2768);
        v29 = *(_QWORD *)(v27 + 2776);
      }
      v48 = 0LL;
      v38 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              v26,
              v28,
              v29,
              0x1000u,
              &v48);
      if ( v38 < 0 )
      {
LABEL_54:
        WdLogSingleEntry0(3LL);
        goto LABEL_60;
      }
      *(_QWORD *)v14 = v48;
      *(_BYTE *)(v14 + 24) = 1;
      VIDMM_PROCESS::OpenAdapter(a4, a2);
    }
    else
    {
      *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)this + 15) + 48LL) << 12;
      *(_BYTE *)(Pool2 + 24) = 0;
    }
    v30 = (char **)*((_QWORD *)i + 5);
    v31 = (char *)(v14 + 40);
    if ( *v30 != v16 )
      goto LABEL_39;
    *(_QWORD *)(v14 + 48) = v30;
    *(_QWORD *)v31 = v16;
    *v30 = v31;
    v19 = VirtualAddressAllocator;
    *((_QWORD *)i + 5) = v31;
  }
  if ( !v53 || (v21 = 0, v54 = 0, (v22 = ~v20 & *(_DWORD *)(v14 + 60)) == 0) )
  {
LABEL_19:
    v23 = v49;
    *a6 = *(_QWORD *)v14 + *((unsigned int *)a5 + 4);
    *((_QWORD *)v23 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v23, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v22 & 1) == 0 )
      goto LABEL_37;
    v32 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            v19,
                                            (__int64)i,
                                            0LL,
                                            2,
                                            0x1000uLL,
                                            *(_QWORD *)v14,
                                            0LL,
                                            0LL,
                                            0x1000u,
                                            17LL,
                                            0LL,
                                            v21,
                                            0LL,
                                            1);
    if ( !v32 )
      break;
    v33 = (void *)*((_QWORD *)i + 8);
    v50 = 0LL;
    LogicalAddress = SysMmGetLogicalAddress(v33);
    VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v50, *((struct _MDL **)i + 7), LogicalAddress);
    if ( *(_BYTE *)(v14 + 25) )
    {
      *(_QWORD *)(v14 + 16) = v32;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a2 + 8LL) )
      {
        v48 = 0LL;
        v35 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)VirtualAddressAllocator,
                (__int64)v32,
                v21,
                0,
                0LL,
                (struct _DXGK_ADL *)&v50,
                0,
                (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)&v48,
                0LL);
      }
      else
      {
        memset(v51, 0, 0x58uLL);
        LODWORD(v51[0]) = 113;
        *(_OWORD *)&v51[7] = v50;
        v51[6] = v32;
        v51[5] = VirtualAddressAllocator;
        HIDWORD(v51[0]) = v21;
        v35 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v51, v40);
      }
    }
    else
    {
      v35 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              a2,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a3 + 10) + 176LL * v21),
              v32,
              0,
              (const struct _DXGK_ADL *)&v50,
              0LL,
              0LL);
    }
    v38 = v35;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v32, (struct CVirtualAddressAllocator *)VirtualAddressAllocator);
    if ( v38 < 0 )
      goto LABEL_54;
    v21 = v54;
LABEL_37:
    ++v21;
    v22 >>= 1;
    v54 = v21;
    if ( !v22 )
      goto LABEL_19;
    v19 = VirtualAddressAllocator;
  }
  WdLogSingleEntry0(3LL);
  v38 = -1073741823;
LABEL_60:
  v39 = 0;
  if ( *(_DWORD *)(v14 + 56) != 1 )
    goto LABEL_66;
  v41 = (VIDMM_FENCE_STORAGE_PAGE *)(v14 + 40);
  v39 = 1;
  v42 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v14 + 40);
  if ( !v42 )
    goto LABEL_65;
  if ( v42[1] != v41 || (v43 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v14 + 48), *v43 != v41) )
LABEL_39:
    __fastfail(3u);
  *v43 = (VIDMM_FENCE_STORAGE_PAGE *)v42;
  v42[1] = (VIDMM_FENCE_STORAGE_PAGE *)v43;
LABEL_65:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v41, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)i);
LABEL_66:
  --*(_DWORD *)(v14 + 56);
LABEL_67:
  v8 = a4;
LABEL_68:
  v44 = v49;
  *((_QWORD *)v49 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v44, 0LL);
  KeLeaveCriticalRegion();
  if ( v39 )
  {
    if ( *(_BYTE *)(v14 + 24) )
    {
      v45 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL), v46);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v45, *(_QWORD *)v14);
      VIDMM_PROCESS::CloseAdapter(v8, a2);
    }
    ExFreePoolWithTag((PVOID)v14, 0);
  }
  return (unsigned int)v38;
}

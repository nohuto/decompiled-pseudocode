/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0083994
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00838D4 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C005EDB4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005F094 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F08C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006F458 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0073560 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0082668 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00827A4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0083F24 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0084360 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C008475C (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00B16A4 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BBB9C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
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
  VIDMM_PROCESS *v8; // r12
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  char *v19; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v20; // rax
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *i; // r15
  int v22; // edi
  char v23; // r14
  char *v24; // r12
  char *j; // rcx
  __int64 v26; // r10
  void **v27; // r11
  struct CVirtualAddressAllocator *v28; // rcx
  int v29; // r14d
  char *PoolWithTag; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  char **v38; // rcx
  char *v39; // rax
  unsigned int v40; // r12d
  unsigned int v41; // r14d
  struct VIDMM_MAPPED_VA_RANGE *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  volatile signed __int32 *v45; // r13
  __int64 v46; // rdi
  int v47; // eax
  bool v48; // r8
  __int64 v49; // rax
  int v50; // eax
  VIDMM_FENCE_STORAGE_PAGE *v51; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v52; // rax
  VIDMM_FENCE_STORAGE_PAGE **v53; // rdx
  CVirtualAddressAllocator *v54; // rax
  unsigned int v55; // [rsp+78h] [rbp-81h]
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+80h] [rbp-79h]
  unsigned __int64 v57; // [rsp+88h] [rbp-71h] BYREF
  struct VIDMM_ALLOC *v58; // [rsp+90h] [rbp-69h] BYREF
  _QWORD v59[20]; // [rsp+98h] [rbp-61h] BYREF
  char v61; // [rsp+150h] [rbp+57h]

  v8 = a4;
  *a6 = 0LL;
  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  v11 = *((unsigned int *)a2 + 1750);
  v12 = 1;
  if ( (unsigned int)v11 > 1 && (v13 = a7, v12 = (1 << v11) - 1, a7) )
  {
    if ( (~v12 & a7) != 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v11, a2);
      WdLogEvent5_WdWarning(v14);
      return 3221225485LL;
    }
  }
  else
  {
    v13 = v12;
  }
  v55 = 0;
  if ( a8 )
  {
    v16 = !_BitScanForward((unsigned int *)&v17, v13);
    v18 = -1;
    if ( !v16 )
      v18 = v17;
    v55 = v18;
  }
  v19 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  v20 = (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56);
  for ( i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)*((_QWORD *)this + 7);
        i != v20;
        i = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)i )
  {
    if ( a2 == *((struct VIDMM_GLOBAL **)i + 6) )
      goto LABEL_17;
  }
  i = VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(this, a2);
  if ( !i )
  {
    v22 = -1073741801;
    v23 = 0;
    goto LABEL_62;
  }
LABEL_17:
  v24 = (char *)i + 32;
  for ( j = (char *)*((_QWORD *)i + 4); j != v24; j = *(char **)j )
  {
    if ( a4 == *((struct VIDMM_PROCESS **)j - 1) && (!a8 || *((_DWORD *)j + 5) == v13) )
    {
      ++*((_DWORD *)j + 4);
      v19 = j - 32;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(a4, *(_DWORD *)(*((_QWORD *)a2 + 3) + 232LL), v55);
  v28 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v61 = 1, *(_BYTE *)(v26 + 2635) != (_BYTE)v27) )
    v61 = (char)v27;
  v29 = (int)v27;
  if ( v19 )
  {
    v29 = *((_DWORD *)v19 + 13);
    *((_DWORD *)v19 + 13) = v13 | v29;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x65616956u);
    v27 = 0LL;
    v19 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v22 = -1073741801;
      v23 = 0;
      goto LABEL_61;
    }
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 1;
    *((_QWORD *)PoolWithTag + 3) = a4;
    *((_QWORD *)PoolWithTag + 1) = i;
    *((_DWORD *)PoolWithTag + 13) = v13;
    ++*((_DWORD *)i + 16);
    if ( v61 )
    {
      v32 = *((_QWORD *)a2 + 3);
      if ( a8 )
      {
        v19[17] = 1;
        v33 = *((_QWORD *)a2 + 5118);
        v34 = *((_QWORD *)a2 + 5119);
      }
      else
      {
        v33 = *(_QWORD *)(v32 + 2544);
        v34 = *(_QWORD *)(v32 + 2552);
      }
      v57 = 0LL;
      v22 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              v31,
              v33,
              v34,
              0x1000u,
              &v57);
      if ( v22 < 0 )
      {
LABEL_36:
        v37 = WdLogNewEntry5_WdWarning(v36, v35);
        WdLogEvent5_WdWarning(v37);
        goto LABEL_54;
      }
      *(_QWORD *)v19 = v57;
      v19[16] = 1;
      VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)a4, a2);
      v27 = 0LL;
    }
    else
    {
      *(_QWORD *)PoolWithTag = *(_QWORD *)(*((_QWORD *)this + 15) + 48LL) << 12;
      PoolWithTag[16] = 0;
    }
    v38 = (char **)*((_QWORD *)i + 5);
    v39 = v19 + 32;
    if ( *v38 != v24 )
      goto LABEL_67;
    *((_QWORD *)v19 + 5) = v38;
    *(_QWORD *)v39 = v24;
    *v38 = v39;
    v28 = VirtualAddressAllocator;
    *((_QWORD *)i + 5) = v39;
  }
  if ( v61 == (_BYTE)v27 || (v40 = (unsigned int)v27, (v41 = *((_DWORD *)v19 + 13) & ~v29) == 0) )
  {
LABEL_68:
    *a6 = *(_QWORD *)v19 + *((unsigned int *)a5 + 4);
    *((_QWORD *)this + 10) = v27;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v41 & 1) == 0 )
      goto LABEL_51;
    v42 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            v28,
                                            (__int64)this + 120,
                                            0LL,
                                            2u,
                                            0x1000uLL,
                                            *(_QWORD *)v19,
                                            (unsigned __int64)v27,
                                            (unsigned __int64)v27,
                                            0x1000u,
                                            (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                                            (__int64)v27,
                                            v40,
                                            v27,
                                            1);
    v45 = (volatile signed __int32 *)v42;
    if ( !v42 )
      break;
    if ( v19[17] )
    {
      v46 = *((_QWORD *)this + 15);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a2 + 8LL) )
      {
        v58 = 0LL;
        v47 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)VirtualAddressAllocator,
                (__int64)v42,
                v40,
                0,
                0LL,
                v46,
                0,
                &v58,
                0LL);
      }
      else
      {
        memset(v59, 0, 0x58uLL);
        v59[5] = VirtualAddressAllocator;
        LODWORD(v59[0]) = 113;
        v59[6] = v45;
        HIDWORD(v59[0]) = v40;
        v59[7] = v46;
        v47 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v59, v48);
      }
    }
    else
    {
      v47 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              a2,
              VirtualAddressAllocator,
              (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a3 + 9) + 176LL * v40),
              v42,
              0,
              *((struct _MDL **)this + 15),
              0LL,
              0LL);
    }
    v22 = v47;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v45, VirtualAddressAllocator);
    v27 = 0LL;
    if ( v22 < 0 )
      goto LABEL_36;
LABEL_51:
    ++v40;
    v41 >>= 1;
    if ( !v41 )
      goto LABEL_68;
    v28 = VirtualAddressAllocator;
  }
  v49 = WdLogNewEntry5_WdWarning(v44, v43);
  WdLogEvent5_WdWarning(v49);
  v22 = -1073741823;
LABEL_54:
  v50 = *((_DWORD *)v19 + 12);
  v23 = 0;
  if ( v50 != 1 )
    goto LABEL_60;
  v51 = (VIDMM_FENCE_STORAGE_PAGE *)(v19 + 32);
  v23 = 1;
  v52 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v19 + 4);
  if ( !v52 )
    goto LABEL_59;
  if ( v52[1] != v51 || (v53 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v19 + 5), *v53 != v51) )
LABEL_67:
    __fastfail(3u);
  *v53 = (VIDMM_FENCE_STORAGE_PAGE *)v52;
  v52[1] = (VIDMM_FENCE_STORAGE_PAGE *)v53;
LABEL_59:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v51, i);
  v50 = *((_DWORD *)v19 + 12);
LABEL_60:
  *((_DWORD *)v19 + 12) = v50 - 1;
LABEL_61:
  v8 = a4;
LABEL_62:
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v23 )
  {
    if ( v19[16] )
    {
      v54 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 232LL), v55);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v54, *(_QWORD *)v19);
      VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)v8, a2);
    }
    ExFreePoolWithTag(v19, 0);
  }
  return (unsigned int)v22;
}

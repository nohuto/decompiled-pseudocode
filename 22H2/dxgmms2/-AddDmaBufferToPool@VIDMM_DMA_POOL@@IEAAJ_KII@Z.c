/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008B81C
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0080610 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C008B728 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00B9B70 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x1C0025D84 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D110 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C005EDB4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005F094 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0069DC0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A8D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C006BB80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F08C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0072D9C (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0073560 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00765B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C008C210 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0097430 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(VIDMM_DMA_POOL *this, SIZE_T a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  int OneAllocation; // r12d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // r14
  unsigned int v16; // r8d
  VIDMM_GLOBAL *v17; // r10
  int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _VIDMM_GLOBAL_ALLOC *v22; // r8
  struct VIDMM_DEVICE *v23; // rdx
  struct _VIDMM_MULTI_ALLOC **v24; // rsi
  DXGADAPTER **v25; // rcx
  __int64 v26; // rcx
  struct _VIDMM_MULTI_ALLOC *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  VIDMM_GLOBAL *v33; // rcx
  VIDMM_GLOBAL *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  void *v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // ecx
  SIZE_T v40; // rax
  PVOID v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  SIZE_T v44; // rax
  PVOID v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  SIZE_T v48; // rax
  PVOID v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // eax
  PVOID v52; // rax
  __int64 v53; // rcx
  PVOID v54; // rax
  __int64 v55; // rcx
  SIZE_T v56; // rsi
  unsigned int v57; // r9d
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rdi
  unsigned int v59; // r8d
  __int64 v60; // r10
  __int64 v61; // r11
  volatile signed __int32 *v62; // rax
  volatile signed __int32 *v63; // rsi
  _QWORD *v64; // r8
  __int64 v65; // rdi
  char **v66; // rax
  __int64 v67; // rdx
  struct _ERESOURCE *v68; // rcx
  __int64 v69; // rcx
  struct _KEVENT *v70; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v71; // r8
  void *v72; // rcx
  unsigned __int64 v73; // [rsp+A8h] [rbp-9h] BYREF
  unsigned __int64 v74; // [rsp+B0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v75; // [rsp+B8h] [rbp+7h] BYREF
  unsigned __int64 v76; // [rsp+C0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v77; // [rsp+C8h] [rbp+17h] BYREF
  unsigned __int8 v78; // [rsp+118h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+6Fh]
  unsigned int v80; // [rsp+130h] [rbp+7Fh]

  v80 = a4;
  NumberOfBytes = a2;
  LODWORD(v4) = a3;
  OneAllocation = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v8 = *((_QWORD *)this + 2);
    if ( !v8 || (v9 = *(_QWORD *)(v8 + 24), *(_DWORD *)(v9 + 432) != 2) && !*(_BYTE *)(*(_QWORD *)(v9 + 40) + 346LL) )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C005072C, 1u);
        v10 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v10 + 24) = 1100LL;
LABEL_11:
        WdLogEvent5_WdLowResource(v10);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) == 0 && !(_DWORD)v4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v12 + 24) = 1111LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  v13 = (char *)operator new[](0xB8uLL, 0x32326956u, (POOL_TYPE)512);
  v15 = v13;
  if ( !v13 )
  {
    _InterlockedAdd(&dword_1C0050690, 1u);
    v10 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v10 + 24) = 1123LL;
    goto LABEL_11;
  }
  memset(v13, 0, 0xB8uLL);
  v16 = *((_DWORD *)this + 9);
  if ( v16 )
  {
    v17 = *(VIDMM_GLOBAL **)this;
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      v18 = ((~*(_BYTE *)(1584LL * *((unsigned int *)this + 2) + *((_QWORD *)v17 + 5027) + 436) & 4) << 13) | 0x10000040;
    else
      v18 = *(_BYTE *)(*((_QWORD *)this + 3) + 454LL) != 0 ? 72 : 32840;
    v19 = *(_DWORD *)(*((_QWORD *)v17 + 3) + 348LL);
    if ( (v19 & 8) != 0 || (v19 & 0x10) != 0 )
      v18 |= 4u;
    OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                      v17,
                      *((_QWORD *)this + 2),
                      *((_DWORD *)this + 2),
                      a2,
                      a2,
                      0,
                      v16,
                      0,
                      0,
                      (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v18,
                      0,
                      0LL,
                      0LL,
                      0LL,
                      0xA0000000,
                      0,
                      0LL,
                      0,
                      0LL,
                      (_D3DDDI_SEGMENTPREFERENCE **)v15 + 7);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C0050698, 1u);
      v21 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v21 + 24) = 1187LL;
LABEL_26:
      WdLogEvent5_WdLowResource(v21);
LABEL_82:
      v56 = NumberOfBytes;
      goto LABEL_83;
    }
    v22 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v15 + 7);
    v23 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 2);
    v24 = (struct _VIDMM_MULTI_ALLOC **)(v15 + 64);
    v25 = *(DXGADAPTER ***)this;
    v78 = 0;
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(v25, v23, v22, 0LL, 0, 0LL, (struct VIDMM_ALLOC **)v15 + 8, &v78);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C005069C, 1u);
      v21 = WdLogNewEntry5_WdLowResource(v26);
      *(_QWORD *)(v21 + 24) = 1207LL;
      goto LABEL_26;
    }
    v27 = *v24;
    if ( (*((_DWORD *)*v24 + 7) & 3) == 0 )
    {
      if ( (*((_BYTE *)this + 32) & 1) != 0 )
      {
        VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, v27);
      }
      else
      {
        v31 = *((_QWORD *)v27 + 1);
        v32 = 176LL * *((unsigned int *)this + 2);
        v75 = *v24;
        v76 = *(_QWORD *)(v31 + 72) + v32;
        v33 = *(VIDMM_GLOBAL **)this;
        v73 = 0LL;
        v74 = 0LL;
        OneAllocation = VIDMM_GLOBAL::MakeResident(v33, (struct VIDMM_PAGING_QUEUE *)v76, &v75, 1uLL, 3, &v73, &v74);
        if ( OneAllocation == 259 )
        {
          v34 = *(VIDMM_GLOBAL **)this;
          v77 = *(struct _VIDSCH_SYNC_OBJECT **)(v76 + 88);
          v76 = v73;
          VIDMM_GLOBAL::WaitForFences(v34, &v77, &v76, 1u, 0LL);
          OneAllocation = 0;
        }
      }
      if ( OneAllocation < 0 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v29, v28, v30);
        *(_QWORD *)(v35 + 24) = *v24;
        WdLogEvent5_WdAssertion(v35);
        goto LABEL_82;
      }
    }
  }
  else
  {
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1992LL);
    *((_DWORD *)v15 + 20) = 2;
    v37 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                    a2,
                    (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                    v36,
                    (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                    1028,
                    0x80000000);
    *((_QWORD *)v15 + 9) = v37;
    if ( !v37 )
    {
      _InterlockedAdd(&dword_1C00506A4, 1u);
      v43 = WdLogNewEntry5_WdLowResource(v38);
      *(_QWORD *)(v43 + 24) = 1270LL;
      goto LABEL_81;
    }
    *((PHYSICAL_ADDRESS *)v15 + 11) = MmGetPhysicalAddress(v37);
  }
  if ( (_DWORD)v4 )
  {
    v39 = 3;
    if ( (unsigned int)v4 > 3 )
      v39 = v4;
    v4 = v39;
    v40 = 8LL * v39;
    if ( !is_mul_ok(v39, 8uLL) )
      v40 = -1LL;
    v41 = operator new[](v40, 0x33326956u, (POOL_TYPE)512);
    *((_QWORD *)v15 + 13) = v41;
    if ( !v41 )
    {
      _InterlockedAdd(&dword_1C00506B0, 1u);
      v43 = WdLogNewEntry5_WdLowResource(v42);
      *(_QWORD *)(v43 + 24) = 1297LL;
LABEL_81:
      WdLogEvent5_WdLowResource(v43);
      OneAllocation = -1073741801;
      goto LABEL_82;
    }
    v44 = 24 * v4;
    if ( !is_mul_ok(v4, 0x18uLL) )
      v44 = -1LL;
    v45 = operator new[](v44, 0x34326956u, (POOL_TYPE)512);
    *((_QWORD *)v15 + 14) = v45;
    if ( !v45 )
    {
      _InterlockedAdd(&dword_1C00506A8, 1u);
      v43 = WdLogNewEntry5_WdLowResource(v46);
      *(_QWORD *)(v43 + 24) = 1310LL;
      goto LABEL_81;
    }
    memset(v45, 0, 24 * v4);
  }
  if ( v80 )
  {
    v47 = v80;
    v48 = 24LL * v80;
    if ( !is_mul_ok(v80, 0x18uLL) )
      v48 = -1LL;
    v49 = operator new[](v48, 0x35326956u, PagedPool);
    *((_QWORD *)v15 + 15) = v49;
    if ( !v49 )
    {
      _InterlockedAdd(&dword_1C00506AC, 1u);
      v43 = WdLogNewEntry5_WdLowResource(v50);
      *(_QWORD *)(v43 + 24) = 1327LL;
      goto LABEL_81;
    }
    memset(v49, 0, 24 * v47);
  }
  v51 = *((_DWORD *)this + 22);
  if ( v51 )
  {
    v52 = operator new[](v51, 0x32336956u, (POOL_TYPE)512);
    *((_QWORD *)v15 + 16) = v52;
    if ( !v52 )
    {
      _InterlockedAdd(&dword_1C005070C, 1u);
      v43 = WdLogNewEntry5_WdLowResource(v53);
      *(_QWORD *)(v43 + 24) = 1341LL;
      goto LABEL_81;
    }
    memset(v52, 0, *((unsigned int *)this + 22));
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v54 = operator new[](0x2000uLL, 0x37336956u, PagedPool);
    *((_QWORD *)v15 + 22) = v54;
    if ( !v54 )
    {
      _InterlockedAdd(&dword_1C00506B4, 1u);
      v43 = WdLogNewEntry5_WdLowResource(v55);
      *(_QWORD *)(v43 + 24) = 1359LL;
      goto LABEL_81;
    }
    memset(v54, 0, 0x2000uLL);
    *((_QWORD *)v15 + 21) = 0LL;
  }
  v56 = NumberOfBytes;
  v57 = v80;
  *((_QWORD *)v15 + 5) = NumberOfBytes;
  *((_DWORD *)v15 + 12) = v4;
  *((_DWORD *)v15 + 13) = v57;
  *((_QWORD *)v15 + 17) = this;
  *((_QWORD *)v15 + 20) = 0LL;
  if ( (*((_DWORD *)this + 8) & 0x10) == 0 )
  {
LABEL_71:
    *((_DWORD *)this + 8) &= ~8u;
    *((_DWORD *)this + 32) += *((_DWORD *)v15 + 10);
    v64 = (_QWORD *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 33) += 24 * *((_DWORD *)v15 + 12);
    *((_DWORD *)this + 34) += 24 * *((_DWORD *)v15 + 13);
    if ( v64 )
    {
      v65 = *(_QWORD *)(*(_QWORD *)(v64[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v64 + 24LL) + 232LL));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v65 + 440, 0LL);
      *(_QWORD *)(v65 + 456) += *((_QWORD *)v15 + 5);
      ++*(_DWORD *)(v65 + 448);
      *(_DWORD *)(v65 + 464) += 24 * *((_DWORD *)v15 + 12);
      *(_DWORD *)(v65 + 468) += 24 * *((_DWORD *)v15 + 13);
      ExReleasePushLockExclusiveEx(v65 + 440, 0LL);
      KeLeaveCriticalRegion();
    }
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, *((_QWORD *)v15 + 5));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v15 + 12));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v15 + 13));
    ++*((_DWORD *)this + 23);
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
    v66 = (char **)((char *)this + 96);
    v67 = *((_QWORD *)this + 12);
    if ( *(VIDMM_DMA_POOL **)(v67 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
      __fastfail(3u);
    v68 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
    *(_QWORD *)v15 = v67;
    *((_QWORD *)v15 + 1) = v66;
    *(_QWORD *)(v67 + 8) = v15;
    *v66 = v15;
    ExReleaseResourceLite(v68);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v69) + 24) = v15;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pppxxxp_EtwWriteTransfer(
        *((unsigned int *)v15 + 13),
        *((unsigned int *)v15 + 12),
        *(_QWORD *)this,
        *((_QWORD *)this + 3),
        *(_QWORD *)(*(_QWORD *)this + 24LL),
        v15,
        *((_QWORD *)v15 + 5),
        *((unsigned int *)v15 + 12),
        *((unsigned int *)v15 + 13),
        *((_QWORD *)v15 + 7));
    return (unsigned int)OneAllocation;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 455LL) )
  {
    *((_QWORD *)v15 + 12) = *(_QWORD *)(*((_QWORD *)v15 + 8) + 144LL);
    goto LABEL_71;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 232LL),
                              *((_DWORD *)this + 2));
  if ( VirtualAddressAllocator )
  {
    v62 = (volatile signed __int32 *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                       VirtualAddressAllocator,
                                       *((_QWORD *)v15 + 8),
                                       0LL,
                                       1u,
                                       v56,
                                       0LL,
                                       *(_QWORD *)(v60 + 2544),
                                       *(_QWORD *)(v60 + 2552),
                                       0x1000u,
                                       (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)((*(_DWORD *)(v61 + 32) < 0x6000u) | 0x12LL),
                                       0LL,
                                       v59,
                                       0LL,
                                       1);
    v63 = v62;
    if ( !v62 )
      goto LABEL_82;
    *((_QWORD *)v15 + 12) = *((_QWORD *)v62 + 12);
    OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                      *(VIDMM_GLOBAL **)this,
                      VirtualAddressAllocator,
                      (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 8) + 8LL) + 72LL)
                                                  + 176LL * *((unsigned int *)this + 2)),
                      (struct VIDMM_MAPPED_VA_RANGE *)v62,
                      KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                      0LL,
                      0LL,
                      0LL);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v63, VirtualAddressAllocator);
    if ( OneAllocation < 0 )
      goto LABEL_82;
    goto LABEL_71;
  }
  OneAllocation = -1073741801;
LABEL_83:
  operator delete(*((void **)v15 + 22));
  operator delete(*((void **)v15 + 16));
  operator delete(*((void **)v15 + 15));
  operator delete(*((void **)v15 + 14));
  operator delete(*((void **)v15 + 13));
  v70 = (struct _KEVENT *)*((_QWORD *)v15 + 8);
  if ( v70 )
    VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v70, 0LL, 0, 0, 0LL);
  v71 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v15 + 7);
  if ( v71 )
    VIDMM_GLOBAL::DestroyOneAllocation(*(VIDMM_GLOBAL **)this, *((struct VIDMM_DEVICE **)this + 2), v71, 1);
  v72 = (void *)*((_QWORD *)v15 + 9);
  if ( v72 )
    MmFreeContiguousMemorySpecifyCache(v72, v56, *((MEMORY_CACHING_TYPE *)v15 + 20));
  operator delete(v15);
  return (unsigned int)OneAllocation;
}

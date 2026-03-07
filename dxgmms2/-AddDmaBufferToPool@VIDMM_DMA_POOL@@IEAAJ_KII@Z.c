__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(VIDMM_DMA_POOL *this, SIZE_T a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  SIZE_T v6; // r13
  int OneAllocation; // ebp
  _QWORD *v9; // r14
  unsigned int v10; // r8d
  int v11; // eax
  int v12; // edx
  VIDMM_GLOBAL *v13; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v14; // r8
  struct _VIDMM_MULTI_ALLOC **v15; // rdi
  struct VIDMM_DEVICE *v16; // rdx
  struct VIDMM_ALLOC *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  struct _VIDSCH_SYNC_OBJECT **v20; // r13
  VIDMM_GLOBAL *v21; // rcx
  int Resident; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rsi
  struct _KTHREAD **VirtualAddressAllocator; // rdi
  __int64 v34; // r10
  unsigned int v35; // r11d
  volatile signed __int32 *v36; // rax
  volatile signed __int32 *v37; // rsi
  _QWORD *v38; // r8
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rdx
  struct _ERESOURCE *v42; // rcx
  __int64 v43; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  void *v53; // rax
  __int64 v54; // rcx
  struct _KEVENT *v55; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v56; // r8
  void *v57; // rcx
  unsigned __int64 v58; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v59; // [rsp+A8h] [rbp-50h] BYREF
  struct _VIDMM_MULTI_ALLOC *v60; // [rsp+B0h] [rbp-48h] BYREF
  unsigned __int8 v61; // [rsp+100h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+108h] [rbp+10h]
  unsigned int v63; // [rsp+118h] [rbp+20h]

  v63 = a4;
  NumberOfBytes = a2;
  v4 = a4;
  LODWORD(v5) = a3;
  v6 = a2;
  OneAllocation = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v46 = *((_QWORD *)this + 2);
    if ( !v46
      || (v47 = *(_QWORD *)(v46 + 24), *(_DWORD *)(v47 + 464) != 2)
      && (*(_DWORD *)(*(_QWORD *)(v47 + 40) + 424LL) & 4) == 0 )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C007684C, 1u);
        WdLogSingleEntry1(6LL, 1101LL);
LABEL_64:
        DxgkLogInternalTriageEvent(v48, 262145LL);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 || (_DWORD)v5 )
  {
    v9 = (_QWORD *)operator new(184LL, 0x32326956u, 64LL);
    if ( !v9 )
    {
      _InterlockedAdd(&dword_1C00767B0, 1u);
      WdLogSingleEntry1(6LL, 1124LL);
      goto LABEL_64;
    }
    v10 = *((_DWORD *)this + 9);
    if ( !v10 )
    {
      v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 2216LL);
      *((_DWORD *)v9 + 20) = 2;
      v53 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                      v6,
                      (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                      v52,
                      (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                      1028,
                      0x80000000);
      v9[9] = v53;
      if ( !v53 )
      {
        _InterlockedAdd(&dword_1C00767C4, 1u);
        WdLogSingleEntry1(6LL, 1270LL);
        goto LABEL_81;
      }
      *((PHYSICAL_ADDRESS *)v9 + 11) = MmGetPhysicalAddress(v53);
LABEL_21:
      if ( (_DWORD)v5 )
      {
        v23 = 3;
        if ( (unsigned int)v5 > 3 )
          v23 = v5;
        v5 = v23;
        v24 = 8LL * v23;
        if ( !is_mul_ok(v23, 8uLL) )
          v24 = -1LL;
        v25 = operator new[](v24, 0x33326956u, 64LL);
        v9[13] = v25;
        if ( !v25 )
        {
          _InterlockedAdd(&dword_1C00767D0, 1u);
          WdLogSingleEntry1(6LL, 1297LL);
          goto LABEL_81;
        }
        v26 = 24 * v5;
        if ( !is_mul_ok(v5, 0x18uLL) )
          v26 = -1LL;
        v27 = operator new[](v26, 0x34326956u, 64LL);
        v9[14] = v27;
        if ( !v27 )
        {
          _InterlockedAdd(&dword_1C00767C8, 1u);
          WdLogSingleEntry1(6LL, 1310LL);
          goto LABEL_81;
        }
      }
      if ( !v4 )
        goto LABEL_34;
      v28 = 24LL * v4;
      if ( !is_mul_ok(v4, 0x18uLL) )
        v28 = -1LL;
      v29 = operator new[](v28, 0x35326956u, 256LL);
      v9[15] = v29;
      if ( !v29 )
      {
        _InterlockedAdd(&dword_1C00767CC, 1u);
        WdLogSingleEntry1(6LL, 1326LL);
      }
      else
      {
LABEL_34:
        v30 = *((_DWORD *)this + 22);
        if ( v30 && (v31 = operator new[](v30, 0x32336956u, 64LL), (v9[16] = v31) == 0LL) )
        {
          _InterlockedAdd(&dword_1C007682C, 1u);
          WdLogSingleEntry1(6LL, 1339LL);
        }
        else
        {
          if ( (*((_BYTE *)this + 32) & 1) == 0 )
            goto LABEL_37;
          v45 = operator new[](0x2000LL, 0x37336956u, 256LL);
          v9[22] = v45;
          if ( v45 )
          {
            v9[21] = 0LL;
LABEL_37:
            v9[5] = v6;
            *((_DWORD *)v9 + 12) = v5;
            *((_DWORD *)v9 + 13) = v4;
            v9[17] = this;
            v9[20] = 0LL;
            if ( (*((_DWORD *)this + 8) & 0x10) != 0 )
            {
              if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 439LL) )
              {
                v32 = *(_QWORD *)this;
                VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                                *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                                                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL),
                                                                *((_DWORD *)this + 2));
                if ( VirtualAddressAllocator )
                {
                  v36 = CVirtualAddressAllocator::MapVirtualAddressRange(
                          VirtualAddressAllocator,
                          v9[8],
                          0LL,
                          1,
                          v6,
                          0LL,
                          *(_QWORD *)(v34 + 2768),
                          *(_QWORD *)(v34 + 2776),
                          0x1000u,
                          (*(_DWORD *)(v32 + 32) < 0x6000u) | 0x12LL,
                          0LL,
                          v35,
                          0LL,
                          1);
                  v37 = v36;
                  if ( v36 )
                  {
                    v9[12] = *((_QWORD *)v36 + 12);
                    OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                                      *(VIDMM_GLOBAL **)this,
                                      (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
                                      (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*(_QWORD *)(v9[8] + 8LL) + 80LL)
                                                                  + 176LL * *((unsigned int *)this + 2)),
                                      (struct VIDMM_MAPPED_VA_RANGE *)v36,
                                      KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                                      (const struct _DXGK_ADL *)&xmmword_1C004F0A8,
                                      0LL,
                                      0LL);
                    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
                      (PVOID)v37,
                      (struct CVirtualAddressAllocator *)VirtualAddressAllocator);
                    if ( OneAllocation >= 0 )
                      goto LABEL_42;
                  }
LABEL_83:
                  operator delete((void *)v9[22]);
                  operator delete((void *)v9[16]);
                  operator delete((void *)v9[15]);
                  operator delete((void *)v9[14]);
                  operator delete((void *)v9[13]);
                  v55 = (struct _KEVENT *)v9[8];
                  if ( v55 )
                    VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v55, 0LL, 0, 0, 0LL);
                  v56 = (struct _VIDMM_GLOBAL_ALLOC *)v9[7];
                  if ( v56 )
                    VIDMM_GLOBAL::DestroyOneAllocation(
                      *(struct _KTHREAD ***)this,
                      *((struct VIDMM_DEVICE **)this + 2),
                      v56,
                      1);
                  v57 = (void *)v9[9];
                  if ( v57 )
                    MmFreeContiguousMemorySpecifyCache(v57, NumberOfBytes, *((MEMORY_CACHING_TYPE *)v9 + 20));
                  operator delete(v9);
                  return (unsigned int)OneAllocation;
                }
LABEL_82:
                OneAllocation = -1073741801;
                goto LABEL_83;
              }
              v9[12] = *(_QWORD *)(v9[8] + 144LL);
            }
LABEL_42:
            *((_DWORD *)this + 8) &= ~8u;
            *((_DWORD *)this + 32) += *((_DWORD *)v9 + 10);
            v38 = (_QWORD *)*((_QWORD *)this + 2);
            *((_DWORD *)this + 33) += 24 * *((_DWORD *)v9 + 12);
            *((_DWORD *)this + 34) += 24 * *((_DWORD *)v9 + 13);
            if ( v38 )
            {
              v39 = *(_QWORD *)(*(_QWORD *)(v38[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v38 + 24LL) + 240LL));
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v39 + 440, 0LL);
              *(_QWORD *)(v39 + 456) += v9[5];
              ++*(_DWORD *)(v39 + 448);
              *(_DWORD *)(v39 + 464) += 24 * *((_DWORD *)v9 + 12);
              *(_DWORD *)(v39 + 468) += 24 * *((_DWORD *)v9 + 13);
              ExReleasePushLockExclusiveEx(v39 + 440, 0LL);
              KeLeaveCriticalRegion();
            }
            _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, v9[5]);
            _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v9 + 12));
            _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v9 + 13));
            ++*((_DWORD *)this + 23);
            VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
            v40 = (_QWORD *)((char *)this + 96);
            v41 = *((_QWORD *)this + 12);
            if ( *(VIDMM_DMA_POOL **)(v41 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
              __fastfail(3u);
            v42 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
            *v9 = v41;
            v9[1] = v40;
            *(_QWORD *)(v41 + 8) = v9;
            *v40 = v9;
            ExReleaseResourceLite(v42);
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v43) + 24) = v9;
            if ( bTracingEnabled )
            {
              if ( (byte_1C00769C1 & 1) != 0 )
                McTemplateK0pppxxxp_EtwWriteTransfer(
                  *((unsigned int *)v9 + 13),
                  *((unsigned int *)v9 + 12),
                  *(_QWORD *)this,
                  *((_QWORD *)this + 3),
                  *(_QWORD *)(*(_QWORD *)this + 24LL),
                  v9,
                  v9[5],
                  *((unsigned int *)v9 + 12),
                  *((unsigned int *)v9 + 13),
                  v9[7]);
            }
            return (unsigned int)OneAllocation;
          }
          _InterlockedAdd(&dword_1C00767D4, 1u);
          WdLogSingleEntry1(6LL, 1356LL);
        }
      }
LABEL_81:
      DxgkLogInternalTriageEvent(v54, 262145LL);
      goto LABEL_82;
    }
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      v11 = ((~*(_BYTE *)(1616LL * *((unsigned int *)this + 2) + *(_QWORD *)(*(_QWORD *)this + 40224LL) + 444) & 0x10) << 11) | 0x10000040;
    else
      v11 = *(_BYTE *)(*((_QWORD *)this + 3) + 438LL) != 0 ? 72 : 32840;
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 436LL);
    if ( (v12 & 8) != 0 || (v12 & 0x10) != 0 )
      v11 |= 4u;
    OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                      *(_QWORD *)this,
                      *((_QWORD **)this + 2),
                      *((_DWORD *)this + 2),
                      v6,
                      v6,
                      0,
                      v10,
                      0,
                      0,
                      (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v11,
                      0,
                      0LL,
                      0LL,
                      0LL,
                      -1610612736,
                      0,
                      0LL,
                      0LL,
                      0LL,
                      v9 + 7);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C00767B8, 1u);
      WdLogSingleEntry1(6LL, 1187LL);
    }
    else
    {
      v13 = *(VIDMM_GLOBAL **)this;
      v14 = (struct _VIDMM_GLOBAL_ALLOC *)v9[7];
      v15 = (struct _VIDMM_MULTI_ALLOC **)(v9 + 8);
      v16 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 2);
      v61 = 0;
      OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(v13, v16, v14, 0LL, 0, 0LL, (struct VIDMM_ALLOC **)v9 + 8, &v61);
      if ( OneAllocation >= 0 )
      {
        v17 = *v15;
        if ( (*((_DWORD *)*v15 + 7) & 3) != 0 )
        {
LABEL_20:
          v4 = v63;
          goto LABEL_21;
        }
        if ( (*((_BYTE *)this + 32) & 1) != 0 )
        {
          VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, v17);
          goto LABEL_20;
        }
        v18 = *((_QWORD *)v17 + 1);
        v19 = 176LL * *((unsigned int *)this + 2);
        v60 = *v15;
        v20 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v18 + 80) + v19);
        v21 = *(VIDMM_GLOBAL **)this;
        v58 = 0LL;
        v59 = 0LL;
        Resident = VIDMM_GLOBAL::MakeResident(v21, (struct VIDMM_PAGING_QUEUE *)v20, &v60, 1LL, 3, &v58, &v59);
        OneAllocation = Resident;
        if ( Resident == 259 )
        {
          VIDMM_GLOBAL::WaitForFence(*(VIDMM_GLOBAL **)this, v20[11], v58);
          OneAllocation = 0;
LABEL_19:
          v6 = NumberOfBytes;
          goto LABEL_20;
        }
        if ( Resident >= 0 )
          goto LABEL_19;
        WdLogSingleEntry1(1LL, *v15);
        v51 = 0x40000LL;
LABEL_70:
        DxgkLogInternalTriageEvent(v50, v51);
        goto LABEL_83;
      }
      _InterlockedAdd(&dword_1C00767BC, 1u);
      WdLogSingleEntry1(6LL, 1207LL);
    }
    v51 = 262145LL;
    goto LABEL_70;
  }
  WdLogSingleEntry1(1LL, 1112LL);
  DxgkLogInternalTriageEvent(v49, 0x40000LL);
  return 3221225485LL;
}

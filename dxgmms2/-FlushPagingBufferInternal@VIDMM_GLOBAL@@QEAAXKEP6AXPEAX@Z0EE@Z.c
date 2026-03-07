// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (*a4)(void *),
        void *a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // r10d
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // r12
  unsigned __int8 v15; // dl
  unsigned __int64 v16; // rcx
  char v17; // r15
  _QWORD **v18; // rcx
  _QWORD *v19; // rbx
  VIDMM_GLOBAL *v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rcx
  struct VIDMM_VAD *v25; // rdx
  char *v26; // rbx
  __int64 v27; // r8
  _QWORD *v28; // r15
  VIDMM_GLOBAL *v29; // r14
  int v30; // eax
  VIDMM_GLOBAL **v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct _VIDMM_DMA_BUFFER **v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rbx
  unsigned int v41; // r15d
  __int64 v42; // rcx
  bool v43; // dl
  bool v44; // zf
  __int64 v45; // r9
  unsigned int v46; // r14d
  struct _VIDMM_DMA_BUFFER **v47; // r13
  __int64 v48; // rbx
  __int64 v49; // r9
  __int64 v50; // rdx
  struct _VIDSCH_SYNC_OBJECT *v51; // r8
  unsigned __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  int NodeOrdinal; // eax
  VIDMM_GLOBAL *v57; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v58; // [rsp+40h] [rbp-91h]
  struct VIDMM_VAD *v59; // [rsp+40h] [rbp-91h]
  unsigned int v60; // [rsp+40h] [rbp-91h]
  unsigned int v61; // [rsp+48h] [rbp-89h]
  unsigned __int64 v62; // [rsp+50h] [rbp-81h] BYREF
  CVirtualAddressAllocator *v63; // [rsp+58h] [rbp-79h]
  __int128 v64; // [rsp+60h] [rbp-71h] BYREF
  __int128 v65; // [rsp+70h] [rbp-61h]
  __int128 v66; // [rsp+80h] [rbp-51h]
  __int128 v67; // [rsp+90h] [rbp-41h]
  __int128 v68; // [rsp+A0h] [rbp-31h]
  __int64 v69; // [rsp+B0h] [rbp-21h]
  __int64 v70; // [rsp+C0h] [rbp-11h]
  unsigned __int64 v71; // [rsp+C8h] [rbp-9h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v72; // [rsp+D0h] [rbp-1h] BYREF
  unsigned __int8 v73; // [rsp+120h] [rbp+4Fh]
  unsigned int v74; // [rsp+128h] [rbp+57h] BYREF
  void (*v75)(void *); // [rsp+138h] [rbp+67h]

  v75 = a4;
  v74 = a2;
  v7 = a2;
  v8 = a2;
  v9 = 1616LL * a2;
  v64 = 0LL;
  v65 = 0LL;
  v69 = 0LL;
  v12 = *((_QWORD *)this + 5028);
  v73 = a3;
  v66 = 0LL;
  v13 = v9 + v12;
  v67 = 0LL;
  v68 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7 = v74;
    a4 = v75;
    v21[3] = a3;
    v21[4] = *((unsigned int *)this + v8 + 414);
    v21[5] = *((unsigned int *)this + v8 + 478);
    v12 = *((_QWORD *)this + 5028);
  }
  v14 = v8 + 478;
  v15 = *((_BYTE *)this + 40937);
  if ( (v15 & 4) != 0 && a3 )
  {
    v15 |= 8u;
    *((_BYTE *)this + 40937) = v15;
  }
  v16 = v15;
  if ( (*(_BYTE *)(v9 + v12 + 444) & 1) != 0 && *((_QWORD *)this + v8 + 143) && *((_DWORD *)this + 2) && (v15 & 4) == 0 )
  {
    *((_BYTE *)this + 40937) = v15 | 4;
    v63 = (CVirtualAddressAllocator *)*((_QWORD *)this + v8 + 5052);
    while ( 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = (_QWORD **)(v9 + *((_QWORD *)this + 5028) + 472LL);
        v19 = *v18;
        if ( *v18 == v18 )
          break;
        v58 = (struct VIDMM_MAPPED_VA_RANGE *)(v19 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v8 + 749), v19[2]) )
          break;
        v23 = *v19;
        if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v24 = (_QWORD *)v19[1], (_QWORD *)*v24 != v19) )
LABEL_44:
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        *v19 = 0LL;
        v19[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v17 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)this + v8 + 5052),
            v58,
            0LL,
            1u);
        }
        v25 = *(struct VIDMM_VAD **)v58;
        v59 = *(struct VIDMM_VAD **)v58;
        if ( *((struct _KTHREAD **)v63 + 8) == KeGetCurrentThread() )
        {
          CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(v63, v25, v22);
        }
        else
        {
          v26 = (char *)v63 + 56;
          DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)v63 + 56));
          CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(v63, v59, v27);
          *((_QWORD *)v63 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v26, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      if ( !v17 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v74, 0, 0LL, 0LL, 0, 0);
    }
    *((_BYTE *)this + 40937) &= ~4u;
    v16 = *((unsigned __int8 *)this + 40937);
    a3 = v73;
    v7 = v74;
    a4 = v75;
  }
  if ( (v16 & 4) == 0 )
  {
    if ( a6 )
    {
      if ( (v16 & 8) != 0 )
        a3 = 0;
      v73 = a3;
    }
    LOBYTE(v16) = v16 & 0xF7;
    *((_BYTE *)this + 40937) = v16;
  }
  if ( *((_DWORD *)this + v14) == *((_DWORD *)this + v8 + 414)
    && *((_DWORD *)this + v8 + 606) == *((_DWORD *)this + v8 + 542)
    && !a3 )
  {
    v20 = (VIDMM_GLOBAL *)*((_QWORD *)this + 471);
    while ( v20 != (VIDMM_GLOBAL *)((char *)this + 3768) )
    {
      v28 = (_QWORD *)((char *)v20 - 208);
      v29 = v20;
      v30 = *((_DWORD *)v20 - 35);
      v20 = *(VIDMM_GLOBAL **)v20;
      if ( (v30 & 0x3F) == v7 )
      {
        if ( *((VIDMM_GLOBAL **)v20 + 1) != v29 )
          goto LABEL_44;
        v31 = (VIDMM_GLOBAL **)*((_QWORD *)v29 + 1);
        if ( *v31 != v29 )
          goto LABEL_44;
        *v31 = v20;
        *((_QWORD *)v20 + 1) = v31;
        if ( g_IsInternalReleaseOrDbg )
        {
          v32 = WdLogNewEntry5_WdTrace(v16);
          v7 = v74;
          *(_QWORD *)(v32 + 24) = v28;
        }
        v16 = *((_QWORD *)this + 474);
        if ( *(VIDMM_GLOBAL **)v16 != (VIDMM_GLOBAL *)((char *)this + 3784) )
          goto LABEL_44;
        *(_QWORD *)v29 = (char *)this + 3784;
        *((_QWORD *)v29 + 1) = v16;
        *(_QWORD *)v16 = v29;
        *((_QWORD *)this + 474) = v29;
      }
    }
    *(_QWORD *)(v13 + 456) = 0LL;
  }
  else
  {
    if ( !*((_DWORD *)this + 2) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
      a4 = v75;
    }
    v33 = *((_QWORD *)this + v8 + 143);
    v34 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
    LODWORD(v63) = *(_DWORD *)(v33 + 172);
    v35 = *(_DWORD *)(v33 + 168);
    *(_DWORD *)(v33 + 172) = v35;
    v60 = v35;
    v36 = *((_QWORD *)*v34 + 7);
    if ( v36 )
    {
      v37 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v36 + 120));
      v40 = *(_QWORD *)(v39 + 128) + *(_QWORD *)(v38 + 24);
      v34 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
      v61 = v37;
    }
    else
    {
      v40 = *((_QWORD *)*v34 + 11);
      v61 = 0;
    }
    if ( a4 )
    {
      ((void (__fastcall *)(void *))a4)(a5);
      v34 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
    }
    VIDMM_DMA_POOL::FlushPendingCPUAccess(*((VIDMM_DMA_POOL **)*v34 + 17), *v34);
    if ( *(_DWORD *)(v13 + 32) )
    {
      v41 = 0;
      do
      {
        v42 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v41 + *(_DWORD *)(*((_QWORD *)this + 5028) + v9 + 28)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 152LL))(v42);
        ++v41;
      }
      while ( v41 < *(_DWORD *)(v13 + 32) );
      a3 = v73;
    }
    v43 = *((_DWORD *)this + v8 + 414) == *((_DWORD *)this + v14)
       && *((_DWORD *)this + v8 + 542) == *((_DWORD *)this + v8 + 606);
    v44 = *((_DWORD *)this + v8 + 1177) == 0;
    v70 = v8 + 542;
    v45 = v8 + 606;
    if ( v44 && v43 )
    {
      v46 = v74;
      v47 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
      v48 = 4 * (v8 + 542);
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 5028) + v9 + 445) & 1) != 0 )
        WdLogSingleEntry1(3LL, v8);
      v46 = v74;
      v62 = 0LL;
      VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, v74, &v62);
      v50 = *((_QWORD *)this + 2);
      v51 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + v8 + 749);
      v52 = v62;
      LOBYTE(v74) = *(_BYTE *)(*(_QWORD *)(v50 + 744) + 55LL);
      v72 = v51;
      v71 = v62;
      if ( (_BYTE)v74 && !*(_BYTE *)(*(_QWORD *)(v50 + 744) + 58LL) )
      {
        VIDMM_GLOBAL::SignalMonitoredFence(this, v46, v51, v62, (bool *)&v74);
        v49 = v8 + 606;
      }
      *(_QWORD *)&v65 = v52;
      *(_QWORD *)&v64 = 0LL;
      v53 = *((_QWORD *)this + v8 + 749);
      v47 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
      LODWORD(v64) = 256;
      v54 = *(_QWORD *)(v53 + 64);
      *((_QWORD *)&v65 + 1) = *((_QWORD *)this + v8 + 813);
      *((_QWORD *)&v64 + 1) = *v47;
      *(_QWORD *)&v66 = v54;
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 32LL));
      LODWORD(v54) = *((_DWORD *)this + v14);
      *(_QWORD *)&v67 = __PAIR64__(v54, v61);
      LODWORD(v53) = *((_DWORD *)this + v8 + 414) - v54;
      LODWORD(v54) = *((_DWORD *)this + v49);
      *((_QWORD *)&v67 + 1) = __PAIR64__(v54, v53);
      *((_QWORD *)&v66 + 1) = v40;
      v48 = 4 * v70;
      LODWORD(v68) = *((_DWORD *)this + v70) - v54;
      *(_QWORD *)((char *)&v68 + 4) = __PAIR64__(v60, (unsigned int)v63);
      v55 = *(_QWORD *)(*((_QWORD *)this + 3) + 2808LL) + 344 * v8;
      if ( a7 )
      {
        NodeOrdinal = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v46, *(unsigned int *)(v55 + 20));
        LOBYTE(v69) = 1;
      }
      else
      {
        NodeOrdinal = VidSchGetNodeOrdinal(
                        *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
                        v46,
                        *(unsigned __int16 *)(v55 + 2));
        LOBYTE(v69) = 0;
      }
      v44 = (*((_BYTE *)this + 40936) & 2) == 0;
      HIDWORD(v68) = NodeOrdinal;
      if ( !v44 && VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
          v57,
          (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)&v64,
          v46);
      VidSchSubmitPagingCommand(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v64);
      if ( !(_BYTE)v74 )
        VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v72, &v71);
      v45 = v8 + 606;
      *((_QWORD *)this + v8 + 685) = v62;
    }
    *((_DWORD *)this + v14) = *((_DWORD *)this + v8 + 414);
    *((_DWORD *)this + v45) = *(_DWORD *)((char *)this + v48);
    VIDMM_GLOBAL::FlushAllTemporaryAllocation(this, v46);
    *((_DWORD *)this + v8 + 964) = 1;
    *((_DWORD *)this + v8 + 1177) = 0;
    if ( a3 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + v8 + 79), *v47, 1);
      VIDMM_DMA_POOL::AcquireBuffer(*((VIDMM_DMA_POOL **)this + v8 + 79), v47, 0, 1u);
      *((_DWORD *)*v47 + 8) = 1;
      *((_DWORD *)this + v8 + 414) = 0;
      *((_DWORD *)this + v14) = 0;
      *(_DWORD *)((char *)this + v48) = 0;
      *((_DWORD *)this + v8 + 606) = 0;
    }
    *(_QWORD *)(*((_QWORD *)this + 5028) + 456LL) = 0LL;
  }
}

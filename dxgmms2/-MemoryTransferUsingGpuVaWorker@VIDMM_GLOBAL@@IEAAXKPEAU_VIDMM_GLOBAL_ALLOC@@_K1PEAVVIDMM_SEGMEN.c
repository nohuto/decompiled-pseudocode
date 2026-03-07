void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        unsigned __int64 a10,
        struct _MDL *a11,
        unsigned __int64 a12,
        struct _DXGK_TRANSFERFLAGS a13,
        unsigned __int64 a14)
{
  unsigned __int64 v14; // r13
  VIDMM_SEGMENT *v15; // r10
  VIDMM_GLOBAL *v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  bool v21; // r12
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  struct VIDMM_SEGMENT *v29; // rcx
  struct _MDL *v30; // r9
  _QWORD *v31; // rax
  struct _MDL *v32; // r9
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 LogicalAddress; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // r13d
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // r13
  bool MustFlushTlbOnValidTransition; // al
  LARGE_INTEGER *v45; // rbx
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r8
  struct _VIDMM_GLOBAL_ALLOC *v48; // r8
  ADAPTER_RENDER *v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // r10
  CVirtualAddressAllocator *v52; // rbx
  VIDMM_GLOBAL *v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // ebx
  int v57; // ebx
  __int64 v58; // r13
  HANDLE CurrentProcessId; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  bool v62; // sf
  struct VIDMM_MAPPED_VA_RANGE *v63; // r10
  __int64 v64; // r8
  __int64 *v65; // rdx
  __int64 v66; // rcx
  __int64 **v67; // rax
  unsigned __int64 v68; // r9
  __int64 *v69; // rcx
  __int64 v70; // rdx
  __int64 **v71; // rax
  unsigned __int8 *v72; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v73; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v74[7]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int64 v75; // [rsp+58h] [rbp-A8h]
  struct _MDL *v76; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v77; // [rsp+68h] [rbp-98h]
  unsigned __int64 v78; // [rsp+70h] [rbp-90h]
  unsigned int v79; // [rsp+78h] [rbp-88h]
  unsigned __int64 v80; // [rsp+80h] [rbp-80h]
  unsigned int v81; // [rsp+88h] [rbp-78h]
  unsigned int v82; // [rsp+8Ch] [rbp-74h]
  struct VIDMM_MAPPED_VA_RANGE *v83; // [rsp+90h] [rbp-70h]
  struct _MDL *v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h]
  int v86; // [rsp+A8h] [rbp-58h]
  void *v87; // [rsp+B0h] [rbp-50h]
  struct VIDMM_SEGMENT *v88; // [rsp+B8h] [rbp-48h]
  struct VIDMM_SEGMENT *v89; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v92; // [rsp+D8h] [rbp-28h]
  __int128 v93; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v94; // [rsp+F0h] [rbp-10h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v95; // [rsp+100h] [rbp+0h] BYREF
  int v96; // [rsp+240h] [rbp+140h] BYREF
  int v97; // [rsp+244h] [rbp+144h]
  __int64 v98; // [rsp+248h] [rbp+148h]
  unsigned __int64 v99; // [rsp+250h] [rbp+150h]

  v14 = a4;
  v15 = a9;
  v17 = this;
  v18 = a7;
  v76 = a8;
  v92 = a4;
  v84 = a11;
  v79 = a2;
  v19 = *((unsigned int *)this + 10244);
  v91 = a14;
  v88 = a6;
  v89 = a9;
  if ( a6 != a9 )
  {
    v20 = v19;
    v21 = 1;
LABEL_10:
    v22 = a12;
    v23 = a5;
    v80 = a12;
    goto LABEL_11;
  }
  if ( a7 == a10 )
    return;
  this = (VIDMM_GLOBAL *)(a7 - a10);
  v20 = (unsigned int)v19;
  if ( a10 >= a7 )
    this = (VIDMM_GLOBAL *)(a10 - a7);
  v21 = a10 < a7;
  if ( (unsigned __int64)this <= v19 )
    v20 = (unsigned __int64)this;
  if ( a10 < a7 )
    goto LABEL_10;
  v22 = a12;
  v23 = a4 + a5;
  this = (VIDMM_GLOBAL *)(a12 + a4);
  v80 = a12 + a4;
LABEL_11:
  v24 = v23 + a10;
  v78 = v23 + a10;
  v25 = v23 + a7;
  v77 = v23 + a7;
  if ( a6 )
    v81 = VIDMM_SEGMENT::DriverId(a6);
  else
    v81 = 0;
  if ( v15 )
    v82 = VIDMM_SEGMENT::DriverId(v15);
  else
    v82 = 0;
  v74[0] = 0;
  v73 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
    v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v26);
    v27[3] = v14;
    v27[4] = a5;
    v27[5] = v22;
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(a5);
    v29 = v88;
    v30 = v76;
    v28[3] = v88;
    v28[4] = a7;
    v28[5] = v30;
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v29);
    v31[3] = v89;
    v31[5] = v84;
    v31[4] = a10;
    v18 = a7;
    v25 = v77;
    v24 = v78;
  }
  v32 = v76;
  if ( v14 )
  {
    while ( 1 )
    {
      v33 = v80;
      v34 = (unsigned int)v20;
      v35 = v25;
      if ( v14 <= v20 )
        v34 = (unsigned int)v14;
      if ( v21 )
      {
        v90 = v24;
      }
      else
      {
        v35 = v25 - v34;
        v90 = v24 - v34;
        v33 = v80 - v34;
      }
      v75 = v33;
      v85 = v35;
      v87 = (void *)(v35 - v18);
      while ( 1 )
      {
        v93 = 0LL;
        if ( v32 )
        {
          if ( (unsigned int)Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage() )
            LogicalAddress = *((_BYTE *)a3 + 264)
                           ? VIDMM_SEGMENT::GetForwardProgressLogicalAddress(*((void *const **)a3 + 30))
                           : VidMmiGetLogicalAddress(*((void **)a3 + 66), a5);
          else
            LogicalAddress = SysMmGetLogicalAddress(*((void *const *)a3 + 66));
          VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v93, v76, LogicalAddress);
          v37 = v75;
          v38 = v75;
        }
        else
        {
          v37 = v75;
          v39 = *((_DWORD *)a3 + 4) >> 12;
          *((_QWORD *)&v93 + 1) = v35 >> 12;
          v38 = 0LL;
          *(_QWORD *)&v93 = v39 | 0x100000000LL;
        }
        v40 = v79;
        v83 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)v17 + 40384),
                v79,
                v34,
                a3,
                (unsigned __int64)v87,
                v81,
                v38,
                (const struct _DXGK_ADL *)&v93,
                v74,
                v91);
        if ( v83 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(v17, v40, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(v17, v40);
        v35 = v85;
        v32 = v76;
      }
      while ( 1 )
      {
        v94 = 0LL;
        if ( v84 )
        {
          if ( (unsigned int)Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage() )
            v41 = *((_BYTE *)a3 + 264)
                ? VIDMM_SEGMENT::GetForwardProgressLogicalAddress(*((void *const **)a3 + 30))
                : VidMmiGetLogicalAddress(*((void **)a3 + 66), a5);
          else
            v41 = SysMmGetLogicalAddress(*((void *const *)a3 + 66));
          VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v94, v84, v41);
          v42 = v37;
        }
        else
        {
          LODWORD(v94) = *((_DWORD *)a3 + 4) >> 12;
          *((_QWORD *)&v94 + 1) = v90 >> 12;
          v42 = 0LL;
          DWORD1(v94) = 1;
        }
        v43 = v79;
        v75 = (unsigned __int64)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                  (VIDMM_GLOBAL *)((char *)v17 + 40384),
                                  v79,
                                  v34,
                                  a3,
                                  (unsigned __int64)v87,
                                  v82,
                                  v42,
                                  (const struct _DXGK_ADL *)&v94,
                                  &v73,
                                  v91);
        if ( v75 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(v17, v43, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(v17, v43);
      }
      MustFlushTlbOnValidTransition = VIDMM_GLOBAL::MustFlushTlbOnValidTransition(v17, v43);
      v45 = (LARGE_INTEGER *)v75;
      if ( MustFlushTlbOnValidTransition )
      {
        v46 = *((_QWORD *)v83 + 13);
        v47 = *((_QWORD *)v83 + 12);
        if ( v46 <= *(_QWORD *)(v75 + 104) )
          v46 = *(_QWORD *)(v75 + 104);
        if ( v47 >= *(_QWORD *)(v75 + 96) )
          v47 = *(_QWORD *)(v75 + 96);
        CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)v17 + v43 + 5052), v43, v47, v46);
      }
      memset(&v95, 0, sizeof(v95));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(v17, v43, v48, &v95);
      v95.Transfer.Destination.SegmentAddress.LowPart = v76 ? 1 : v84 == 0LL ? 2 : 0;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(v17, v43, a3, &v95);
        v95.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
        v49 = (ADAPTER_RENDER *)*((_QWORD *)v17 + 2);
        v95.Fill.FillSize = (SIZE_T)v87;
        v95.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v95.Transfer.TransferSize = v34;
        v95.MapApertureSegment.OffsetInPages = *((_QWORD *)v83 + 12);
        v95.Transfer.Source.SegmentAddress = v45[12];
        if ( (*((_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(v49, v43) + 5) & 1) != 0 )
        {
          v52 = (CVirtualAddressAllocator *)*((_QWORD *)v17 + (unsigned int)v43 + 5052);
          v95.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                        v52,
                                                                        v50,
                                                                        *(_QWORD *)(v51 + 96),
                                                                        v74[0]);
          v95.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                     v52,
                                                                     v43,
                                                                     *(_QWORD *)(v75 + 96),
                                                                     v73);
          v95.Transfer.Destination.SegmentAddress.HighPart = v95.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v74[0] & 1 | (2 * (v73 & 1));
        }
        if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v17) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(v53, &v95, a3);
        v54 = ADAPTER_RENDER::DdiBuildPagingBuffer(
                *((ADAPTER_RENDER **)v17 + 2),
                (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v95);
        v55 = *((_QWORD *)v17 + 879);
        v56 = v54;
        v86 = v54;
        if ( v55 && (!v89 || (*((_DWORD *)v89 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v55 + 8),
            *(_DWORD *)(*((_QWORD *)v17 + 3) + 240LL),
            v34);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 987, v34);
        if ( bTracingEnabled )
        {
          if ( !v88 || (v57 = 2, (*((_DWORD *)v88 + 20) & 0x1001) != 0) )
            v57 = 1;
          v58 = *((_QWORD *)v17 + (unsigned int)v43 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_1C00769C1 & 8) != 0 )
          {
            LODWORD(v72) = v57;
            McTemplateK0pppxxq_EtwWriteTransfer(v85, v60, v61, CurrentProcessId, a3, v58, v85, v34, v72);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)v17 + 7184), v34, v57);
          LODWORD(v43) = v79;
          v56 = v86;
        }
        if ( v88 )
          v96 = *((_DWORD *)v88 + 4) + 1;
        else
          v96 = 0;
        v98 = v85;
        if ( v89 )
          v97 = *((_DWORD *)v89 + 4) + 1;
        else
          v97 = 0;
        v99 = v90;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(v17, v43, a3, &v95, v56, 0, &v96);
        v62 = v56 < 0;
        if ( v56 >= 0 )
        {
          v63 = v83;
          v64 = 1616LL * (unsigned int)v43;
          v65 = (__int64 *)((char *)v83 + 24);
          v66 = v64 + *((_QWORD *)v17 + 5028) + 472LL;
          v67 = *(__int64 ***)(v66 + 8);
          if ( *v67 != (__int64 *)v66 )
            goto LABEL_86;
          v68 = v75;
          *v65 = v66;
          v65[1] = (__int64)v67;
          *v67 = v65;
          *(_QWORD *)(v66 + 8) = v65;
          v69 = (__int64 *)(v68 + 24);
          v70 = v64 + *((_QWORD *)v17 + 5028) + 472LL;
          v71 = *(__int64 ***)(v70 + 8);
          if ( *v71 != (__int64 *)v70 )
LABEL_86:
            __fastfail(3u);
          *v69 = v70;
          v62 = v56 < 0;
          *(_QWORD *)(v68 + 32) = v71;
          *v71 = v69;
          *(_QWORD *)(v70 + 8) = v69;
          *((_QWORD *)v63 + 5) = *((_QWORD *)a3 + 20);
          *(_QWORD *)(v68 + 40) = *((_QWORD *)a3 + 20);
        }
        v45 = (LARGE_INTEGER *)v75;
      }
      while ( v62 );
      v14 = v92 - v34;
      v92 -= v34;
      if ( v21 )
      {
        v25 = v34 + v77;
        v24 = v34 + v78;
        v80 += v34;
      }
      else
      {
        v25 = v77 - v34;
        v24 = v78 - v34;
        v80 -= v34;
      }
      v78 = v24;
      v77 = v25;
      if ( !v14 )
        break;
      v18 = a7;
      v32 = v76;
    }
  }
}

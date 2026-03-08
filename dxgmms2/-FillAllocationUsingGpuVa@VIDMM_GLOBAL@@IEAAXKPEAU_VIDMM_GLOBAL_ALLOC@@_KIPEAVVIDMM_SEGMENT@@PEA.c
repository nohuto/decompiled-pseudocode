/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00E2EAC
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00E2C7C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00018EC (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0001910 (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0015230 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E980 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0089FF0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C008A414 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C008A4BC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E3514 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1C00E6268 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1C00F2DFC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F33E4 (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  LONGLONG QuadPart; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // r13d
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r12
  unsigned int v25; // eax
  VIDMM_PAGING_PROCESS *v26; // r10
  struct VIDMM_MAPPED_VA_RANGE *v27; // rax
  LARGE_INTEGER *v28; // r13
  bool MustFlushTlbOnValidTransition; // al
  struct _VIDMM_GLOBAL_ALLOC *v30; // r8
  __int64 v31; // rbx
  D3DGPU_VIRTUAL_ADDRESS v32; // rax
  VIDMM_GLOBAL *v33; // rcx
  HANDLE CurrentProcessId; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  LONGLONG v37; // r8
  __int64 v38; // rdx
  __int64 *v39; // rcx
  __int64 **v40; // rax
  unsigned __int8 *v41; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v42[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v43[2]; // [rsp+58h] [rbp-A8h]
  LONGLONG v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+68h] [rbp-98h]
  unsigned __int64 v46; // [rsp+70h] [rbp-90h]
  VIDMM_SEGMENT *v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 v48; // [rsp+80h] [rbp-80h]
  int v49[2]; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  unsigned __int64 v51; // [rsp+98h] [rbp-68h]
  _DWORD v52[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+A8h] [rbp-58h]
  struct _DXGKARG_BUILDPAGINGBUFFER v54; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v55[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v56; // [rsp+1F8h] [rbp+F8h]

  v9 = a2;
  v47 = a6;
  v48 = a4;
  v10 = a4;
  memset(&v54, 0, sizeof(v54));
  QuadPart = a7->QuadPart;
  *(_QWORD *)v43 = QuadPart;
  v44 = QuadPart;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = a3;
    v14 = WdLogNewEntry5_WdTrace(v13);
    *(_QWORD *)(v14 + 24) = v10;
    *(_QWORD *)(v14 + 32) = 0LL;
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
    v16[4] = SHIDWORD(v44);
    v16[5] = (unsigned int)QuadPart;
    v16[3] = a6;
  }
  v17 = *((unsigned int *)this + 10244);
  v45 = *((_DWORD *)this + 10244);
  v46 = 0LL;
  v42[0] = 0;
  if ( v10 )
  {
    v18 = (unsigned int)v17;
    v51 = v17;
    v50 = 1616 * v9;
    while ( 1 )
    {
      v19 = v17;
      if ( v10 <= v18 )
        v19 = v10;
      v20 = QuadPart;
      v21 = v46;
      v22 = v19 >> 12;
      v23 = v20 >> 12;
      v24 = v19;
      while ( 1 )
      {
        v52[1] = 1;
        v52[0] = v22;
        v53 = v23;
        v25 = VIDMM_SEGMENT::DriverId(v47);
        v27 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                v26,
                v9,
                v24,
                a3,
                v21,
                v25,
                0LL,
                (const struct _DXGK_ADL *)v52,
                v42,
                0LL);
        v44 = (LONGLONG)v27;
        if ( v27 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v9);
      }
      v28 = (LARGE_INTEGER *)((char *)v27 + 96);
      MustFlushTlbOnValidTransition = VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, v9);
      v31 = *(_QWORD *)v43;
      if ( MustFlushTlbOnValidTransition )
        CVirtualAddressAllocator::FlushGpuVaTlb(
          *((CVirtualAddressAllocator **)this + v9 + 5052),
          v9,
          v28->QuadPart,
          *(_QWORD *)(v44 + 104));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v9, v30, &v54);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v9, a3, &v54);
        v54.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
          v32 = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
        else
          v32 = 0LL;
        v54.Transfer.Source.SegmentId = 0;
        v54.UpdateContextAllocation.ContextAllocation = v32;
        v54.Transfer.TransferSize = v24;
        v54.Transfer.Source.SegmentAddress = *v28;
        if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(v33, &v54, v9, a3);
        v43[0] = ADAPTER_RENDER::DdiBuildPagingBuffer(
                   *((ADAPTER_RENDER **)this + 2),
                   (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v54);
        if ( bTracingEnabled )
        {
          *(_QWORD *)v49 = *((_QWORD *)this + v9 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_1C00769C1 & 8) != 0 )
          {
            LODWORD(v41) = 0;
            McTemplateK0pppxxq_EtwWriteTransfer(
              *(__int64 *)v49,
              v35,
              v36,
              CurrentProcessId,
              a3,
              *(_QWORD *)v49,
              0LL,
              v24,
              v41);
          }
        }
        VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7184), v24, 0);
        v55[1] = 0;
        v56 = v31;
        v55[0] = *((_DWORD *)v47 + 4) + 1;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v9, a3, &v54, v43[0], 0, v55);
      }
      while ( v43[0] < 0 );
      v37 = v44;
      v38 = *((_QWORD *)this + 5028) + v50 + 472;
      v39 = (__int64 *)(v44 + 24);
      v40 = *(__int64 ***)(v38 + 8);
      if ( *v40 != (__int64 *)v38 )
        __fastfail(3u);
      v46 += v24;
      v10 = v48 - v24;
      *v39 = v38;
      QuadPart = v24 + v31;
      v39[1] = (__int64)v40;
      *v40 = v39;
      *(_QWORD *)(v38 + 8) = v39;
      *(_QWORD *)(v37 + 40) = *((_QWORD *)a3 + 20);
      v48 = v10;
      *(_QWORD *)v43 = QuadPart;
      if ( !v10 )
        break;
      LODWORD(v17) = v45;
      v18 = v51;
    }
  }
}

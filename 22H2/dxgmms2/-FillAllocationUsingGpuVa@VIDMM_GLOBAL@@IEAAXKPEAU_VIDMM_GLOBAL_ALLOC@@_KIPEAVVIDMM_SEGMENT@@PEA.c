/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0063984
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00638EC (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00011A4 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C0001C0C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001C30 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001CF0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C0024390 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0063C58 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0063E34 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0063EDC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006DDC0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0074148 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008A0EC (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BD888 (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  VIDMM_SEGMENT *v7; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  LONGLONG QuadPart; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r15
  unsigned int v18; // eax
  VIDMM_PAGING_PROCESS *v19; // r10
  LARGE_INTEGER *v20; // r13
  unsigned int v21; // edx
  struct _VIDMM_GLOBAL_ALLOC *v22; // r8
  D3DGPU_VIRTUAL_ADDRESS v23; // rax
  D3DGPU_VIRTUAL_ADDRESS v24; // rax
  bool v25; // zf
  __int64 v26; // r13
  HANDLE CurrentProcessId; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  LARGE_INTEGER *v31; // rcx
  __int64 v32; // rdx
  LARGE_INTEGER **v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned __int8 *v38; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v39[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh]
  LONGLONG v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v43; // [rsp+68h] [rbp-98h]
  unsigned __int64 v44; // [rsp+70h] [rbp-90h]
  struct VIDMM_SEGMENT *v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  unsigned __int64 v47; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_BUILDPAGINGBUFFER v48; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v49[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  LONGLONG v50; // [rsp+1D8h] [rbp+D8h]

  v7 = a6;
  v10 = a2;
  v45 = a6;
  v43 = a4;
  v11 = a4;
  memset(&v48, 0, sizeof(v48));
  QuadPart = a7->QuadPart;
  v41 = a7->QuadPart;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = a3;
    v35 = WdLogNewEntry5_WdTrace(v34);
    *(_QWORD *)(v35 + 24) = v11;
    *(_QWORD *)(v35 + 32) = 0LL;
    v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v36);
    v37[4] = SHIDWORD(v41);
    v37[5] = (unsigned int)QuadPart;
    v37[3] = a6;
  }
  v14 = *((unsigned int *)this + 10244);
  v42 = *((_DWORD *)this + 10244);
  v44 = 0LL;
  v39[0] = 0;
  if ( v11 )
  {
    v15 = (unsigned int)v14;
    v47 = v14;
    v46 = 1584 * v10;
    while ( 1 )
    {
      v16 = (unsigned int)v14;
      if ( v11 <= v15 )
        v16 = (unsigned int)v11;
      v17 = v44;
      while ( 1 )
      {
        v18 = VIDMM_SEGMENT::DriverId(v7);
        v20 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                 v19,
                                 v10,
                                 v16,
                                 (struct _VIDMM_GLOBAL_ALLOC *)a3,
                                 v17,
                                 v18,
                                 QuadPart,
                                 0LL,
                                 v39,
                                 0LL);
        v41 = (LONGLONG)v20;
        if ( v20 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v10, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v10);
        v7 = v45;
      }
      if ( (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v10) & 0x400) == 0 )
        CVirtualAddressAllocator::FlushGpuVaTlb(
          *((CVirtualAddressAllocator **)this + v10 + 5052),
          v21,
          v20[12].QuadPart,
          v20[13].QuadPart);
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v10, v22, &v48);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v10, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v48);
        v48.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v23 = a3[5];
          if ( v23 )
            v24 = *(_QWORD *)(v23 + 16);
          else
            v24 = a3[6];
        }
        else
        {
          v24 = 0LL;
        }
        v48.Transfer.Source.SegmentId = 0;
        v25 = *((_QWORD *)this + 5123) == 0LL;
        v48.UpdateContextAllocation.ContextAllocation = v24;
        v48.Transfer.TransferSize = v16;
        v48.Transfer.Source.SegmentAddress = v20[12];
        if ( !v25 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(this, &v48, v10, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v40 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v48);
        if ( bTracingEnabled )
        {
          v26 = *((_QWORD *)this + v10 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v38) = 0;
            McTemplateK0pppxxq_EtwWriteTransfer(v29, v28, v30, CurrentProcessId, a3, v26, 0LL, v16, v38);
          }
          v20 = (LARGE_INTEGER *)v41;
        }
        VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7176), v16, 0);
        v49[1] = 0;
        v50 = QuadPart;
        v49[0] = *((_DWORD *)v45 + 4) + 1;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v10, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v48, v40, 0, v49);
      }
      while ( v40 < 0 );
      v31 = v20 + 3;
      v32 = *((_QWORD *)this + 5027) + v46 + 464;
      v33 = *(LARGE_INTEGER ***)(v32 + 8);
      if ( *v33 != (LARGE_INTEGER *)v32 )
        __fastfail(3u);
      v44 += v16;
      v11 = v43 - v16;
      v31->QuadPart = v32;
      QuadPart += v16;
      v20[4].QuadPart = (LONGLONG)v33;
      *v33 = v31;
      *(_QWORD *)(v32 + 8) = v31;
      v20[5].QuadPart = a3[21];
      v43 = v11;
      if ( !v11 )
        break;
      LODWORD(v14) = v42;
      v7 = v45;
      v15 = v47;
    }
  }
}

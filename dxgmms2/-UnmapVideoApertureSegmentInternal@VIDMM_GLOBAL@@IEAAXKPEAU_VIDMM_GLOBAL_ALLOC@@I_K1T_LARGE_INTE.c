/*
 * XREFs of ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C0086780
 * Callers:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C0086A70 (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00018EC (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0089FF0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C008A414 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E09A0 (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E1EFC (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        union _LARGE_INTEGER a7,
        int a8)
{
  bool v8; // zf
  char v13; // r12
  struct _VIDMM_GLOBAL_ALLOC *v14; // r8
  SIZE_T v15; // rax
  int v16; // edi
  struct _LIST_ENTRY v17; // [rsp+48h] [rbp-C0h] BYREF
  _DXGKARG_BUILDPAGINGBUFFER v18; // [rsp+58h] [rbp-B0h] BYREF

  v8 = (*((_BYTE *)this + 40937) & 0x40) == 0;
  v17 = 0LL;
  if ( !v8 )
  {
    v17.Blink = &v17;
    v17.Flink = &v17;
    VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(this, &v17);
  }
  v13 = 0;
  memset(&v18, 0, sizeof(v18));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a2, v14, &v18);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, a2, a3, &v18);
    v18.Operation = DXGK_OPERATION_UNMAP_APERTURE_SEGMENT;
    if ( a3 )
      v15 = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
    else
      v15 = 0LL;
    v18.UpdateContextAllocation.ContextAllocation = 0LL;
    v18.Fill.FillSize = v15;
    v18.MapApertureSegment.OffsetInPages = a6;
    v18.Transfer.Source.SegmentAddress.QuadPart = a5;
    v18.Fill.FillPattern = a4;
    v18.UnmapApertureSegment.DummyPage = a7;
    if ( a3 && *((_QWORD *)a3 + 11) && (**((_DWORD **)a3 + 67) & 0x10000000) == 0 && (*((_DWORD *)a3 + 19) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a3 + 296));
      v18.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 11) + 40LL)
                                                                                        - 32LL)
                                                                            + 24LL)
                                                                + 616LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 37);
    }
    v16 = ADAPTER_RENDER::DdiBuildPagingBuffer(
            *((ADAPTER_RENDER **)this + 2),
            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v18);
    v13 |= VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a2, a3, &v18, v16, a8, 0LL);
  }
  while ( v16 == -1071775743 );
  if ( v13 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
  if ( (*((_BYTE *)this + 40937) & 0x40) != 0 )
    VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(this, &v17);
}

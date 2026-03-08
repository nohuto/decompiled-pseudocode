/*
 * XREFs of ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0087620
 * Callers:
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1C0087800 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00018EC (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0089FF0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C008A414 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E09A0 (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E1EFC (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        PMDL MemoryDescriptorList,
        unsigned int a8,
        char a9,
        int a10)
{
  PVOID MappedSystemVa; // r15
  unsigned int v12; // ebx
  struct _VIDMM_GLOBAL_ALLOC *v14; // r8
  D3DGPU_VIRTUAL_ADDRESS v15; // r12
  SIZE_T v16; // rax
  int v17; // ebx
  bool v18; // zf
  __int64 LogicalAddress; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  SIZE_T v22; // rdx
  struct _LIST_ENTRY v23; // [rsp+48h] [rbp-C0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v24; // [rsp+58h] [rbp-B0h] BYREF

  MappedSystemVa = 0LL;
  v12 = a2;
  v23 = 0LL;
  if ( !a10 && (**((_DWORD **)a3 + 67) & 0x2000) != 0 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
  }
  if ( (*((_BYTE *)this + 40937) & 0x40) != 0 )
  {
    v23.Blink = &v23;
    v23.Flink = &v23;
    VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess((VIDMM_GLOBAL *)this, &v23);
  }
  memset(&v24, 0, sizeof(v24));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v12, v14, &v24);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v12, a3, &v24);
    v15 = 0LL;
    if ( a3 && *((_QWORD *)a3 + 11) && (**((_DWORD **)a3 + 67) & 0x10000000) == 0 && (*((_DWORD *)a3 + 19) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a3 + 296));
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 11) + 40LL) - 32LL) + 24LL) + 616LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 37);
    }
    if ( *((char *)this + 40937) < 0 )
    {
      LogicalAddress = SysMmGetLogicalAddress(*((void *const *)a3 + 66));
      v20 = *((_QWORD *)a3 + 67);
      v21 = LogicalAddress;
      v24.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_FILL;
      v22 = *(_QWORD *)(v20 + 40);
      v24.Fill.FillPattern = a4;
      v24.MapApertureSegment.OffsetInPages = a6;
      v24.Transfer.Source.SegmentAddress.QuadPart = a5;
      LODWORD(LogicalAddress) = MemoryDescriptorList->ByteCount >> 12;
      v24.Fill.FillSize = v22;
      v24.UpdateContextAllocation.ContextAllocation = v15;
      v24.TransferVirtual.DestinationPageTable = a9 & 1 | (unsigned __int64)(v24.Transfer.Flags.Value & 0xFFFFFFFE);
      v24.UpdatePageTable.AllocationOffsetInBytes = (UINT64)MappedSystemVa;
      v24.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)LogicalAddress;
      if ( v21 )
      {
        v24.Transfer.Destination.SegmentAddress.QuadPart = v21 >> 12;
        v24.UnmapApertureSegment.DummyPage.HighPart = 1;
      }
      else
      {
        v24.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)&MemoryDescriptorList[1];
      }
    }
    else
    {
      v24.Operation = DXGK_OPERATION_MAP_APERTURE_SEGMENT;
      if ( a3 )
        v16 = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
      else
        v16 = 0LL;
      v24.Fill.FillSize = v16;
      v24.Fill.FillPattern = a4;
      v24.MapApertureSegment.OffsetInPages = a6;
      v24.Transfer.Source.SegmentAddress.QuadPart = a5;
      v24.UpdateContextAllocation.ContextAllocation = v15;
      v24.UnmapApertureSegment.DummyPage.QuadPart = (LONGLONG)MemoryDescriptorList;
      v24.Transfer.Destination.SegmentAddress.QuadPart = a9 & 1 | (unsigned __int64)(v24.Transfer.Destination.SegmentAddress.LowPart & 0xFFFFFFFE);
    }
    v17 = ADAPTER_RENDER::DdiBuildPagingBuffer(
            this[2],
            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v24);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, a2, a3, &v24, v17, a10, 0LL);
    v18 = v17 == -1071775743;
    v12 = a2;
  }
  while ( v18 );
  if ( (*((_BYTE *)this + 40937) & 0x40) != 0 )
    VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess((VIDMM_GLOBAL *)this, &v23);
}

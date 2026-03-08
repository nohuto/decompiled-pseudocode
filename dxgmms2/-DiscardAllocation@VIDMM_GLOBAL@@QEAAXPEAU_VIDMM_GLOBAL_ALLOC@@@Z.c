/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E1B54
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00018EC (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E980 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0086934 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086B6C (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0089FF0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C008A414 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C008A4BC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DiscardAllocation(ADAPTER_RENDER **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  bool IsPagingOperationPending; // al
  ADAPTER_RENDER *v10; // rcx
  int v11; // r14d
  ADAPTER_RENDER *v12; // rcx
  ADAPTER_RENDER *v13; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+48h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v19; // [rsp+58h] [rbp-B0h] BYREF

  memset(&v19, 0, sizeof(v19));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4) + 24) = a2;
  v6 = *((_DWORD *)a2 + 17) & 0x3F;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, *((_DWORD *)a2 + 17) & 0x3F, v5, &v19);
  v19.Transfer.TransferOffset = 0;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v6, a2, &v19);
    v7 = *((_QWORD *)a2 + 67);
    v19.Operation = DXGK_OPERATION_DISCARD_CONTENT;
    v19.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(v7 + 40);
    v19.DiscardContent.SegmentId = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 15));
    v19.Transfer.TransferSize = *((_QWORD *)a2 + 16) + *(_QWORD *)(v8 + 24);
    IsPagingOperationPending = VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, a2, 0);
    v10 = this[2];
    v19.Transfer.TransferOffset = !IsPagingOperationPending | v19.Transfer.TransferOffset & 0xFFFFFFFE;
    v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(v10, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v19);
    if ( v11 == -1071775486 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a2);
      VIDMM_GLOBAL::VerifyAllocationIsIdle((VIDMM_GLOBAL *)this, a2);
      v12 = this[2];
      v19.Transfer.TransferOffset |= 1u;
      v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(
              v12,
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v19);
    }
    if ( bTracingEnabled )
    {
      v13 = this[v6 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (byte_1C00769C1 & 8) != 0 )
      {
        LODWORD(v18) = 5;
        McTemplateK0pppxxq_EtwWriteTransfer(v16, v15, v17, CurrentProcessId, a2, v13, 0LL, 0LL, v18);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 898), *((_QWORD *)a2 + 2), 5);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v6, a2, &v19, v11, 0, 0LL);
  }
  while ( v11 < 0 );
}

/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E4E54
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E4D58 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
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
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E538C (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E5604 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00EEF2C (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        DXGK_TRANSFERFLAGS a12)
{
  unsigned int v13; // r14d
  LONGLONG QuadPart; // rdx
  LONGLONG v17; // rcx
  __int64 v18; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v27; // rax
  struct _MDL *v28; // rax
  struct _MDL *v29; // rax
  BOOL v30; // ecx
  int v31; // eax
  ADAPTER_RENDER *v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r14d
  __int64 v36; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  struct VIDMM_SEGMENT *v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+200h] [rbp+100h]

  v13 = a2;
  v41 = a2;
  if ( (*(_BYTE *)(1616LL * a2 + *((_QWORD *)this + 5028) + 444) & 0x10) == 0 )
  {
    memset(&v42, 0, sizeof(v42));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a3;
      v21 = WdLogNewEntry5_WdTrace(v20);
      v22 = a5;
      *(_QWORD *)(v21 + 24) = a4;
      *(_QWORD *)(v21 + 32) = a5;
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23);
      v24[3] = a6;
      v24[4] = a7;
      v24[5] = a8;
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
      v25[4] = a10;
      v25[5] = a11;
      v25[3] = a9;
    }
    else
    {
      v22 = a5;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v13, v19, &v42);
    Value = a12.Value;
    v42.Transfer.Flags = a12;
    if ( a3 )
    {
      if ( !v22 )
      {
        Value = a12.Value | 8;
        v42.Transfer.Flags.Value = a12.Value | 8;
      }
      if ( a4 + v22 == *((_QWORD *)a3 + 2) )
        v42.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v13, a3, &v42);
      if ( a3 )
        v27 = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
      else
        v27 = 0LL;
      v42.UpdateContextAllocation.ContextAllocation = v27;
      v42.Transfer.TransferSize = a4;
      v42.Operation = DXGK_OPERATION_TRANSFER;
      v42.Transfer.TransferOffset = v22;
      v42.Transfer.MdlOffset = 0;
      if ( a6 )
      {
        v42.Transfer.Source.SegmentId = VIDMM_SEGMENT::DriverId(a6);
        v28 = (struct _MDL *)(a7->QuadPart + *((_QWORD *)a6 + 3));
      }
      else
      {
        v28 = a8;
        v42.Transfer.Source.SegmentId = 0;
      }
      v42.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v28;
      if ( a9 )
      {
        v42.Transfer.Destination.SegmentId = VIDMM_SEGMENT::DriverId(a9);
        v29 = (struct _MDL *)(a10->QuadPart + *((_QWORD *)a9 + 3));
      }
      else
      {
        v29 = a11;
        v42.Transfer.Destination.SegmentId = 0;
      }
      v42.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v29;
      if ( a3 )
        v30 = !VIDMM_GLOBAL::IsPagingOperationPending(this, a3, 0);
      else
        v30 = 1;
      v42.Transfer.Flags.Value = v42.Transfer.Flags.Value & 0xFFFFFFFB | (4 * v30);
      v31 = ADAPTER_RENDER::DdiBuildPagingBuffer(
              *((ADAPTER_RENDER **)this + 2),
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v42);
      v43 = v31;
      if ( a3 && v31 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, a3);
        v32 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v42.Transfer.Flags.Value |= 4u;
        v43 = ADAPTER_RENDER::DdiBuildPagingBuffer(
                v32,
                (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v42);
      }
      v33 = *((_QWORD *)this + 879);
      if ( v33 && (!a9 || (*((_DWORD *)a9 + 20) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v33 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
          a4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)this + 987, a4);
      if ( !bTracingEnabled )
        goto LABEL_50;
      if ( !a6 )
        goto LABEL_46;
      v34 = *((_DWORD *)a6 + 20);
      if ( (v34 & 0x1001) == 0 )
      {
        if ( a9 && (*((_DWORD *)a9 + 20) & 2) != 0 )
          v35 = 4;
        else
          v35 = 2;
        goto LABEL_47;
      }
      v35 = 3;
      if ( (v34 & 2) == 0 )
LABEL_46:
        v35 = 1;
LABEL_47:
      v36 = *((_QWORD *)this + v41 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (byte_1C00769C1 & 8) != 0 )
      {
        LODWORD(v40) = v35;
        McTemplateK0pppxxq_EtwWriteTransfer(a5, v38, v39, CurrentProcessId, a3, v36, a5, a4, v40);
      }
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7184), a4, v35);
      LODWORD(v22) = a5;
LABEL_50:
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a2, a3, &v42, v43, 0, 0LL);
      v13 = a2;
      if ( v43 >= 0 )
        return;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a3 + 368, 0LL);
  if ( *((struct _VIDMM_GLOBAL_ALLOC **)a3 + 21) == (struct _VIDMM_GLOBAL_ALLOC *)((char *)a3 + 168) )
  {
    ExReleasePushLockExclusiveEx((char *)a3 + 368, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v17 = a7->QuadPart;
    else
      v17 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, v13, a3, a4, a5, a6, v17, a8, a9, QuadPart, a11, 0LL, a12, 0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(this, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    ExReleasePushLockExclusiveEx((char *)a3 + 368, 0LL);
    KeLeaveCriticalRegion();
  }
}

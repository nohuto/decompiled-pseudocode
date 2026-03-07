// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  VIDMM_GLOBAL *v6; // rcx
  bool v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r15
  int v11; // edi
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  UINT v15; // eax
  __int64 v16; // rcx
  SIZE_T v17; // rdx
  SIZE_T v18; // rax
  SIZE_T v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  _BYTE v25[8]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v26; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-9h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v28; // [rsp+70h] [rbp-1h] BYREF

  if ( !*((_BYTE *)this + 472) )
    return;
  *((_BYTE *)this + 472) = 0;
  v25[0] = 0;
  v26 = 0LL;
  if ( *((_QWORD *)this + 54) )
    v2 = *((_QWORD *)this + 52);
  else
    v2 = *((_QWORD *)this + 6);
  v3 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
         *((_QWORD *)this + 19),
         0,
         v2,
         1,
         (__int64)VIDMM_SEGMENT::MoveOneResource,
         (__int64)this,
         0LL,
         (__int64)&v26,
         (__int64)v25);
  if ( v3 < 0 )
  {
    v4 = v3;
LABEL_28:
    WdLogSingleEntry3(3LL, v26, v4, v25[0]);
    return;
  }
  if ( !*((_QWORD *)this + 54) )
    return;
  v5 = *((unsigned int *)this + 95);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v7 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 2808LL) + 344 * v5 + 16) & 8) != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 2808LL) + 344 * v5 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v6, v5, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    LOBYTE(v8) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), v8, v9);
  }
  v10 = *((_QWORD *)this + 53);
  v11 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
          *((_QWORD *)this + 19),
          v2,
          v10,
          1,
          (__int64)VIDMM_SEGMENT::MoveOneResource,
          (__int64)this,
          0LL,
          (__int64)&v26,
          (__int64)v25);
  if ( v7 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95), 0, 0LL, 0LL, 0, 1u);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), 0LL, v12);
  }
  v13 = *((_QWORD *)this + 19);
  v27 = 0LL;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v13,
                       v2,
                       v10,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v27,
                       (__int64)&v26,
                       (__int64)v25) != -1073741823 )
  {
    WdLogSingleEntry1(1LL, 6258LL);
    DxgkLogInternalTriageEvent(v24, 0x40000LL);
LABEL_26:
    if ( v11 >= 0 )
      return;
    goto LABEL_27;
  }
  v14 = *((_QWORD *)this + 52);
  v27 &= ~*((_QWORD *)this + 50);
  if ( v27 <= v14 )
    goto LABEL_26;
  v28.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  *(_QWORD *)&v28.VprIndex = 0LL;
  v15 = VIDMM_SEGMENT::DriverId(this);
  v16 = *((_QWORD *)this + 1);
  v28.SegmentIndex = v15;
  v28.CurrentSize = *((_QWORD *)this + 54);
  v18 = *((_QWORD *)this + 53) - v17;
  v28.CurrentStartOffset = v19;
  v28.NewSize = v18;
  *((_QWORD *)this + 54) = v18;
  v28.NewStartOffset = v17;
  *((_QWORD *)this + 52) = v17;
  if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v16 + 41136)) )
  {
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventPerformanceWarning, v21, 24);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41184LL), Executive, 0, 0, 0LL);
  }
  VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v28);
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0qqqxxp_EtwWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v22,
      v23,
      v28.PhysicalAdapterIndex,
      v28.SegmentIndex,
      v28.VprIndex,
      v28.NewStartOffset,
      v28.NewSize,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  v11 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2928LL),
          (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v28);
  if ( v11 < 0 )
  {
    if ( g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
LABEL_27:
    v4 = v11;
    goto LABEL_28;
  }
}

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_SEGMENT::UpdateActiveVPRAfterMove(VIDMM_SEGMENT *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  UINT v7; // eax
  UINT v8; // eax
  __int64 v9; // rcx
  SIZE_T v10; // rdx
  SIZE_T v11; // rax
  SIZE_T v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE v18[8]; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp+17h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v21; // [rsp+70h] [rbp+1Fh] BYREF

  v2 = *((_QWORD *)this + 19);
  v3 = 0;
  v19 = 0LL;
  v4 = *((_QWORD *)this + 53);
  v5 = *((_QWORD *)this + 52);
  v18[0] = 0;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v2,
                       v5,
                       v4,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v19,
                       (__int64)v20,
                       (__int64)v18) == -1073741823 )
  {
    v6 = *((_QWORD *)this + 52);
    v19 = v6 & ~*((_QWORD *)this + 50);
    if ( v19 > v6 )
    {
      v7 = *((_DWORD *)this + 95);
      *(_QWORD *)&v21.VprIndex = 0LL;
      v21.PhysicalAdapterIndex = v7;
      v8 = VIDMM_SEGMENT::DriverId(this);
      v9 = *((_QWORD *)this + 1);
      v21.SegmentIndex = v8;
      v21.CurrentSize = *((_QWORD *)this + 54);
      v11 = *((_QWORD *)this + 53) - v10;
      v21.CurrentStartOffset = v12;
      v21.NewSize = v11;
      *((_QWORD *)this + 54) = v11;
      v21.NewStartOffset = v10;
      *((_QWORD *)this + 52) = v10;
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v9 + 41136)) )
      {
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventPerformanceWarning, v14, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41184LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), 0LL);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v21);
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v15,
          v16,
          v21.PhysicalAdapterIndex,
          v21.SegmentIndex,
          v21.VprIndex,
          v21.NewStartOffset,
          v21.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      v3 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2928LL),
             (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v21);
      if ( v3 < 0 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
  }
  return (unsigned int)v3;
}

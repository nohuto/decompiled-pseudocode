/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0
 * Callers:
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C0086780 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0087620 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008A514 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00E0A58 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E1B54 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00E2C7C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00E2EAC (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E4E54 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E5604 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00E6408 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00E7D9C (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00E8AF8 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C008A2EC (-RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFF.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z @ 0x1C00E3D94 (-GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        void *a7)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // r14d
  int v13; // r15d
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  char v21; // al
  __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v7 = -1LL;
  v8 = a2;
  v9 = 0;
  v24 = -1LL;
  if ( !a3 || (**((_DWORD **)a3 + 67) & 0x10000000) == 0 )
  {
    v9 = LODWORD(a4->pDmaBuffer) - *((_DWORD *)this + 2 * a2 + 670);
    v13 = LODWORD(a4->pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a2 + 798);
    if ( LODWORD(a4->pDmaBuffer) != *((_DWORD *)this + 2 * a2 + 670) || v13 )
    {
      VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, a2, &v24);
      v7 = v24;
      if ( a3 )
      {
        if ( *((_QWORD *)a3 + 20) > v24 )
        {
          v19 = *((_DWORD *)a3 + 17) & 0x3F;
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 31LL, a3, v19, v24);
        }
        *((_QWORD *)a3 + 20) = v7;
        if ( *((_DWORD *)this + 2) == 206 )
        {
          if ( *((_QWORD *)a3 + 19) > v7 )
          {
            v20 = *((_DWORD *)a3 + 17) & 0x3F;
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 31LL, a3, v20, v7);
          }
          *((_QWORD *)a3 + 19) = v7;
        }
      }
      v21 = *((_BYTE *)this + 40937);
      if ( (v21 & 8) != 0 )
        *((_BYTE *)this + 40937) = v21 & 0xF7;
    }
    v14 = v9 + *((_DWORD *)this + v8 + 414);
    *((_DWORD *)this + v8 + 414) = v14;
    if ( v14 > *((_DWORD *)this + v8 + 29) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 18LL, 0LL, 0LL, 0LL);
    }
    v15 = v13 + *((_DWORD *)this + v8 + 542);
    *((_DWORD *)this + v8 + 542) = v15;
    if ( v15 > *((_DWORD *)this + v8 + 93) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 19LL, 0LL, 0LL, 0LL);
    }
  }
  v23 = v7;
  v16 = a5;
  VIDMM_GLOBAL::RecordPagingOperation(this, v8, a3, a4, a5, v23, a6, a7);
  if ( (int)v16 < 0 )
  {
    if ( (_DWORD)v16 == -1071775743 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v17);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v8, 1u, 0LL, 0LL, 1u, 0);
    }
    else
    {
      v22 = *((_QWORD *)this + 3);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 11LL, a4, v16, v22);
    }
  }
  return v9 != 0;
}

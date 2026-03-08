/*
 * XREFs of ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C002E208
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C00EA7F8 (-VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVID.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(int *P)
{
  __int64 v2; // rdx

  if ( _InterlockedExchangeAdd(P, 0xFFFFFFFF) == 1 )
  {
    if ( P[2] )
    {
      v2 = P[2];
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 42LL, P, v2, 0LL);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}

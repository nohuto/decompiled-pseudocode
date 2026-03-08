/*
 * XREFs of ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C00C4290
 * Callers:
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089BCC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C00EE688 (-QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 *     ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C00EE944 (-QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTI.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00EEF2C (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_POLICY::IsActive(VIDMM_POLICY *this)
{
  unsigned int v1; // eax
  unsigned int v2; // eax

  v1 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 1) != 0 )
    v2 = v1 >> 2;
  else
    v2 = v1 >> 1;
  return v2 & 1;
}

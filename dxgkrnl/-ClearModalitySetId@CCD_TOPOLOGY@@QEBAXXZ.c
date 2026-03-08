/*
 * XREFs of ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C01BD614
 * Callers:
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01BD5E8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01C1A1C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C03B7170 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C03B72B8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C03B73AC (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C03B78B0 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01C0374 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

void __fastcall CCD_TOPOLOGY::ClearModalitySetId(void **this)
{
  operator delete(this[7]);
  this[7] = 0LL;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
}

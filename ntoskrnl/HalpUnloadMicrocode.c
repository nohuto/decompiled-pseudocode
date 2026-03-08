/*
 * XREFs of HalpUnloadMicrocode @ 0x140931E50
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x14085CB10 (HalpMcExportAndChargeNeededData.c)
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 * Callees:
 *     MmReturnChargesToLockPagedPool @ 0x140A2DCE0 (MmReturnChargesToLockPagedPool.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 HalpUnloadMicrocode()
{
  PVOID v0; // rbx

  McMicrocodeOperation = 0LL;
  HalpMcUpdateMicrocodeFunc = 0LL;
  HalpMcUpdateMicrocodeFuncEx = 0LL;
  HalpMcUpdateLockFunc = 0LL;
  HalpMcUpdateUnlockFunc = 0LL;
  HalpMcUpdatePostUpdateFunc = 0LL;
  HalpMcUpdateExportDataFunc = 0LL;
  v0 = HalpMcUpdateData;
  if ( HalpMcUpdateData )
  {
    HalpMcUpdateData = 0LL;
    if ( HalpMcUpdateDataCharged )
    {
      MmReturnChargesToLockPagedPool(v0, (unsigned int)HalpMcUpdateDataSize);
      HalpMcUpdateDataCharged = 0;
    }
    LODWORD(HalpMcUpdateDataSize) = 0;
    ExFreePoolWithTag(v0, 0);
  }
  return 0LL;
}

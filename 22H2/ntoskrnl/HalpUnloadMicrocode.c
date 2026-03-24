/*
 * XREFs of HalpUnloadMicrocode @ 0x140866220
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x14079BA98 (HalpMcExportAndChargeNeededData.c)
 *     HalpLoadMicrocode @ 0x140866070 (HalpLoadMicrocode.c)
 * Callees:
 *     HalpMcSetUpdateInfoInvalid @ 0x1403AF564 (HalpMcSetUpdateInfoInvalid.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C8530 (MmReturnChargesToLockPagedPool.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 HalpUnloadMicrocode()
{
  PVOID v0; // rbx

  HalpMcUpdateMicrocodeFunc = 0LL;
  HalpMcUpdateMicrocodeFuncEx = 0LL;
  HalpMcUpdateLockFunc = 0LL;
  HalpMcUpdateUnlockFunc = 0LL;
  HalpMcUpdatePostUpdateFunc = 0LL;
  HalpMcUpdateExportDataFunc = 0LL;
  HalpMcSetUpdateInfoInvalid();
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

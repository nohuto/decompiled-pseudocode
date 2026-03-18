/*
 * XREFs of HalpMcExportAndChargeNeededData @ 0x140860A10
 * Callers:
 *     HalMcFinishMicrocode @ 0x1403B0774 (HalMcFinishMicrocode.c)
 * Callees:
 *     HalpMcExportAllData @ 0x140860A80 (HalpMcExportAllData.c)
 *     MmObtainChargesToLockPagedPool @ 0x140860B30 (MmObtainChargesToLockPagedPool.c)
 *     HalpUnloadMicrocode @ 0x140934E60 (HalpUnloadMicrocode.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 HalpMcExportAndChargeNeededData()
{
  __int64 v0; // rax
  void *v1; // rbx
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v0 = HalpMcExportAllData(&v4, 256LL);
  v1 = (void *)v0;
  if ( v0 )
  {
    v2 = v4;
    result = MmObtainChargesToLockPagedPool(v0, v4);
    if ( (_DWORD)result )
    {
      HalpMcUpdateDataCharged = 1;
      McDataRecordTableCharged = 1;
LABEL_4:
      HalpMcUpdateData = v1;
      LODWORD(HalpMcUpdateDataSize) = v2;
      return result;
    }
    HalpMcUpdateDataCharged = 0;
    McDataRecordTableCharged = 0;
    ExFreePoolWithTag(v1, 0x636C6148u);
    result = HalpMcExportAllData(&v4, 64LL);
    v1 = (void *)result;
    if ( result )
    {
      v2 = v4;
      goto LABEL_4;
    }
  }
  else
  {
    McDataRecordTable = 0LL;
    McDataRecordTableSize = 0;
  }
  return HalpUnloadMicrocode();
}

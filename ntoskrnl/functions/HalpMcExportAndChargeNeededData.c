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

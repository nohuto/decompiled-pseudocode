/*
 * XREFs of CmpUuidCreate @ 0x140685EA8
 * Callers:
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x14069870C (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x14084F880 (CmpVolumeContextStart.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A0BE34 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 */

NTSTATUS __fastcall CmpUuidCreate(UUID *Uuid)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = ExUuidCreate(Uuid);
    if ( result != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}

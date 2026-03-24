/*
 * XREFs of CmpUuidCreate @ 0x14070D95C
 * Callers:
 *     CmpInitCmRM @ 0x14070D220 (CmpInitCmRM.c)
 *     CmSaveKey @ 0x140729A8C (CmSaveKey.c)
 *     CmpStartRMLogs @ 0x140766984 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x1407D00A4 (CmpVolumeContextStart.c)
 *     CmSaveMergedKeys @ 0x14087CAE0 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x14071FC80 (ExUuidCreate.c)
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

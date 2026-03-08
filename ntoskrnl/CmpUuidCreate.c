/*
 * XREFs of CmpUuidCreate @ 0x140733C60
 * Callers:
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x14073565C (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x14084C4D0 (CmpVolumeContextStart.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x1406F7EF0 (ExUuidCreate.c)
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

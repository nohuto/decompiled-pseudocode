/*
 * XREFs of VfUtilAddressRangeAdd @ 0x140ABF394
 * Callers:
 *     ViDeadlockAddResource @ 0x140AD53DC (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x140AD5624 (ViDeadlockAddThread.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140ADE818 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VfUtilAddressRangeAdd(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  if ( !*a1 )
  {
    *a1 = a2;
    result = a2 + a3;
LABEL_6:
    a1[1] = result;
    return result;
  }
  if ( a2 < *a1 )
    *a1 = a2;
  result = a2 + a3;
  if ( a2 + a3 > a1[1] )
    goto LABEL_6;
  return result;
}

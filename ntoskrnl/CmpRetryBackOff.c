/*
 * XREFs of CmpRetryBackOff @ 0x140A1BA24
 * Callers:
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x140A1BA5C (CmpRollbackTransactionArray.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 */

NTSTATUS __fastcall CmpRetryBackOff(_DWORD *a1)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*a1 > 0xAu )
  {
    Interval.QuadPart = -10000000LL;
    result = KeDelayExecutionThread(0, 0, &Interval);
    *a1 = 0;
  }
  return result;
}

/*
 * XREFs of CmpRetryBackOff @ 0x140875090
 * Callers:
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x14086DCC8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E18C (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x1408750C8 (CmpRollbackTransactionArray.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
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

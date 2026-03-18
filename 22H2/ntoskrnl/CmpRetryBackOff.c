/*
 * XREFs of CmpRetryBackOff @ 0x140A1E778
 * Callers:
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmSetKeyFlags @ 0x140A15A64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15F98 (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x140A1E7B0 (CmpRollbackTransactionArray.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
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

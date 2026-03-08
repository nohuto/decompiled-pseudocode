/*
 * XREFs of ZwRecoverTransactionManager @ 0x140415210
 * Callers:
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, v1);
}

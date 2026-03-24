/*
 * XREFs of ZwRecoverTransactionManager @ 0x1403FD140
 * Callers:
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
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

/*
 * XREFs of ZwRecoverTransactionManager @ 0x1403FD320
 * Callers:
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}

/*
 * XREFs of ZwRecoverTransactionManager @ 0x1403FC7C0
 * Callers:
 *     CmpInitCmRM @ 0x14070D220 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}

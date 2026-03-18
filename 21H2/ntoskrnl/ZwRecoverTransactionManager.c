/*
 * XREFs of ZwRecoverTransactionManager @ 0x14041E600
 * Callers:
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
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

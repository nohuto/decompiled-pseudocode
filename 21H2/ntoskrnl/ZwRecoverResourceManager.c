/*
 * XREFs of ZwRecoverResourceManager @ 0x1403FD120
 * Callers:
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, v1);
}

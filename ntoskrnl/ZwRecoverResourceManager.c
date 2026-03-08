/*
 * XREFs of ZwRecoverResourceManager @ 0x1404151F0
 * Callers:
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
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

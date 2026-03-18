/*
 * XREFs of ZwRecoverResourceManager @ 0x14041D580
 * Callers:
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
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

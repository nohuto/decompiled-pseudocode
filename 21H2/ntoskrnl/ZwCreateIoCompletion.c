/*
 * XREFs of ZwCreateIoCompletion @ 0x1403FBB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}

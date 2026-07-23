/*
 * XREFs of ZwCreateThread @ 0x1403FAF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB InitialTeb,
        BOOLEAN CreateSuspended)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

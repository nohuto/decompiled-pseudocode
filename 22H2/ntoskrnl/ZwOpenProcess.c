/*
 * XREFs of ZwOpenProcess @ 0x1403F9EE0
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1405C3AC0 (BiLogFileOwnerProcess.c)
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

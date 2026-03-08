/*
 * XREFs of ZwOpenProcess @ 0x1404127D0
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x1405EFEA0 (DifZwOpenProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14066EEB0 (BiLogFileOwnerProcess.c)
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}

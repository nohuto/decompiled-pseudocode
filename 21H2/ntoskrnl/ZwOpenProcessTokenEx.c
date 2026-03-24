/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1403FA9A0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406B118C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406B13C8 (RtlImpersonateSelfEx.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D458 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140785D10 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140914C28 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}

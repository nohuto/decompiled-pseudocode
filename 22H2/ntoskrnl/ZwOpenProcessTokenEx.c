/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1403FA020
 * Callers:
 *     RtlAcquirePrivilege @ 0x14069434C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140694588 (RtlImpersonateSelfEx.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072E318 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140785C10 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140914C78 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

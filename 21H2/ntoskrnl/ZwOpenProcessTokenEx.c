/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1403FAB80
 * Callers:
 *     RtlAcquirePrivilege @ 0x14061013C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140610378 (RtlImpersonateSelfEx.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140785ED0 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140914D88 (RtlpIsAppContainer.c)
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

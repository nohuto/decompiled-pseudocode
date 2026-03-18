/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14041BD60
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x140622200 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlAcquirePrivilege @ 0x1406CB6DC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406CB908 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140813C34 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BA210 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
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

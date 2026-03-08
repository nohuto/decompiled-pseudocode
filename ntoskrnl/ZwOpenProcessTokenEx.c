/*
 * XREFs of ZwOpenProcessTokenEx @ 0x140412910
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x1405EFC30 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlAcquirePrivilege @ 0x140783964 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140783B34 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14082F868 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BA41C (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
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

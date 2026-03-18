/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14041BD40
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x1406229B0 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpOpenThreadToken @ 0x1406CBA3C (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x140813C34 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BA210 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&DesiredAccess);
}

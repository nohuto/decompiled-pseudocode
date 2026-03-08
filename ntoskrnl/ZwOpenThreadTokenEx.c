/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1404128F0
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x1405F03A0 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpOpenThreadToken @ 0x140783C68 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14082F868 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BA41C (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
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

/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1403FA000
 * Callers:
 *     RtlpOpenThreadToken @ 0x1406946BC (RtlpOpenThreadToken.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072E318 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140785C10 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140914C78 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1403FAB60
 * Callers:
 *     RtlpOpenThreadToken @ 0x1406104AC (RtlpOpenThreadToken.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140785ED0 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140914D88 (RtlpIsAppContainer.c)
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

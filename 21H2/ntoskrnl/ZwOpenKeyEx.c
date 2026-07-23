/*
 * XREFs of ZwOpenKeyEx @ 0x1403FC9A0
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x14063750C (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140A74924 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}

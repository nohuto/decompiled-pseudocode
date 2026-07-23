/*
 * XREFs of ZwOpenKeyEx @ 0x1403FBE40
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1406BB4DC (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140A73924 (MfgInitSystem.c)
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

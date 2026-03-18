/*
 * XREFs of ZwOpenKeyEx @ 0x14041CBC0
 * Callers:
 *     DifZwOpenKeyExWrapper @ 0x1405F1BD0 (DifZwOpenKeyExWrapper.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406CEE20 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140B76340 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess);
}

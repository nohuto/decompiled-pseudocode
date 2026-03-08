/*
 * XREFs of ZwOpenKeyEx @ 0x140414830
 * Callers:
 *     DifZwOpenKeyExWrapper @ 0x1405EF720 (DifZwOpenKeyExWrapper.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406D43A0 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140B71EB4 (MfgInitSystem.c)
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

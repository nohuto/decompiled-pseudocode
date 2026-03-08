/*
 * XREFs of MyRegOpenKeyForRead @ 0x1C0043A3C
 * Callers:
 *     ReadManifestAssignedValue @ 0x1C0042FCC (ReadManifestAssignedValue.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C00430C8 (CheckUSBFnIncludeDefaultCfg.c)
 *     CheckUSBFnConfiguration @ 0x1C004329C (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C004353C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C00436CC (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall MyRegOpenKeyForRead(__int64 a1, const WCHAR *a2, void **a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
}

/*
 * XREFs of MyRegOpenKeyForRead @ 0x1C005DE7C
 * Callers:
 *     CheckUSBFnConfiguration @ 0x1C005D03C (CheckUSBFnConfiguration.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C005D2E8 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C005D61C (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C005D718 (ReadTestOverrideValue.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005D870 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UpdateUcmIsPresentBit @ 0x1C005DA24 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall MyRegOpenKeyForRead(__int64 a1, const WCHAR *a2, void **a3)
{
  struct _UNICODE_STRING v5; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v5 = 0LL;
  RtlInitUnicodeString(&v5, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
}

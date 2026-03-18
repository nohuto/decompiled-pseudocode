/*
 * XREFs of CcOpenRegistryPath @ 0x1403B1CB0
 * Callers:
 *     CcSetupWatchForRegistryChanges @ 0x1403B1B4C (CcSetupWatchForRegistryChanges.c)
 *     CcRegistryChangeCallback @ 0x1403C6E10 (CcRegistryChangeCallback.c)
 * Callees:
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall CcOpenRegistryPath(UNICODE_STRING *a1, HANDLE *a2)
{
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  v3.ObjectName = a1;
  *(_QWORD *)&v3.Length = 48LL;
  v3.RootDirectory = 0LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  return ZwOpenKey(a2, 0x10u, &v3);
}

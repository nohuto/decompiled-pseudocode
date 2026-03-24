/*
 * XREFs of PpmOpenRegistryKey @ 0x1408F5DB4
 * Callers:
 *     PpmRegisterSpmSettings @ 0x1408F60F0 (PpmRegisterSpmSettings.c)
 * Callees:
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall PpmOpenRegistryKey(UNICODE_STRING *a1, __int64 a2, __int64 a3, void *a4, PHANDLE KeyHandle)
{
  OBJECT_ATTRIBUTES v6; // [rsp+20h] [rbp-38h] BYREF

  *(&v6.Length + 1) = 0;
  memset(&v6.Attributes + 1, 0, 20);
  v6.ObjectName = a1;
  v6.Length = 48;
  v6.RootDirectory = a4;
  v6.Attributes = 576;
  return ZwOpenKey(KeyHandle, 8u, &v6);
}

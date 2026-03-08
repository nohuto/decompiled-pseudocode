/*
 * XREFs of PpmOpenRegistryKey @ 0x14099A2C4
 * Callers:
 *     PpmRegisterSpmSettings @ 0x14099A640 (PpmRegisterSpmSettings.c)
 * Callees:
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 */

NTSTATUS __fastcall PpmOpenRegistryKey(UNICODE_STRING *a1, __int64 a2, __int64 a3, void *a4, PHANDLE KeyHandle)
{
  OBJECT_ATTRIBUTES v6; // [rsp+20h] [rbp-38h] BYREF

  memset(&v6.Attributes + 1, 0, 20);
  *(_QWORD *)&v6.Length = 48LL;
  v6.ObjectName = a1;
  v6.RootDirectory = a4;
  v6.Attributes = 576;
  return ZwOpenKey(KeyHandle, 8u, &v6);
}

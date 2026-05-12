/*
 * XREFs of RaidRegGetDeviceDumpCustomGPLogPage @ 0x1C00192EC
 * Callers:
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C0019234 (RaidSelectDeviceDumpCollectionMode.c)
 * Callees:
 *     PortRegistryReadDeviceKey @ 0x1C0073274 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall RaidRegGetDeviceDumpCustomGPLogPage(__int64 a1, __int64 a2)
{
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v5 = 4;
  v4 = 0LL;
  RtlInitUnicodeString(&v4, L"DeviceDumpVendorGPLogAddress");
  return PortRegistryReadDeviceKey(*(_QWORD *)(a1 + 8), 0, (unsigned int)&v4, 4, (__int64)&v6, (__int64)&v5);
}

/*
 * XREFs of MmCreateMirror @ 0x140A2F1B0
 * Callers:
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x14041D260 (ZwQueryLicenseValue.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 */

NTSTATUS MmCreateMirror(void)
{
  _QWORD v1[2]; // [rsp+30h] [rbp-40h] BYREF
  int v2; // [rsp+64h] [rbp-Ch]
  int v3; // [rsp+90h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  v1[1] = L"Kernel-MemoryMirroringSupported";
  v1[0] = 4194366LL;
  ZwQueryLicenseValue((__int64)v1, (__int64)&v3);
  return -1073741206;
}

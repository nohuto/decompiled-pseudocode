/*
 * XREFs of ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C013EDA0
 * Callers:
 *     HmgAllocateDcAttr @ 0x1C002B568 (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C007FD00 (HmgAllocateObjectAttr.c)
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C00C9874 (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

void __fastcall HmgFreeAllocateSecureUserMemory(void *a1, void *a2)
{
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = a1;
  RegionSize = 4096LL;
  Feature_2249667896__private_IsEnabledDeviceUsage();
  MmUnsecureVirtualMemory(a2);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
}

/*
 * XREFs of ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C007FE60
 * Callers:
 *     HmgAllocateDcAttr @ 0x1C002B568 (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C007FD00 (HmgAllocateObjectAttr.c)
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C00C9874 (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     GrepSecureVirtualMemory @ 0x1C00CB2F0 (GrepSecureVirtualMemory.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

PVOID __fastcall HmgAllocateSecureUserMemory(void **a1)
{
  HANDLE v2; // rax
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF
  SIZE_T Size; // [rsp+50h] [rbp+18h] BYREF
  HANDLE SecureHandle; // [rsp+58h] [rbp+20h]

  Address = 0LL;
  Size = 4096LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u) >= 0 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      v2 = (HANDLE)GrepSecureVirtualMemory(Address, Size, 4LL);
    else
      v2 = MmSecureVirtualMemory(Address, Size, 4u);
    SecureHandle = v2;
    *a1 = v2;
    if ( v2 )
    {
      memset(Address, 0, Size);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, &Size, 0x8000u);
      return 0LL;
    }
  }
  return Address;
}

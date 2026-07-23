/*
 * XREFs of VslValidateDynamicCodePages @ 0x1404FEC10
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall VslValidateDynamicCodePages(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v12; // ebx
  _QWORD v14[14]; // [rsp+20h] [rbp-128h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-88h]
  struct _MDL v17; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v18; // [rsp+F8h] [rbp-50h]

  memset(v14, 0, 0x68uLL);
  memset(&v17.MdlFlags + 1, 0, 20);
  v18 = 0LL;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 20);
  v16 = 0LL;
  v8 = 8
     * (((unsigned int)(*(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44)) + 4095LL + (*(_DWORD *)(a1 + 32) & 0xFFFuLL)) >> 12)
     + 48;
  v9 = (v8 + (a1 & 0xFFF) + 4095) >> 12;
  if ( v9 > 1 )
    return 3221225485LL;
  v17.Next = 0LL;
  v17.Size = 8 * (v9 + 6);
  v17.MdlFlags = 0;
  v17.StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v17.ByteOffset = a1 & 0xFFF;
  v17.ByteCount = v8;
  MiProbeAndLockPages((__int64)&v17, 0, 0);
  v10 = 8
      * (((*(_DWORD *)(a4 + 32) & 0xFFFLL)
        + 4095
        + (unsigned __int64)(unsigned int)(*(_DWORD *)(a4 + 40) + *(_DWORD *)(a4 + 44))) >> 12)
      + 48;
  v11 = (v10 + (a4 & 0xFFF) + 4095) >> 12;
  if ( v11 > 1 )
    return 3221225485LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (v11 + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a4 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a4 & 0xFFF;
  MemoryDescriptorList.ByteCount = v10;
  MiProbeAndLockPages((__int64)&MemoryDescriptorList, 0, 0);
  v14[1] = a1;
  v14[2] = v18;
  v14[3] = a4;
  v14[4] = v16;
  v14[5] = a2;
  v14[6] = a3;
  v12 = VslpEnterIumSecureMode(2u, 31, 0, (__int64)v14);
  MmUnlockPages(&MemoryDescriptorList);
  MmUnlockPages(&v17);
  return v12;
}

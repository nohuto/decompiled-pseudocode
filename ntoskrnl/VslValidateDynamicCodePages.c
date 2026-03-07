__int64 __fastcall VslValidateDynamicCodePages(__int64 a1, struct _MDL *a2, unsigned int a3)
{
  SIZE_T v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // ebx
  __int64 *v10[10]; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v11[14]; // [rsp+80h] [rbp-C8h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+120h] [rbp-28h]

  memset(v11, 0, 0x68uLL);
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 20);
  v13 = 0LL;
  memset(v10, 0, 0x48uLL);
  v6 = MmSizeOfMdl(*(PVOID *)(a1 + 32), (unsigned int)(*(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44)));
  v7 = (v6 + (a1 & 0xFFF) + 4095) >> 12;
  if ( v7 > 1 )
    return 3221225485LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (v7 + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a1 & 0xFFF;
  MemoryDescriptorList.ByteCount = v6;
  MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
  v8 = VslpLockPagesForTransfer((__int64)v10, a2, a3, 0, 0);
  if ( v8 >= 0 )
  {
    v11[1] = a1;
    v11[2] = v13;
    v11[3] = v10[0];
    v11[4] = v10[7];
    v8 = VslpEnterIumSecureMode(2u, 31, 0, (__int64)v11);
    VslpUnlockPagesForTransfer(v10);
  }
  MmUnlockPages(&MemoryDescriptorList);
  return (unsigned int)v8;
}

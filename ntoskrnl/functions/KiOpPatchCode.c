__int64 __fastcall KiOpPatchCode(__int64 a1, __int64 a2, char a3)
{
  int v5; // edi
  _BYTE *v6; // rax
  __int64 v8; // [rsp+40h] [rbp-68h] BYREF
  __int64 MemoryDescriptorList; // [rsp+48h] [rbp-60h] BYREF
  __int16 MemoryDescriptorList_8; // [rsp+50h] [rbp-58h]
  __int16 MemoryDescriptorList_10; // [rsp+52h] [rbp-56h]
  _DWORD MemoryDescriptorList_12[5]; // [rsp+54h] [rbp-54h] BYREF
  unsigned __int64 MemoryDescriptorList_32; // [rsp+68h] [rbp-40h]
  int MemoryDescriptorList_40; // [rsp+70h] [rbp-38h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+74h] [rbp-34h]

  memset(MemoryDescriptorList_12, 0, sizeof(MemoryDescriptorList_12));
  *(_QWORD *)&MemoryDescriptorList_44[4] = 0LL;
  v8 = a2;
  ExAcquireFastMutex(&KiUserCodePatchMutex);
  v5 = ZwProtectVirtualMemory(-1LL, (__int64)&v8);
  if ( v5 >= 0 )
  {
    memset(MemoryDescriptorList_12, 0, sizeof(MemoryDescriptorList_12));
    *(_DWORD *)&MemoryDescriptorList_44[8] = 0;
    MemoryDescriptorList = 0LL;
    MemoryDescriptorList_8 = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4096) >> 12) + 6);
    MemoryDescriptorList_10 = 0;
    MemoryDescriptorList_32 = a2 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)MemoryDescriptorList_44 = a2 & 0xFFF;
    MemoryDescriptorList_40 = 1;
    v5 = 0;
    MiProbeAndLockPages(&MemoryDescriptorList, 1, 1);
    if ( (MemoryDescriptorList_10 & 5) != 0 )
      v6 = *(_BYTE **)&MemoryDescriptorList_12[3];
    else
      v6 = MmMapLockedPagesSpecifyCache((PMDL)&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v6 )
      *v6 = a3;
    else
      v5 = -1073741670;
    MmUnlockPages((PMDL)&MemoryDescriptorList);
    ZwProtectVirtualMemory(-1LL, (__int64)&v8);
  }
  ExReleaseFastMutex(&KiUserCodePatchMutex);
  return (unsigned int)v5;
}

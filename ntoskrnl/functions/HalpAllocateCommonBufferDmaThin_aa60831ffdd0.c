__int64 __fastcall HalpAllocateCommonBufferDmaThin(
        ULONG_PTR a1,
        PHYSICAL_ADDRESS *a2,
        PHYSICAL_ADDRESS *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        PHYSICAL_ADDRESS *a8,
        _QWORD *a9)
{
  PVOID v9; // r14
  SIZE_T v10; // r12
  struct _MDL *v12; // r15
  int CommonBufferEntry; // esi
  __int64 v14; // rax
  PHYSICAL_ADDRESS v15; // rdi
  PHYSICAL_ADDRESS v16; // r8
  MEMORY_CACHING_TYPE CacheType; // esi
  __int64 v18; // r9
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  PVOID v20; // rdi
  unsigned int v22; // ecx
  PHYSICAL_ADDRESS v23; // rdx
  struct _MDL *v24; // rax
  __int64 v25; // rcx
  ULONG Flags; // [rsp+50h] [rbp-39h]
  PVOID BaseAddress; // [rsp+60h] [rbp-29h] BYREF
  int v28[2]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v29; // [rsp+70h] [rbp-19h] BYREF
  int v30; // [rsp+80h] [rbp-9h]
  char v33; // [rsp+E8h] [rbp+5Fh]

  Flags = 5;
  v30 = 0;
  v9 = 0LL;
  v33 = 0;
  v29 = 0LL;
  BaseAddress = 0LL;
  v10 = (a4 + 4095) & 0xFFFFF000;
  v12 = 0LL;
  CommonBufferEntry = HalpDmaReferenceDomainObject(a1);
  if ( CommonBufferEntry < 0 )
    return (unsigned int)CommonBufferEntry;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    *(_BYTE *)(v14 + 524) = 1;
  v15.QuadPart = 0LL;
  if ( a2 && a2->QuadPart )
    v15 = *a2;
  v16 = *(PHYSICAL_ADDRESS *)(a1 + 16);
  if ( a3 && v16.QuadPart > (unsigned __int64)a3->QuadPart )
    v16 = *a3;
  if ( v15.QuadPart > (unsigned __int64)v16.QuadPart
    || (CacheType = MmCached, a6) && (CacheType = *a6, *a6 > (unsigned int)MmCached) )
  {
    CommonBufferEntry = -1073741811;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 24);
    if ( (a5 & 1) != 0 )
    {
      v22 = 1;
      v10 = ((_DWORD)v10 + 0x1FFFFF) & 0xFFE00000;
      do
      {
        if ( 1LL << v22 >= (unsigned __int64)(unsigned int)v10 )
          break;
        ++v22;
      }
      while ( v22 < 0x3F );
      Flags = 101;
      v18 = 1LL << v22;
    }
    *(_QWORD *)v28 = v10;
    if ( (int)MmAllocateContiguousMemoryEx(
                (int)v28,
                v15.LowPart,
                v16.LowPart,
                v18,
                a7,
                CacheType != MmNonCached ? 4 : 516,
                0LL,
                1147953480,
                *(_DWORD *)(a1 + 48) == 2,
                (__int64)&BaseAddress) >= 0 )
    {
      if ( *(_QWORD *)v28 == v10 )
        v9 = BaseAddress;
      else
        MmFreeContiguousMemory(BaseAddress);
      if ( v9 )
        goto LABEL_14;
    }
    if ( *(_DWORD *)(a1 + 48) == 2 )
    {
      v23 = *(PHYSICAL_ADDRESS *)(a1 + 16);
      v24 = a7 == 0x80000000
          ? MmAllocatePagesForMdlEx(v15, v23, 0LL, v10, CacheType, Flags)
          : (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                             v15.LowPart,
                             v23.LowPart,
                             0LL,
                             v10,
                             CacheType,
                             a7,
                             Flags,
                             0LL);
      v12 = v24;
      if ( v24 )
      {
        v9 = MmMapLockedPagesSpecifyCache(v24, 0, CacheType, 0LL, 0, 0x40000010u);
        if ( v9 )
        {
LABEL_14:
          PhysicalAddress = MmGetPhysicalAddress(v9);
          if ( v12 )
          {
            LODWORD(v29) = 0;
            v25 = *(_QWORD *)(a1 + 40);
            *((_QWORD *)&v29 + 1) = v12;
            CommonBufferEntry = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(HalpDmaIommuInterfaceFcnTable
                                                                                        + 56))(
                                  v25,
                                  3LL,
                                  &v29);
            if ( CommonBufferEntry < 0 )
              goto LABEL_24;
            PhysicalAddress.QuadPart = 0LL;
            v33 = 1;
          }
          CommonBufferEntry = HalpAllocateCommonBufferEntry((_DWORD)v12, (_DWORD)v9, 0, a1, 1);
          *a8 = PhysicalAddress;
          v20 = a9;
          *a9 = v9;
          if ( CommonBufferEntry >= 0 )
            return (unsigned int)CommonBufferEntry;
          if ( v33 )
            (*(void (__fastcall **)(_QWORD, _QWORD, SIZE_T))(HalpDmaIommuInterfaceFcnTable + 64))(
              *(_QWORD *)(a1 + 40),
              0LL,
              v10 >> 12);
          goto LABEL_25;
        }
      }
    }
    CommonBufferEntry = -1073741670;
  }
LABEL_24:
  v20 = a9;
LABEL_25:
  HalpDmaDereferenceDomainObject(a1);
  if ( v9 )
  {
    if ( v12 )
    {
      MmUnmapLockedPages(v9, v12);
LABEL_46:
      MiFreePagesFromMdl((ULONG_PTR)v12, 0);
      return (unsigned int)CommonBufferEntry;
    }
    MmFreeContiguousMemory(v20);
  }
  else if ( v12 )
  {
    goto LABEL_46;
  }
  return (unsigned int)CommonBufferEntry;
}

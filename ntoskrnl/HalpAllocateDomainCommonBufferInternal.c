/*
 * XREFs of HalpAllocateDomainCommonBufferInternal @ 0x14050FF60
 * Callers:
 *     HalAllocateCommonBufferExV3 @ 0x14050C450 (HalAllocateCommonBufferExV3.c)
 *     HalAllocateCommonBufferWithBounds @ 0x14050C5F0 (HalAllocateCommonBufferWithBounds.c)
 *     HalAllocateDomainCommonBuffer @ 0x14050F9C0 (HalAllocateDomainCommonBuffer.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmAllocatePagesForMdlEx @ 0x1402B3960 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402B39C0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaReferenceDomainObject @ 0x14038D02C (HalpDmaReferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x14038D0B4 (HalpAllocateCommonBufferEntry.c)
 *     MmAllocateContiguousMemoryEx @ 0x14038D1E0 (MmAllocateContiguousMemoryEx.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
 */

__int64 __fastcall HalpAllocateDomainCommonBufferInternal(
        ULONG_PTR BugCheckParameter3,
        PHYSICAL_ADDRESS *a2,
        unsigned __int64 *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        _QWORD *a8,
        _QWORD *a9)
{
  SIZE_T v9; // r13
  PVOID v10; // r12
  struct _MDL *v12; // r14
  int CommonBufferEntry; // edi
  __int64 v14; // rax
  int v15; // r10d
  PHYSICAL_ADDRESS v16; // rsi
  unsigned __int64 v17; // rdi
  MEMORY_CACHING_TYPE CacheType; // r8d
  __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned int Flags; // r11d
  int v22; // ecx
  int v23; // ecx
  PHYSICAL_ADDRESS v24; // rdx
  struct _MDL *PagesForMdl; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char v28; // [rsp+50h] [rbp-49h]
  char v29; // [rsp+51h] [rbp-48h]
  char v30; // [rsp+52h] [rbp-47h]
  MEMORY_CACHING_TYPE v31; // [rsp+54h] [rbp-45h]
  PVOID BaseAddress; // [rsp+58h] [rbp-41h] BYREF
  int v33; // [rsp+60h] [rbp-39h]
  _BYTE v34[12]; // [rsp+64h] [rbp-35h]
  int v35[2]; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-21h]
  PHYSICAL_ADDRESS v37; // [rsp+80h] [rbp-19h]
  __int128 v38; // [rsp+88h] [rbp-11h] BYREF
  SIZE_T v39; // [rsp+98h] [rbp-1h]
  char v42; // [rsp+F8h] [rbp+5Fh]

  v36 = 0LL;
  v37.QuadPart = 0LL;
  *(_DWORD *)&v34[8] = 0;
  v9 = (a4 + 4095) & 0xFFFFF000;
  LODWORD(v39) = 0;
  v10 = 0LL;
  *(_QWORD *)v34 = v9;
  BaseAddress = 0LL;
  v38 = 0LL;
  v12 = 0LL;
  v30 = 0;
  v29 = 0;
  v42 = 0;
  v28 = 0;
  v33 = 21;
  CommonBufferEntry = HalpDmaReferenceDomainObject(BugCheckParameter3);
  if ( CommonBufferEntry < 0 )
    return (unsigned int)CommonBufferEntry;
  v14 = *(_QWORD *)(BugCheckParameter3 + 56);
  v15 = 1;
  if ( v14 )
    *(_BYTE *)(v14 + 524) = 1;
  v16.QuadPart = 0LL;
  if ( a2 )
    v16 = *a2;
  v17 = *(_QWORD *)(BugCheckParameter3 + 16);
  if ( a3 && v17 > *a3 )
    v17 = *a3;
  CacheType = *(_BYTE *)(BugCheckParameter3 + 32) != 0;
  v31 = CacheType;
  if ( a6 )
  {
    CacheType = *a6;
    v31 = *a6;
    if ( *a6 )
    {
      if ( CacheType != MmCached )
      {
        CommonBufferEntry = -1073741811;
        goto LABEL_53;
      }
    }
  }
  v19 = *(_QWORD *)(BugCheckParameter3 + 24);
  if ( (a5 & 1) != 0 )
  {
    v20 = 1;
    v9 = ((_DWORD)v9 + 0x1FFFFF) & 0xFFE00000;
    *(_DWORD *)v34 = v9;
    do
    {
      if ( 1LL << v20 >= (unsigned __int64)(unsigned int)v9 )
        break;
      ++v20;
    }
    while ( v20 < 0x3F );
    Flags = 101;
    v19 = 1LL << v20;
    v33 = 101;
  }
  else
  {
    Flags = 21;
  }
  v22 = *(_DWORD *)(BugCheckParameter3 + 48);
  if ( v22 != 2 )
  {
    v15 = 0;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
          goto LABEL_30;
      }
      else
      {
        v28 = 1;
      }
    }
  }
  *(_QWORD *)v35 = v9;
  if ( (int)MmAllocateContiguousMemoryEx(
              v35,
              v16.LowPart,
              v17,
              v19,
              a7,
              CacheType != MmNonCached ? 4 : 516,
              0LL,
              1147953480,
              v15,
              (__int64 *)&BaseAddress) >= 0 )
  {
    if ( *(_QWORD *)v35 == v9 )
    {
      v10 = BaseAddress;
      goto LABEL_36;
    }
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 48) != 2 )
  {
LABEL_52:
    CommonBufferEntry = -1073741670;
    goto LABEL_53;
  }
  CacheType = v31;
  Flags = v33 & 0xFFFFFFEF;
  v9 = *(unsigned int *)v34;
LABEL_30:
  v24 = *(PHYSICAL_ADDRESS *)(BugCheckParameter3 + 16);
  v42 = 1;
  if ( a7 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(v16, v24, 0LL, v9, CacheType, Flags);
  else
    PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                   v16.LowPart,
                                   v24.LowPart,
                                   0LL,
                                   v9,
                                   CacheType,
                                   a7,
                                   Flags,
                                   0LL);
  v12 = PagesForMdl;
  if ( !PagesForMdl )
    goto LABEL_52;
  v10 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, v31, 0LL, 0, 0x40000010u);
LABEL_36:
  if ( !v10 )
    goto LABEL_52;
  PhysicalAddress = MmGetPhysicalAddress(v10);
  *(PHYSICAL_ADDRESS *)&v34[4] = PhysicalAddress;
  if ( v12 )
  {
    *((_QWORD *)&v38 + 1) = v12;
  }
  else
  {
    LODWORD(v38) = 1;
    *((PHYSICAL_ADDRESS *)&v38 + 1) = PhysicalAddress;
    v39 = v9;
  }
  if ( v42 )
  {
    v37 = v16;
    v36 = v17;
    CommonBufferEntry = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(HalpDmaIommuInterfaceFcnTable + 56))(
                          *(_QWORD *)(BugCheckParameter3 + 40),
                          3LL,
                          &v38);
    if ( CommonBufferEntry >= 0 )
    {
      v30 = 1;
LABEL_46:
      CommonBufferEntry = HalpAllocateCommonBufferEntry(
                            (__int64)v12,
                            (unsigned __int64)v10,
                            *(__int64 *)&v34[4],
                            BugCheckParameter3,
                            1);
      if ( CommonBufferEntry >= 0 )
      {
        *a8 = *(_QWORD *)&v34[4];
        *a9 = v10;
        return (unsigned int)CommonBufferEntry;
      }
      if ( v29 )
      {
        (*(void (__fastcall **)(_QWORD, __int128 *))(HalpDmaIommuInterfaceFcnTable + 80))(
          *(_QWORD *)(BugCheckParameter3 + 40),
          &v38);
      }
      else if ( v30 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, SIZE_T))(HalpDmaIommuInterfaceFcnTable + 64))(
          *(_QWORD *)(BugCheckParameter3 + 40),
          *(_QWORD *)&v34[4],
          v9 >> 12);
      }
    }
  }
  else
  {
    if ( !v28 )
      goto LABEL_46;
    CommonBufferEntry = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(HalpDmaIommuInterfaceFcnTable + 72))(
                          *(_QWORD *)(BugCheckParameter3 + 40),
                          3LL,
                          &v38);
    if ( CommonBufferEntry >= 0 )
    {
      v29 = 1;
      goto LABEL_46;
    }
  }
LABEL_53:
  HalpDmaDereferenceDomainObject(BugCheckParameter3);
  if ( v10 )
  {
    if ( v12 )
    {
      MmUnmapLockedPages(v10, v12);
LABEL_58:
      MiFreePagesFromMdl((ULONG_PTR)v12, 0);
      return (unsigned int)CommonBufferEntry;
    }
    MmFreeContiguousMemory(v10);
  }
  else if ( v12 )
  {
    goto LABEL_58;
  }
  return (unsigned int)CommonBufferEntry;
}

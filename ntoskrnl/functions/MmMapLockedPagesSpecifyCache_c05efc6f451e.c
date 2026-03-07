PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  signed int v6; // esi
  __int64 ByteOffset; // rcx
  char *v10; // rcx
  unsigned __int64 v11; // rbp
  ULONG v12; // ecx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 *v17; // r14
  unsigned int v18; // r12d
  void *v19; // rdi
  int v20; // eax
  CSHORT MdlFlags; // cx
  char v22; // si
  unsigned int v23; // esi
  CSHORT v24; // ax
  unsigned int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v6 = Priority;
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v27 = 0;
  v10 = (char *)MemoryDescriptorList->StartVa + ByteOffset;
  if ( AccessMode )
    return (PVOID)MiMapLockedPagesInUserSpace(
                    (_DWORD)MemoryDescriptorList,
                    (_DWORD)v10,
                    CacheType,
                    (_DWORD)RequestedAddress,
                    Priority);
  if ( (Priority & 0x20000000) == 0 )
  {
    v11 = (((unsigned __int16)v10 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( (Priority & 0x20) == 0 )
    {
      v12 = Priority & 0x3FFFFFFF;
      v13 = 512LL;
      if ( (Priority & 0x3FFFFFFF) != 0x10 )
        v13 = 2048LL;
      v14 = v12 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v12 == 16) + 1);
      if ( ((qword_140C66A30 << 9) - qword_140C695F0) << 12 < v14
        && (v13 >= qword_140C69610 || v11 >= qword_140C69610 - v13)
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        ++dword_140C695E0;
        return 0LL;
      }
    }
    v15 = v11;
    if ( MmProtectFreedNonPagedPool )
      v15 = v11 + 1;
    v16 = MiReservePtes(&qword_140C695C0, v15);
    v17 = (__int64 *)v16;
    if ( v16 )
    {
      v18 = ((v6 >> 31) & 0xFFFFFFFD) + 4;
      v19 = (void *)(MemoryDescriptorList->ByteOffset + (v16 << 25 >> 16));
      if ( (MiFlags & 0x8000) == 0 && (v6 & 0x40000000) == 0 )
        v18 |= 2u;
      if ( CacheType )
      {
        if ( CacheType == MmWriteCombined )
          v18 |= 0x18u;
      }
      else
      {
        v18 |= 8u;
      }
      v20 = MiFillSystemPtes(v16, v11, (int)MemoryDescriptorList + 48, v18, 0, (__int64)&v27);
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( v20 >= 0 )
      {
        v22 = v27;
        MemoryDescriptorList->MappedSystemVa = v19;
        MemoryDescriptorList->MdlFlags = MdlFlags | 1;
        v23 = v22 & 1;
        if ( v23 )
        {
          MiMappingHasIoReferences((unsigned __int64)v19);
          MemoryDescriptorList->MdlFlags |= 0x800u;
        }
        if ( (dword_140D1D1CC & 1) != 0 )
        {
          if ( MmProtectFreedNonPagedPool )
            v23 |= 2u;
          v26 = MiProtectionToCacheAttribute(v18);
          MiInsertPteTracker(MemoryDescriptorList, 0LL, v23, v26);
        }
        v24 = MemoryDescriptorList->MdlFlags;
        if ( (v24 & 0x10) != 0 )
          MemoryDescriptorList->MdlFlags = v24 | 0x20;
        return v19;
      }
      if ( (MdlFlags & 0x2000) != 0 || !BugCheckOnFailure )
      {
        MiReleasePtes((__int64)&qword_140C695C0, v17, v15);
        return 0LL;
      }
    }
    else if ( _bittest16(&MemoryDescriptorList->MdlFlags, 0xDu) || !BugCheckOnFailure )
    {
      return 0LL;
    }
    MiIssueNoPtesBugcheck((unsigned int)v11);
  }
  return 0LL;
}

/*
 * XREFs of HalpAllocateCommonBufferDmarThin @ 0x1405116E8
 * Callers:
 *     HalAllocateCommonBufferDmarThinEx @ 0x140511000 (HalAllocateCommonBufferDmarThinEx.c)
 *     HalAllocateCommonBufferWithBoundsDmarThin @ 0x1405110A0 (HalAllocateCommonBufferWithBoundsDmarThin.c)
 *     HalAllocateDomainCommonBufferDmarThin @ 0x140511120 (HalAllocateDomainCommonBufferDmarThin.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmAllocatePagesForMdlEx @ 0x1402B3960 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402B39C0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaReferenceDomainObject @ 0x14038D02C (HalpDmaReferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x14038D0B4 (HalpAllocateCommonBufferEntry.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
 */

__int64 __fastcall HalpAllocateCommonBufferDmarThin(
        __int64 *BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        unsigned int a7,
        _QWORD *a8,
        _QWORD *a9)
{
  SIZE_T v9; // r14
  PVOID v11; // rbp
  struct _MDL *v12; // rsi
  int CommonBufferEntry; // edi
  __int64 v14; // rax
  MEMORY_CACHING_TYPE CacheType; // edi
  PHYSICAL_ADDRESS v16; // rdx
  int Flags; // ecx
  struct _MDL *PagesForMdl; // rax
  __int64 v19; // rcx
  __int128 v21; // [rsp+48h] [rbp-30h] BYREF
  int v22; // [rsp+58h] [rbp-20h]

  v21 = 0LL;
  v22 = 0;
  v9 = (a4 + 4095) & 0xFFFFF000;
  v11 = 0LL;
  v12 = 0LL;
  CommonBufferEntry = HalpDmaReferenceDomainObject((__int64)BugCheckParameter3);
  if ( CommonBufferEntry >= 0 )
  {
    v14 = BugCheckParameter3[7];
    if ( v14 )
      *(_BYTE *)(v14 + 524) = 1;
    CacheType = MmCached;
    if ( a6 && (CacheType = *a6, *a6 > (unsigned int)MmCached) )
    {
      CommonBufferEntry = -1073741811;
    }
    else
    {
      if ( (a5 & 1) != 0 )
        v9 = ((_DWORD)v9 + 0x1FFFFF) & 0xFFE00000;
      v16.QuadPart = BugCheckParameter3[2];
      Flags = (a5 & 1) != 0 ? 101 : 21;
      if ( a7 == 0x80000000 )
        PagesForMdl = MmAllocatePagesForMdlEx(0LL, v16, 0LL, v9, CacheType, Flags);
      else
        PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                       0,
                                       v16.LowPart,
                                       0LL,
                                       v9,
                                       CacheType,
                                       a7,
                                       Flags,
                                       0LL);
      v12 = PagesForMdl;
      if ( PagesForMdl && (v11 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, CacheType, 0LL, 0, 0x40000010u)) != 0LL )
      {
        LODWORD(v21) = 0;
        v19 = BugCheckParameter3[5];
        *((_QWORD *)&v21 + 1) = v12;
        CommonBufferEntry = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(HalpDmaIommuInterfaceFcnTable + 56))(
                              v19,
                              3LL,
                              &v21);
        if ( CommonBufferEntry >= 0 )
        {
          CommonBufferEntry = HalpAllocateCommonBufferEntry(
                                (__int64)v12,
                                (unsigned __int64)v11,
                                0LL,
                                (__int64)BugCheckParameter3,
                                1);
          if ( CommonBufferEntry >= 0 )
          {
            *a8 = 0LL;
            *a9 = v11;
            return (unsigned int)CommonBufferEntry;
          }
          (*(void (__fastcall **)(__int64, _QWORD, SIZE_T))(HalpDmaIommuInterfaceFcnTable + 64))(
            BugCheckParameter3[5],
            0LL,
            v9 >> 12);
        }
      }
      else
      {
        CommonBufferEntry = -1073741670;
      }
    }
    HalpDmaDereferenceDomainObject(BugCheckParameter3);
    if ( v11 )
      MmUnmapLockedPages(v11, v12);
    if ( v12 )
      MiFreePagesFromMdl((ULONG_PTR)v12, 0);
  }
  return (unsigned int)CommonBufferEntry;
}

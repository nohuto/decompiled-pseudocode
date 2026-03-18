/*
 * XREFs of PoSetHiberRange @ 0x14058E930
 * Callers:
 *     HalpTimerMarkHiberPhase @ 0x1404FE834 (HalpTimerMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x1405016AC (HalpDmaMarkHiberAdapter.c)
 *     HalpIommuExtMarkHiberMemory @ 0x140515408 (HalpIommuExtMarkHiberMemory.c)
 *     HalpPciMarkHiberPhase @ 0x140515700 (HalpPciMarkHiberPhase.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14051F7E8 (HalpExtEnvMarkHiberRegions.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x140526EF8 (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x140546740 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405467A8 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1405470E0 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405471B4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x14055061C (IoGetDumpHiberRanges.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x14057EBBC (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405B47DC (RtlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x1405D4F14 (DifMarkHiberPhase.c)
 *     MiMarkKernelPageTablePte @ 0x140626B20 (MiMarkKernelPageTablePte.c)
 *     VslAllocateSecureHibernateResources @ 0x1409418BC (VslAllocateSecureHibernateResources.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopHiberInitializeResources @ 0x1409888D4 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140A30AE0 (MmMarkHiberRange.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140A957DC (HalpMmAllocCtxMarkHiberPhase.c)
 *     HaliLocateHiberRanges @ 0x140A95D60 (HaliLocateHiberRanges.c)
 *     HalpExtMarkHiberPhase @ 0x140A96060 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140A96140 (HalpIommuMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140A99B34 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140A9EA68 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x140A9EAF8 (KeMarkHiberPhase.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140AA1BD8 (PopBootLoaderTraceCopyPfnList.c)
 *     PopBuildMemoryImageHeader @ 0x140AA1C78 (PopBuildMemoryImageHeader.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140AA211C (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     PopMarkComponentsBootPhase @ 0x140AA36CC (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140AA3958 (PopMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140AAC400 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC600 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x140AACDA0 (MmMarkHiberPhase.c)
 *     BgpFwMarkHiberPhase @ 0x140AF2DE4 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028BDC0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     PopSetRange @ 0x14058EFAC (PopSetRange.c)
 *     MmGetSectionRange @ 0x140A306E8 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140AAD02C (MmMarkImageForHiberPhase.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  __int16 v5; // bx
  PVOID v6; // rbp
  unsigned int v7; // eax
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r15
  PHYSICAL_ADDRESS v12; // r12
  __int64 v13; // r14
  ULONG_PTR v14; // rbp
  ULONG_PTR v15[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID v16; // [rsp+80h] [rbp+8h]
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = (unsigned __int64)Address;
  v16 = MemoryMap;
  v5 = Flags;
  v6 = MemoryMap;
  LODWORD(v15[0]) = 0;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    v8 = Flags & 0x10000;
    if ( (Flags & 0x10000) == 0 )
      goto LABEL_12;
LABEL_16:
    KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
  }
  v6 = (PVOID)qword_140C3CE60;
  v16 = (PVOID)qword_140C3CE60;
  if ( !qword_140C3CE60 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
  v7 = *(_DWORD *)(qword_140C3CE60 + 184);
  if ( v7 != 8 )
  {
    if ( v7 != 9 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
    return;
  }
  if ( (Flags & 0xFFFFBFFF) != 0x10000 || !Length && (Flags & 0x4000) != 0 )
    goto LABEL_16;
  v8 = Flags & 0x10000;
LABEL_12:
  if ( !Length )
  {
    if ( v8 )
    {
      MmMarkImageForHiberPhase(v17);
      return;
    }
    if ( (int)MmGetSectionRange(v17, &v17, v15) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA14C5uLL, 0LL, 0LL);
    Length = LODWORD(v15[0]);
  }
  if ( (v5 & 4) != 0 )
    v5 = v5 & 0xFFF9 | 2;
  if ( (v5 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v6, Tag);
  }
  else
  {
    v9 = v17 >> 12;
    v10 = (Length + v17 + 4095) >> 12;
    while ( v9 < v10 )
    {
      v15[0] = v9 << 12;
      v11 = v9 + 1;
      v12.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v9 << 12)).QuadPart >> 12;
      v13 = 1LL;
      if ( v9 + 1 < v10 )
      {
        v14 = v15[0];
        do
        {
          if ( v11 + v12.QuadPart - v9 != (unsigned __int64)MmGetPhysicalAddress((PVOID)(v14 + (v13 << 12))).QuadPart >> 12 )
            break;
          ++v13;
          ++v11;
        }
        while ( v11 < v10 );
        v6 = v16;
      }
      PopSetRange((ULONG_PTR)v6, Tag);
      v9 += v13;
    }
  }
}

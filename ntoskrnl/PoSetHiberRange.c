/*
 * XREFs of PoSetHiberRange @ 0x14058C400
 * Callers:
 *     HalpTimerMarkHiberPhase @ 0x1404FC754 (HalpTimerMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404FF5CC (HalpDmaMarkHiberAdapter.c)
 *     HalpIommuExtMarkHiberMemory @ 0x140512ED8 (HalpIommuExtMarkHiberMemory.c)
 *     HalpPciMarkHiberPhase @ 0x1405131D0 (HalpPciMarkHiberPhase.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14051D2B8 (HalpExtEnvMarkHiberRegions.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x1405249C8 (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x1405442A0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140544308 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140544C40 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140544D14 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x14054E17C (IoGetDumpHiberRanges.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x14057C6AC (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405B232C (RtlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x1405D2A64 (DifMarkHiberPhase.c)
 *     MiMarkKernelPageTablePte @ 0x140624680 (MiMarkKernelPageTablePte.c)
 *     VslAllocateSecureHibernateResources @ 0x14093E89C (VslAllocateSecureHibernateResources.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PopHiberInitializeResources @ 0x140985824 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140A2DDB0 (MmMarkHiberRange.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140A9269C (HalpMmAllocCtxMarkHiberPhase.c)
 *     HaliLocateHiberRanges @ 0x140A92C20 (HaliLocateHiberRanges.c)
 *     HalpExtMarkHiberPhase @ 0x140A92F20 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140A93000 (HalpIommuMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140A969F4 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140A9B928 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x140A9B9B8 (KeMarkHiberPhase.c)
 *     PopBuildMemoryImageHeader @ 0x140A9EA28 (PopBuildMemoryImageHeader.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140A9EEEC (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140AA0728 (PopMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140AA91D0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140AA93D0 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x140AA9B70 (MmMarkHiberPhase.c)
 *     BgpFwMarkHiberPhase @ 0x140AEEDE4 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PopSetRange @ 0x14058CA7C (PopSetRange.c)
 *     MmGetSectionRange @ 0x140A2D9B8 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140AA9DFC (MmMarkImageForHiberPhase.c)
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
  v6 = (PVOID)qword_140C3CDA0;
  v16 = (PVOID)qword_140C3CDA0;
  if ( !qword_140C3CDA0 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
  v7 = *(_DWORD *)(qword_140C3CDA0 + 184);
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

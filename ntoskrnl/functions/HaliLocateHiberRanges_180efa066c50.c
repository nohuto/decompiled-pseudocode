void __fastcall HaliLocateHiberRanges(PVOID MemoryMap)
{
  if ( MemoryMap )
  {
    if ( dword_140C63C40 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C63C48 >> 12),
        (unsigned __int64)(unsigned int)dword_140C63C40 >> 12,
        0x6D6C6168u);
    if ( dword_140C63E20 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C63E28 >> 12),
        (unsigned __int64)(unsigned int)dword_140C63E20 >> 12,
        0x6D6C6168u);
    if ( dword_140C63D20 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C63D28 >> 12),
        (unsigned __int64)(unsigned int)dword_140C63D20 >> 12,
        0x6D6C6168u);
    if ( dword_140C63F00 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C63F08 >> 12),
        (unsigned __int64)(unsigned int)dword_140C63F00 >> 12,
        0x6D6C6168u);
    HalpPciMarkHiberPhase(MemoryMap);
    HalpIommuMarkHiberPhase(MemoryMap);
    HalpExtEnvMarkHiberRegions(MemoryMap);
    HalpDmaMarkHiberAdapter(MemoryMap);
  }
  else
  {
    HalpMmAllocCtxMarkHiberPhase();
    HalpDmaMarkHiberAdapter(0LL);
    HalpIommuMarkHiberPhase(0LL);
    HalpExtEnvMarkHiberRegions(0LL);
    PoSetHiberRange(0LL, 0x10000u, HalpCR3Root, 0x1000uLL, 0x746C6168u);
    PoSetHiberRange(0LL, 0x10000u, HaliLocateHiberRanges, 0LL, 0x746C6168u);
    HalpExtMarkHiberPhase();
    if ( HalpMceErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpMceErrorSource, 0x3CCuLL, 0x746C6168u);
    if ( HalpCmcErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpCmcErrorSource, 0x3CCuLL, 0x746C6168u);
    PshedMarkHiberPhase();
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(PmAcpiDispatchTable + 8), 0LL, 0x636C6168u);
    (*(void (**)(void))(PmAcpiDispatchTable + 32))();
    PoSetHiberRange(0LL, 0x10000u, off_140C01BD0, 0LL, 0x636C6168u);
    off_140C01C10[0]();
    if ( HalpMcUpdateMicrocodeFunc )
      PoSetHiberRange(0LL, 0x10000u, HalpMcUpdateMicrocodeFunc, 0LL, 0x636C6168u);
    if ( HalpMcUpdateData )
      PoSetHiberRange(0LL, 0x10000u, HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize, 0x636C6168u);
    HalpTimerMarkHiberPhase(0LL);
    HalpReEnableDiagnosticEventsOnResume = HalpDiagnosticEventsRegistered;
    if ( HalpDiagnosticEventsRegistered )
      HalpDiagnosticEventsRegistered = 0;
  }
}

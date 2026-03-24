/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1404FA9E0
 * Callers:
 *     KiSwapProcess @ 0x1402071F0 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x140207300 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140387DA0 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x140405E40 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlSwitchVirtualAddressSpace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HvcallInitiateHypercall(65537, a1, 0LL, a4);
}

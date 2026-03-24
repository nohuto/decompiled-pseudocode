/*
 * XREFs of HalpAcpiGetTable @ 0x1402E77D0
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x1402E77B0 (HalAcpiGetTableDispatch.c)
 *     HalpInterruptParseAcpiTables @ 0x1403AFD20 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x1403B32D4 (HalSocGetAcpiTable.c)
 *     HalMatchAcpiOemId @ 0x1403BFDC0 (HalMatchAcpiOemId.c)
 *     HalMatchAcpiFADTBootArch @ 0x1403C4E90 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTable @ 0x1403CA210 (HalAcpiGetTable.c)
 *     HalMatchAcpiOemTableId @ 0x1403CE4C0 (HalMatchAcpiOemTableId.c)
 *     HalAcpiGetTableEx @ 0x1404B8820 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x1404B8840 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x1404B88C0 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x1404B8940 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x1404C41A0 (HalpExtGetAcpiTable.c)
 *     HalpIommuHsaDiscover @ 0x140A45214 (HalpIommuHsaDiscover.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpGetAcpiBiosVersion @ 0x140A59B9C (CmpGetAcpiBiosVersion.c)
 *     HalpSetupAcpiPhase0 @ 0x140A63D20 (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140A63EE0 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140A63F94 (HalpInitializeConfigurationFromMadt.c)
 *     HalpInitBootTable @ 0x140A64DF0 (HalpInitBootTable.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A64E3C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6967C (HalpPowerInitFwPerformanceTableMappings.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140A6A61C (KsepMatchInitAcpiOemInfo.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140A6C8BC (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140A6D3F4 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140A6EE38 (HalpExtInitExtensions.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x1402E7850 (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140A64690 (HalpAcpiTableCacheInit.c)
 */

__int64 __fastcall HalpAcpiGetTable(__int64 a1, int a2, int a3, int a4)
{
  __int64 TableWork; // rdi

  if ( a1 )
  {
    if ( (int)HalpAcpiTableCacheInit() < 0 )
      return 0LL;
  }
  else
  {
    ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  }
  TableWork = HalpAcpiGetTableWork(a1, a2, a3, a4);
  if ( !a1 )
    KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}

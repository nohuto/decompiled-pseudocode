/*
 * XREFs of HalpAcpiGetTable @ 0x14029C550
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x14029C530 (HalAcpiGetTableDispatch.c)
 *     HalAcpiGetTable @ 0x1403706A0 (HalAcpiGetTable.c)
 *     HalSocGetAcpiTable @ 0x14037601C (HalSocGetAcpiTable.c)
 *     HalpInterruptParseAcpiTables @ 0x140376A1C (HalpInterruptParseAcpiTables.c)
 *     HalMatchAcpiOemId @ 0x140395040 (HalMatchAcpiOemId.c)
 *     HalMatchAcpiOemTableId @ 0x14039C1E0 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiFADTBootArch @ 0x14039DF10 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTableEx @ 0x1404FEDD0 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x1404FEDF0 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x1404FEE70 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x1404FEEF0 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x14050B500 (HalpExtGetAcpiTable.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140B351B8 (KsepMatchInitAcpiOemInfo.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B520BC (CmpInitializeMachineDependentConfiguration.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B62144 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpSetupAcpiPhase0 @ 0x140B62CA8 (HalpSetupAcpiPhase0.c)
 *     HalpInitBootTable @ 0x140B6316C (HalpInitBootTable.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B63268 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140B63318 (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140B633D4 (HalpInitializeConfigurationFromMadt.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140B66E3C (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140B67570 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140B6AA6C (HalpExtInitExtensions.c)
 *     HalpIommuHsaDiscover @ 0x140B6C630 (HalpIommuHsaDiscover.c)
 *     CmpGetAcpiBiosVersion @ 0x140B951E0 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14029C5D0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140B3DDE0 (HalpAcpiTableCacheInit.c)
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
    ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}

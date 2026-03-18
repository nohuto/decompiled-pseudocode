/*
 * XREFs of HalpAcpiGetTable @ 0x140336E50
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x140336E30 (HalAcpiGetTableDispatch.c)
 *     HalpInterruptParseAcpiTables @ 0x14037A3CC (HalpInterruptParseAcpiTables.c)
 *     HalAcpiGetTable @ 0x140394D60 (HalAcpiGetTable.c)
 *     HalMatchAcpiOemId @ 0x140398AA0 (HalMatchAcpiOemId.c)
 *     HalMatchAcpiOemTableId @ 0x1403A0C90 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiFADTBootArch @ 0x1403A2470 (HalMatchAcpiFADTBootArch.c)
 *     HalSocGetAcpiTable @ 0x1403A447C (HalSocGetAcpiTable.c)
 *     HalAcpiGetTableEx @ 0x140500EB0 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x140500ED0 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x140500F50 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x140500FD0 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x14050D5E0 (HalpExtGetAcpiTable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B3A520 (CmpInitializeMachineDependentConfiguration.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140B6504C (KsepMatchInitAcpiOemInfo.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B65A88 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpIommuHsaDiscover @ 0x140B66690 (HalpIommuHsaDiscover.c)
 *     HalpSetupAcpiPhase0 @ 0x140B66918 (HalpSetupAcpiPhase0.c)
 *     HalpInitBootTable @ 0x140B66DDC (HalpInitBootTable.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B66ED8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140B66F88 (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140B67044 (HalpInitializeConfigurationFromMadt.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140B6ACD0 (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140B6B400 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140B6F1A8 (HalpExtInitExtensions.c)
 *     CmpGetAcpiBiosVersion @ 0x140B993F0 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x140336ED0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140B4C428 (HalpAcpiTableCacheInit.c)
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

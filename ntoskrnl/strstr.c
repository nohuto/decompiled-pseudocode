/*
 * XREFs of strstr @ 0x1403D3650
 * Callers:
 *     InbvDetermineFunction @ 0x1403845A8 (InbvDetermineFunction.c)
 *     HalInitializeBios @ 0x14039A4D0 (HalInitializeBios.c)
 *     KiDetermineRetpolineEnablement @ 0x1403ACCB4 (KiDetermineRetpolineEnablement.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403B00F4 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HvlDebuggerSupportInitialize @ 0x1403B0FD4 (HvlDebuggerSupportInitialize.c)
 *     HvlPhase0Initialize @ 0x14080D7C8 (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x140810688 (SepIsOptionPresent.c)
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x140A8CE30 (KiMatchLoadOption.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140B14354 (CcInitializeBcbProfiler.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140B47614 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140B476D0 (BvgaDriverInitialize.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 *     CimfsInitialize @ 0x140B55208 (CimfsInitialize.c)
 *     VhdInitialize @ 0x140B56EA0 (VhdInitialize.c)
 *     HalpSetPlatformFlags @ 0x140B631DC (HalpSetPlatformFlags.c)
 *     KiPerformGroupConfiguration @ 0x140B66804 (KiPerformGroupConfiguration.c)
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
 *     KeInitializeClock @ 0x140B67BE8 (KeInitializeClock.c)
 *     KitpInitAitSampleRate @ 0x140B6EF0C (KitpInitAitSampleRate.c)
 *     MiInitializeBootDefaults @ 0x140B6EF9C (MiInitializeBootDefaults.c)
 *     MiInitializeSystemDefaults @ 0x140B6F454 (MiInitializeSystemDefaults.c)
 *     KiInitializeNxSupportDiscard @ 0x140B6FE18 (KiInitializeNxSupportDiscard.c)
 *     CmpGetBiosVersion @ 0x140B9549C (CmpGetBiosVersion.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char *v3; // r8
  signed __int64 v5; // r9
  const char *v6; // rdx

  v3 = (char *)Str;
  if ( !*SubStr )
    return (char *)Str;
  if ( *Str )
  {
    v5 = Str - SubStr;
    while ( 2 )
    {
      v6 = SubStr;
      do
      {
        if ( !*v6 )
          return v3;
        if ( v6[v5] != *v6 )
          break;
        ++v6;
      }
      while ( v6[v5] );
      if ( !*v6 )
        return v3;
      ++v3;
      ++v5;
      if ( *v3 )
        continue;
      break;
    }
  }
  return 0LL;
}

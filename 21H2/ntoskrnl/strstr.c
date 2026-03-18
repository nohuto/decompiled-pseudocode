/*
 * XREFs of strstr @ 0x1403E0C40
 * Callers:
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403BB9FC (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403D71A4 (InbvDetermineFunction.c)
 *     KiDetermineRetpolineEnablement @ 0x1403DC4D0 (KiDetermineRetpolineEnablement.c)
 *     HvlDebuggerSupportInitialize @ 0x1403DF0F4 (HvlDebuggerSupportInitialize.c)
 *     HvlPhase0Initialize @ 0x140824AA0 (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x140848910 (SepIsOptionPresent.c)
 *     KiMatchLoadOption @ 0x140A55D44 (KiMatchLoadOption.c)
 *     KiInitializeBootStructures @ 0x140A57680 (KiInitializeBootStructures.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140AD6354 (CcInitializeBcbProfiler.c)
 *     HalpSetPlatformFlags @ 0x140AFAB24 (HalpSetPlatformFlags.c)
 *     KiInitializeNxSupportDiscard @ 0x140AFB154 (KiInitializeNxSupportDiscard.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     KiPerformGroupConfiguration @ 0x140B0610C (KiPerformGroupConfiguration.c)
 *     CmpGetBiosVersion @ 0x140B17EC4 (CmpGetBiosVersion.c)
 *     InbvDriverInitialize @ 0x140B25898 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140B25950 (BvgaDriverInitialize.c)
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     ViInitSystemPhase0 @ 0x140B27B30 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140B2DC08 (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140B2DD94 (KitpInitAitSampleRate.c)
 *     MiInitializeSystemDefaults @ 0x140B2E82C (MiInitializeSystemDefaults.c)
 *     VhdInitialize @ 0x140B30860 (VhdInitialize.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
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

/*
 * XREFs of strstr @ 0x1403D19F0
 * Callers:
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403AA1B0 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C8AD8 (InbvDetermineFunction.c)
 *     KiDetermineRetpolineEnablement @ 0x1403CD320 (KiDetermineRetpolineEnablement.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CFD00 (HvlDebuggerSupportInitialize.c)
 *     HvlPhase0Initialize @ 0x140796EFC (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x14079DE6C (SepIsOptionPresent.c)
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1409A2944 (KiMatchLoadOption.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140A1C354 (CcInitializeBcbProfiler.c)
 *     KiInitializeNxSupportDiscard @ 0x140A3B9E4 (KiInitializeNxSupportDiscard.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     KeInitializeClock @ 0x140A4C7CC (KeInitializeClock.c)
 *     KiPerformGroupConfiguration @ 0x140A4EDCC (KiPerformGroupConfiguration.c)
 *     CmpGetBiosVersion @ 0x140A5A7C0 (CmpGetBiosVersion.c)
 *     HalpSetPlatformFlags @ 0x140A66198 (HalpSetPlatformFlags.c)
 *     InbvDriverInitialize @ 0x140A6C590 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A6C640 (BvgaDriverInitialize.c)
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 *     ViInitSystemPhase0 @ 0x140A70AB8 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140A7260C (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140A7279C (KitpInitAitSampleRate.c)
 *     MiInitializeSystemDefaults @ 0x140A72EC8 (MiInitializeSystemDefaults.c)
 *     VhdInitialize @ 0x140A74778 (VhdInitialize.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char *v3; // r8
  char v5; // al
  signed __int64 i; // r9
  const char *v7; // rdx

  v3 = (char *)Str;
  if ( !*SubStr )
    return (char *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = Str - SubStr; ; ++i )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( v7[i] == *v7 )
    {
      ++v7;
      if ( v7[i] )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}

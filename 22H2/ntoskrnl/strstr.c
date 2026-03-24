/*
 * XREFs of strstr @ 0x1403D1180
 * Callers:
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403B05B0 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalInitializeBios @ 0x1403C4710 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C8308 (InbvDetermineFunction.c)
 *     KiDetermineRetpolineEnablement @ 0x1403CCAB0 (KiDetermineRetpolineEnablement.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CF490 (HvlDebuggerSupportInitialize.c)
 *     HvlPhase0Initialize @ 0x140791B8C (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x14079E09C (SepIsOptionPresent.c)
 *     KiInitializeBootStructures @ 0x14099BA20 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1409A1684 (KiMatchLoadOption.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140A1B354 (CcInitializeBcbProfiler.c)
 *     KiInitializeNxSupportDiscard @ 0x140A39E14 (KiInitializeNxSupportDiscard.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 *     KiPerformGroupConfiguration @ 0x140A4DDCC (KiPerformGroupConfiguration.c)
 *     CmpGetBiosVersion @ 0x140A597C0 (CmpGetBiosVersion.c)
 *     HalpSetPlatformFlags @ 0x140A65198 (HalpSetPlatformFlags.c)
 *     InbvDriverInitialize @ 0x140A6B590 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A6B640 (BvgaDriverInitialize.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 *     ViInitSystemPhase0 @ 0x140A6FAB8 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140A7160C (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140A7179C (KitpInitAitSampleRate.c)
 *     MiInitializeSystemDefaults @ 0x140A71EC8 (MiInitializeSystemDefaults.c)
 *     VhdInitialize @ 0x140A73778 (VhdInitialize.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
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

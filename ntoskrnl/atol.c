/*
 * XREFs of atol @ 0x1403D3700
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403B0FD4 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403D36E0 (atoi.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403D3288 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}

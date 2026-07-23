/*
 * XREFs of atol @ 0x1403D1A90
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403CFD00 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403D1A70 (atoi.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403D1640 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}

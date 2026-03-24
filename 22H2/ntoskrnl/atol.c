/*
 * XREFs of atol @ 0x1403D1220
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403CF490 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403D1200 (atoi.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403D0DD0 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}

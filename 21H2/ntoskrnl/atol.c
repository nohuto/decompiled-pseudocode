/*
 * XREFs of atol @ 0x1403D1920
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403CFB90 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403D1900 (atoi.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403D14D0 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}

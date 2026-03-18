/*
 * XREFs of atol @ 0x1403D8C20
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403B5C64 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403D8C00 (atoi.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403D87A8 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}

/*
 * XREFs of atoi @ 0x1403D1A70
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403D1A90 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}

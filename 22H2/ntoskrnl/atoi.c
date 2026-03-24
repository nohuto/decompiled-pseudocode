/*
 * XREFs of atoi @ 0x1403D1200
 * Callers:
 *     KiInitializeBootStructures @ 0x14099BA20 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403D1220 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}

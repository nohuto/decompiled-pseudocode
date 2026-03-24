/*
 * XREFs of atoi @ 0x1403D1900
 * Callers:
 *     KiInitializeBootStructures @ 0x14099C160 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403D1920 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}

/*
 * XREFs of RtlIsServicePackVersionInstalled @ 0x1405AD740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsServicePackVersionInstalled(ULONG Version)
{
  return (Version & 0xFFFF0000) == 0xA000000 && (Version & 0xFF00) == 0;
}

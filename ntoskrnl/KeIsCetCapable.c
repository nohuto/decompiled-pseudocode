/*
 * XREFs of KeIsCetCapable @ 0x1403B12FC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsCetCapable()
{
  return KiCetCapable != 0;
}

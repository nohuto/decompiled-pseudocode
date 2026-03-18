/*
 * XREFs of PopBatteryGetEnergyDrainFromDischage @ 0x140598C90
 * Callers:
 *     PopCalculateCsSummary @ 0x1405913C4 (PopCalculateCsSummary.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1405922E4 (PopDiagTraceCsResiliencyExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopBatteryGetEnergyDrainFromDischage(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (xmmword_140C3D134 & 0x40000000) == 0 && a2 < a1 && a2 )
    return a1 - a2;
  return v2;
}

/*
 * XREFs of PfSnPowerBoostWorker @ 0x14078EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     PfSnPowerBoostUpdate @ 0x1406A1FC4 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection(RunRef);
}

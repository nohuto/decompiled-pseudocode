/*
 * XREFs of RaidUnitRestartQueue @ 0x1C001AC74
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C007479C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0007938 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1, char a2)
{
  RaidRestartIoQueue(a1, a2);
}

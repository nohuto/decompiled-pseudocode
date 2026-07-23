/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1403B5394
 * Callers:
 *     KiExecuteDpc @ 0x1403B5130 (KiExecuteDpc.c)
 *     KiInitMachineDependent @ 0x1403B522C (KiInitMachineDependent.c)
 *     KiDeregisterNmiSxCallback @ 0x1405148A4 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Group = v2 >> 6;
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}

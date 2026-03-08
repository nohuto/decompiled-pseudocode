/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x140396BD0
 * Callers:
 *     KiInitMachineDependent @ 0x140396928 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x140396B20 (KiExecuteDpc.c)
 *     KiDeregisterNmiSxCallback @ 0x14056A694 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Group = v2 >> 6;
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}

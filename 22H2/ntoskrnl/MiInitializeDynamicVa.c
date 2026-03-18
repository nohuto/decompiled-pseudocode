/*
 * XREFs of MiInitializeDynamicVa @ 0x140B700A8
 * Callers:
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootDriverRegions @ 0x140B70118 (MiCountBootDriverRegions.c)
 *     MiAssignSessionRanges @ 0x140B701BC (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C67190.Header.Size = 6;
  qword_140C671A8 = 0LL;
  LOWORD(stru_140C67190.Header.Lock) = 0;
  stru_140C67190.Header.SignalState = 0;
  stru_140C67190.Header.WaitListHead.Blink = &stru_140C67190.Header.WaitListHead;
  stru_140C67190.Header.WaitListHead.Flink = &stru_140C67190.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C6A4A8 = MiCountBootDriverRegions();
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}

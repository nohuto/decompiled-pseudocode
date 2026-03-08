/*
 * XREFs of MiInitializeDynamicVa @ 0x140B6BDEC
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootDriverRegions @ 0x140B6BE5C (MiCountBootDriverRegions.c)
 *     MiAssignSessionRanges @ 0x140B6BF00 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C66D10.Header.Size = 6;
  qword_140C66D28 = 0LL;
  LOWORD(stru_140C66D10.Header.Lock) = 0;
  stru_140C66D10.Header.SignalState = 0;
  stru_140C66D10.Header.WaitListHead.Blink = &stru_140C66D10.Header.WaitListHead;
  stru_140C66D10.Header.WaitListHead.Flink = &stru_140C66D10.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C6A028 = MiCountBootDriverRegions();
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}

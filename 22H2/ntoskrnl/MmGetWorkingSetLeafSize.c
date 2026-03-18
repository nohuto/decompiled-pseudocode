/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x14021DAE0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F04 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetCurrentMultiplexedVm @ 0x14021DB24 (MiGetCurrentMultiplexedVm.c)
 *     MiTranslateWsType @ 0x14021DB64 (MiTranslateWsType.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(int a1)
{
  char *result; // rax

  if ( a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm();
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140C69B00 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 16);
}

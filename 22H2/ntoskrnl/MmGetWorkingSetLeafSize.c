/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x14033B0E0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406BF5C0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x14033B4C0 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x14033B508 (MiGetCurrentMultiplexedVm.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(__int64 a1, __int64 a2)
{
  char *result; // rax

  if ( (_DWORD)a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm(a1, a2);
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140C4F000 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 15);
}

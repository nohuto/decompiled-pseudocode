/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x140299868
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetCurrentMultiplexedVm @ 0x1402998AC (MiGetCurrentMultiplexedVm.c)
 *     MiTranslateWsType @ 0x1402998EC (MiTranslateWsType.c)
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
    result = (char *)&unk_140C69680 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 16);
}

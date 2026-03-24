/*
 * XREFs of EtwpPrepareWmitraceLoggerInfo @ 0x14093CC3C
 * Callers:
 *     EtwWmitraceWorker @ 0x14093C914 (EtwWmitraceWorker.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall EtwpPrepareWmitraceLoggerInfo(_DWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0xB0uLL);
  *a1 = 176;
  a1[11] = 0x20000;
  result = (unsigned __int16)EtwpWmitraceParams;
  if ( !EtwpWmitraceParams )
    result = 0xFFFFLL;
  *((_WORD *)a1 + 4) = result;
  return result;
}

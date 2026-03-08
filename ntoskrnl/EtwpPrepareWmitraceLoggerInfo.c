/*
 * XREFs of EtwpPrepareWmitraceLoggerInfo @ 0x1409E8F24
 * Callers:
 *     EtwWmitraceWorker @ 0x1409E8BFC (EtwWmitraceWorker.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
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

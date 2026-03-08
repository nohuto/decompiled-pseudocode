/*
 * XREFs of PfSnLogIdentifier @ 0x1407E3410
 * Callers:
 *     PfSnBeginScenario @ 0x1407E4764 (PfSnBeginScenario.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x14030841C (PfSnTraceGetLogEntry.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PfSnLogIdentifier(__int64 a1, const void **a2)
{
  int v2; // edi
  unsigned int v4; // edi
  __int64 result; // rax
  _QWORD *v6; // rbx
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)a2;
  v7 = 0LL;
  v4 = (unsigned int)(v2 + 35) >> 4;
  result = PfSnTraceGetLogEntry(a1, v4, &v7);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    memset(v7, 0, 16LL * v4);
    *v6 = (8LL * (v4 - 1)) | 6;
    memmove(v6 + 2, a2[1], *(unsigned __int16 *)a2);
    return 0LL;
  }
  return result;
}

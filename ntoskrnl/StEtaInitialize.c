/*
 * XREFs of StEtaInitialize @ 0x1405C851C
 * Callers:
 *     SmcCacheInitialize @ 0x1409D7DE8 (SmcCacheInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StEtaInitialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}

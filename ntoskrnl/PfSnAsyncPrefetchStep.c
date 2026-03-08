/*
 * XREFs of PfSnAsyncPrefetchStep @ 0x1407E1620
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1407E3C20 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnPrefetchMetadata @ 0x14071E150 (PfSnPrefetchMetadata.c)
 *     PfSnPrefetchSections @ 0x1407E16A0 (PfSnPrefetchSections.c)
 */

__int64 __fastcall PfSnAsyncPrefetchStep(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // esi
  int v5; // edi
  int v6; // r9d
  __int64 result; // rax
  int v8; // r9d

  v3 = (int)a2;
  v5 = a3;
  PfSnPrefetchMetadata(a2, (unsigned int)a3, a3);
  result = PfSnPrefetchSections(v3, 0, v5, v6, *(_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
  {
    result = PfSnPrefetchSections(v3, 1, v5, v8, *(_QWORD *)(a1 + 216));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 232) |= v5;
      return 0LL;
    }
  }
  return result;
}

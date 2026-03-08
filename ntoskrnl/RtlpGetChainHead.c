/*
 * XREFs of RtlpGetChainHead @ 0x1402B84F0
 * Callers:
 *     RtlpPopulateContext @ 0x1402B8294 (RtlpPopulateContext.c)
 *     RtlExpandHashTable @ 0x1402B8330 (RtlExpandHashTable.c)
 *     RtlContractHashTable @ 0x1402CFA70 (RtlContractHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v3; // ecx

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v3, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v3);
    v2 = *(_QWORD *)(v2 + 8LL * (v3 - 7));
  }
  return v2 + 16LL * a2;
}

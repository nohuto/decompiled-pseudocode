/*
 * XREFs of PspDeleteThreadSecurity @ 0x140683984
 * Callers:
 *     PspThreadDelete @ 0x140683580 (PspThreadDelete.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void __fastcall PspDeleteThreadSecurity(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rcx

  if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF8uLL));
    v2 = *(struct _DMA_ADAPTER **)(a1 + 1464);
    if ( v2 )
    {
      HalPutDmaAdapter(v2);
      *(_QWORD *)(a1 + 1464) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), 0xFFFFFFF7);
  }
  *(_QWORD *)(a1 + 1192) = 0LL;
}

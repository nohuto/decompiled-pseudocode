/*
 * XREFs of SepSetTokenSessionById @ 0x140604300
 * Callers:
 *     SepGetAnonymousToken @ 0x14036016C (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     SeSubProcessToken @ 0x140603B5C (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x1406BA010 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x1407BBC44 (SeExchangePrimaryToken.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x140206364 (MmGetSessionObjectById.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // edi
  struct _DMA_ADAPTER *v7; // rcx

  v5 = a2;
  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1160);
        *(_QWORD *)(a1 + 1160) = a4;
      }
      else
      {
        v7 = *(struct _DMA_ADAPTER **)(a1 + 1160);
        if ( v7 )
          HalPutDmaAdapter(v7);
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById(v5, a2);
      }
    }
  }
}

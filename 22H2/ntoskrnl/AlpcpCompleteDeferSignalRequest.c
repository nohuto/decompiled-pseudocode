/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x1405EABDC
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1405EAA60 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     AlpcpSignal @ 0x1402056F0 (AlpcpSignal.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 */

void __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _DMA_ADAPTER *v5; // rcx

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    AlpcpSignal(a1, 0LL, 0LL, a4);
    v5 = *(struct _DMA_ADAPTER **)(a1 + 32);
    if ( v5 )
      HalPutDmaAdapter(v5);
  }
}

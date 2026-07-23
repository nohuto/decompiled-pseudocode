/*
 * XREFs of SeShutdownServerSilo @ 0x14091C324
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140906398 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140243B50 (SepDeReferenceLogonSessionDirect.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14092392C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeShutdownServerSilo(__int64 a1, __int64 a2)
{
  struct _DMA_ADAPTER *v4; // rcx
  struct _DMA_ADAPTER *v5; // rcx
  _QWORD *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = *(struct _DMA_ADAPTER **)(a2 + 16);
  if ( v4 )
  {
    HalPutDmaAdapter(v4);
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  v5 = *(struct _DMA_ADAPTER **)(a2 + 24);
  if ( v5 )
  {
    HalPutDmaAdapter(v5);
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  if ( *(_QWORD *)a2 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)a2);
    *(_QWORD *)a2 = 0LL;
  }
  v6 = *(_QWORD **)(a2 + 8);
  if ( v6 )
  {
    SepDeReferenceLogonSessionDirect(v6);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v7 = *(void **)(a2 + 40);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x63734943u);
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  v8 = *(void **)(a2 + 32);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x63734943u);
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return SepDeleteUnreferencedLogonSessionsInSilo(a1);
}

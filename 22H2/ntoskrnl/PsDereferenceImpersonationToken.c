/*
 * XREFs of PsDereferenceImpersonationToken @ 0x140692740
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    HalPutDmaAdapter((PADAPTER_OBJECT)ImpersonationToken);
}

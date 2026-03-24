/*
 * XREFs of PsDereferenceImpersonationToken @ 0x1406AF790
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    HalPutDmaAdapter((PADAPTER_OBJECT)ImpersonationToken);
}

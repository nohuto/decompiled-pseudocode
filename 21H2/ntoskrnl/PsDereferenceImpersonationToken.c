/*
 * XREFs of PsDereferenceImpersonationToken @ 0x14060E030
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    HalPutDmaAdapter((PADAPTER_OBJECT)ImpersonationToken);
}

/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406B4570
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     LpcpCopyRequestData @ 0x1408C1C4C (LpcpCopyRequestData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)PrimaryToken);
}

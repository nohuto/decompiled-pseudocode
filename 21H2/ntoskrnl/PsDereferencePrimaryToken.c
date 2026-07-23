/*
 * XREFs of PsDereferencePrimaryToken @ 0x140613740
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1406D079C (AlpcpAcceptConnectPort.c)
 *     LpcpCopyRequestData @ 0x1408C1DAC (LpcpCopyRequestData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)PrimaryToken);
}

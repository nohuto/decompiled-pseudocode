/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406DADF0
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x14060E6A0 (DifIoDeleteControllerWrapper.c)
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     LpcpCopyRequestData @ 0x140965C1C (LpcpCopyRequestData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}

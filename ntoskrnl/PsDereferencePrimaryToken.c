/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406EA390
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x1405DC7C0 (DifIoDeleteControllerWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}

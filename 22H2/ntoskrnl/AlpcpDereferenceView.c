/*
 * XREFs of AlpcpDereferenceView @ 0x1408C1BF4
 * Callers:
 *     AlpcpLocateSectionView @ 0x1406DAE8C (AlpcpLocateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1406FFA18 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  AlpcpDereferenceBlobEx(a1, 1);
}

/*
 * XREFs of AcpiPccAcquireSubspaceAsync @ 0x1C0004630
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccAcquireSubspaceCore @ 0x1C0033C0C (AcpiPccAcquireSubspaceCore.c)
 */

__int64 __fastcall AcpiPccAcquireSubspaceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  return AcpiPccAcquireSubspaceCore(a1, a2, a3, 0LL);
}

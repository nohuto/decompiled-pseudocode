/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x1C0004F10
 * Callers:
 *     InitAcpiCpc @ 0x1C0021EB8 (InitAcpiCpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}

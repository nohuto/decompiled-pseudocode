/*
 * XREFs of SymCryptEcpointOnCurve @ 0x1404027B0
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F831C (SymCryptEckeyPerformPublicKeyValidation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointOnCurve(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006978[12 * (*(_DWORD *)(a1 + 4) & 3)])();
}

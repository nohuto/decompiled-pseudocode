/*
 * XREFs of SymCryptEcpointOnCurve @ 0x14040A720
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140400210 (SymCryptEckeyPerformPublicKeyValidation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointOnCurve(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006E08[12 * (*(_DWORD *)(a1 + 4) & 3)])();
}

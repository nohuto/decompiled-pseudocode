/*
 * XREFs of SymCryptModInv @ 0x140401198
 * Callers:
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x140406D14 (SymCryptEcpointTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModInv(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_140006958 + (*a1 & 0x380)))(a1, a2);
}

/*
 * XREFs of SymCryptModInv @ 0x1403F3D38
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1403F98E4 (SymCryptEcpointTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModInv(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_1400064C8 + (*a1 & 0x380)))(a1, a2);
}

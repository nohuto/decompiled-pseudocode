/*
 * XREFs of SymCryptEckeyPerformPublicKeyValidation @ 0x1403F2DFC
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptIntFromModulus @ 0x1403F383C (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x1403F389C (SymCryptIntIsEqualUint32.c)
 *     SymCryptEcpointCreate @ 0x1403F94A0 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x1403F9E14 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsZero @ 0x1403FD1BC (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointOnCurve @ 0x1403FD290 (SymCryptEcpointOnCurve.c)
 *     SymCryptEcpointScalarMul @ 0x1403FD2C0 (SymCryptEcpointScalarMul.c)
 */

__int64 __fastcall SymCryptEckeyPerformPublicKeyValidation(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v9 = (unsigned int)SymCryptSizeofEcpointFromCurve(v4);
  if ( (unsigned int)SymCryptEcpointIsZero(v4, *(_QWORD *)(a1 + 16), a3, a4)
    || *(_DWORD *)(v4 + 4) != 3 && !(unsigned int)SymCryptEcpointOnCurve(v4, *(_QWORD *)(a1 + 16), a3, a4) )
  {
    return 32782LL;
  }
  if ( (a2 & 0x30) != 0x30 || (unsigned int)SymCryptIntIsEqualUint32(*(_QWORD *)(v4 + 656), 1LL) )
    return 0LL;
  v10 = v9;
  v11 = SymCryptEcpointCreate(a3, v9, v4);
  v12 = v10 + a3;
  v13 = a4 - v10;
  v14 = SymCryptIntFromModulus(*(_QWORD *)(v4 + 624));
  result = SymCryptEcpointScalarMul(v4, v14, *(_QWORD *)(a1 + 16), 0, v11, v12, v13);
  if ( !(_DWORD)result )
    return (unsigned int)SymCryptEcpointIsZero(v4, v11, v12, v13) == 0 ? 0x800E : 0;
  return result;
}

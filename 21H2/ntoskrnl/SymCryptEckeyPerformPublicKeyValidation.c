/*
 * XREFs of SymCryptEckeyPerformPublicKeyValidation @ 0x140400210
 * Callers:
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptIntFromModulus @ 0x140400C30 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x140400C90 (SymCryptIntIsEqualUint32.c)
 *     SymCryptEcpointCreate @ 0x1404068E0 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140407254 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsZero @ 0x14040A64C (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointOnCurve @ 0x14040A720 (SymCryptEcpointOnCurve.c)
 *     SymCryptEcpointScalarMul @ 0x14040A750 (SymCryptEcpointScalarMul.c)
 */

__int64 __fastcall SymCryptEckeyPerformPublicKeyValidation(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)SymCryptEcpointIsZero(v4, *(_QWORD *)(a1 + 16))
    || *(_DWORD *)(v4 + 4) != 3 && !(unsigned int)SymCryptEcpointOnCurve(v4, *(_QWORD *)(a1 + 16), a3, a4) )
  {
    return 209715726LL;
  }
  if ( (a2 & 0x30) != 0x30 || (unsigned int)SymCryptIntIsEqualUint32(*(_QWORD *)(v4 + 656), 1LL) )
    return 0LL;
  v9 = (unsigned int)SymCryptSizeofEcpointFromCurve(v4);
  v10 = SymCryptEcpointCreate(a3, v9, v4);
  v11 = SymCryptIntFromModulus(*(_QWORD *)(v4 + 624));
  result = SymCryptEcpointScalarMul(v4, v11, *(_QWORD *)(a1 + 16), 0, v10, v9 + a3, a4 - v9);
  if ( (_DWORD)result )
    return result;
  if ( (unsigned int)SymCryptEcpointIsZero(v4, v10) )
    return 0LL;
  else
    return 209715726LL;
}

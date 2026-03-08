/*
 * XREFs of SymCryptShortWeierstrassAdd @ 0x1403FB6D0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsZero @ 0x1403F3B50 (SymCryptModElementIsZero.c)
 *     SymCryptEcpointCopy @ 0x1403F9464 (SymCryptEcpointCopy.c)
 *     SymCryptEcpointCreate @ 0x1403F94A0 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointMaskedCopy @ 0x1403F96A8 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x1403F9E14 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1403FB890 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1403FBD54 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x1403FC510 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1403FCAC0 (SymCryptShortWeierstrassIsEqual.c)
 */

void *__fastcall SymCryptShortWeierstrassAdd(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  unsigned int v11; // eax
  __int64 v12; // rbp
  _BYTE *v14; // r12
  __int64 v15; // rsi
  _BYTE *v16; // r14
  __int64 v17; // r15

  v7 = (int)a4;
  v8 = (int)a3;
  v9 = (int)a2;
  v11 = SymCryptSizeofEcpointFromCurve(a1);
  v12 = v11;
  if ( (a5 & 1) != 0 )
    return (void *)SymCryptShortWeierstrassAddSideChannelUnsafe(a1, v9, v8, v7, a6, a7);
  v14 = (_BYTE *)SymCryptEcpointCreate(a6, v11, a1);
  v15 = a7 - 2 * v12;
  v16 = (_BYTE *)SymCryptEcpointCreate(v12 + a6, v12, a1);
  v17 = v12 + v12 + a6;
  SymCryptModElementIsZero();
  SymCryptModElementIsZero();
  SymCryptShortWeierstrassIsEqual(a1, v9, (_DWORD)a3, 1, v17, v15);
  SymCryptShortWeierstrassAddDiffNonZero(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)v14, v17, v15);
  SymCryptShortWeierstrassDouble(a1, (_DWORD)a2, (_DWORD)v16, 0, v17, v15);
  SymCryptEcpointMaskedCopy(a1, v16, v14);
  SymCryptEcpointMaskedCopy(a1, a2, v14);
  SymCryptEcpointMaskedCopy(a1, a3, v14);
  return SymCryptEcpointCopy(a1, v14, a4);
}

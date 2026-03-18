/*
 * XREFs of SymCryptShortWeierstrassAdd @ 0x140408B40
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsZero @ 0x140400FB0 (SymCryptModElementIsZero.c)
 *     SymCryptEcpointCopy @ 0x1404068A4 (SymCryptEcpointCopy.c)
 *     SymCryptEcpointCreate @ 0x1404068E0 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointMaskedCopy @ 0x140406AD8 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140407254 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140408D00 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404091C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140409980 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140409F50 (SymCryptShortWeierstrassIsEqual.c)
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
  int v7; // ebx
  unsigned int v10; // eax
  _BYTE *v11; // r12
  __int64 v12; // r15
  unsigned int v13; // eax
  _BYTE *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi

  v7 = (int)a2;
  if ( (a5 & 1) != 0 )
    return (void *)SymCryptShortWeierstrassAddSideChannelUnsafe(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a6, a7);
  v10 = SymCryptSizeofEcpointFromCurve(a1);
  v11 = (_BYTE *)SymCryptEcpointCreate(a6, v10, a1);
  v12 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + a6;
  v13 = SymCryptSizeofEcpointFromCurve(a1);
  v14 = (_BYTE *)SymCryptEcpointCreate(v12, v13, a1);
  v15 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + v12;
  v16 = a7 - 2 * (unsigned int)SymCryptSizeofEcpointFromCurve(a1);
  SymCryptModElementIsZero();
  SymCryptModElementIsZero();
  SymCryptShortWeierstrassIsEqual(a1, v7, (_DWORD)a3, 1, v15, v16);
  SymCryptShortWeierstrassAddDiffNonZero(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)v11, v15, v16);
  SymCryptShortWeierstrassDouble(a1, (_DWORD)a2, (_DWORD)v14, 0, v15, v16);
  SymCryptEcpointMaskedCopy(a1, v14, v11);
  SymCryptEcpointMaskedCopy(a1, a2, v11);
  SymCryptEcpointMaskedCopy(a1, a3, v11);
  return SymCryptEcpointCopy(a1, v11, a4);
}

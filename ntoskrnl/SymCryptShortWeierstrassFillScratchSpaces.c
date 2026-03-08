/*
 * XREFs of SymCryptShortWeierstrassFillScratchSpaces @ 0x1403FC95C
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F2C94 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptDigitsFromBits @ 0x1403F36C0 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointEx @ 0x1403F9DF8 (SymCryptSizeofEcpointEx.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x1403F9E14 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptShortWeierstrassFillScratchSpaces(_DWORD *a1)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 result; // rax
  unsigned int v16; // r8d

  SymCryptDigitsFromBits();
  v2 = SymCryptSizeofEcpointFromCurve((__int64)a1);
  v3 = (a1[7] << 8) + 64;
  v4 = 2 * (v2 + 32 + 4 * (a1[9] + 32 * a1[4]));
  a1[11] = v4;
  v5 = SymCryptSizeofIntFromDigits();
  v6 = v5 + SymCryptSizeofEcpointFromCurve((__int64)a1);
  if ( v4 <= v3 )
    v4 = v3;
  a1[12] = a1[9] + v4 + 2 * v6;
  a1[13] = a1[23] * SymCryptSizeofEcpointFromCurve((__int64)a1) + ((8 * a1[24] + 31) & 0xFFFFFFE0);
  v7 = (unsigned int)(a1[4] << 8);
  v8 = (unsigned int)(a1[4] << 6) + 64LL;
  v9 = (unsigned int)(v7 + 64);
  v10 = v8 + v9 + 2 * v8 + v7;
  v11 = SymCryptSizeofEcpointEx(a1[9], 4);
  if ( v9 <= v10 )
    LODWORD(v9) = v10;
  v12 = v9 + v11 + 2 * a1[9];
  a1[14] = v12;
  v13 = v12;
  if ( v12 <= (unsigned int)SymCryptSizeofIntFromDigits() )
    v13 = SymCryptSizeofIntFromDigits();
  a1[14] = v13;
  SymCryptEcurveDigitsofScalarMultiplier((__int64)a1);
  v14 = a1[9] + SymCryptSizeofIntFromDigits();
  if ( v14 <= (unsigned int)SymCryptSizeofEcpointFromCurve((__int64)a1) )
  {
    result = SymCryptSizeofEcpointFromCurve((__int64)a1);
  }
  else
  {
    SymCryptEcurveDigitsofScalarMultiplier((__int64)a1);
    result = a1[9] + (unsigned int)SymCryptSizeofIntFromDigits();
  }
  v16 = a1[12] + a1[13];
  if ( v16 <= a1[14] )
    v16 = a1[14];
  a1[15] = result + v16;
  return result;
}

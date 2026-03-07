__int64 __fastcall SymCryptTwistedEdwardsFillScratchSpaces(_DWORD *a1)
{
  int v2; // eax
  int v3; // r15d
  int v4; // ebp
  int v5; // edi
  int v6; // r14d
  int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // rsi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 result; // rax
  unsigned int v16; // r8d

  v2 = SymCryptDigitsFromBits();
  v3 = a1[9];
  v4 = a1[4];
  v5 = a1[7] << 8;
  v6 = 8 * (v3 + 32 * v2);
  a1[11] = v6 + 64;
  v7 = SymCryptSizeofIntFromDigits();
  v8 = v7 + SymCryptSizeofEcpointFromCurve((__int64)a1);
  if ( v6 + 64 <= (unsigned int)(v5 + 64) )
    v6 = v5;
  a1[12] = a1[9] + 64 + v6 + 2 * v8;
  a1[13] = a1[23] * SymCryptSizeofEcpointFromCurve((__int64)a1) + ((8 * a1[24] + 31) & 0xFFFFFFE0);
  v9 = (unsigned int)((v4 << 8) + 64);
  v10 = SymCryptSizeofEcpointEx(v3, 4);
  v11 = 704 * v4 + 256;
  if ( v9 > v9 + (unsigned int)(v4 << 6) + 64LL + 2 * ((unsigned int)(v4 << 6) + 64LL) + (unsigned int)(v4 << 8) )
    v11 = v9;
  v12 = v11 + v10 + 2 * v3;
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

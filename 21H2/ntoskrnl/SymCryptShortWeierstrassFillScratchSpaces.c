/*
 * XREFs of SymCryptShortWeierstrassFillScratchSpaces @ 0x140409DC8
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1404000A8 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptDigitsFromBits @ 0x140400AB4 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointEx @ 0x14040721C (SymCryptSizeofEcpointEx.c)
 */

__int64 __fastcall SymCryptShortWeierstrassFillScratchSpaces(_DWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // edi
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // edi
  unsigned int v20; // ebx
  __int64 result; // rax
  unsigned int v22; // r8d

  SymCryptDigitsFromBits();
  v2 = a1[9];
  v3 = SymCryptSizeofEcpointEx(v2, a1[2] & 0xF);
  v4 = a1[2] & 0xF;
  v5 = (a1[7] << 8) + 64;
  v6 = 2 * (v3 + 4 * (v2 + 32 * a1[4] + 8));
  a1[11] = v6;
  v7 = SymCryptSizeofEcpointEx(v2, v4);
  v8 = SymCryptSizeofIntFromDigits();
  v9 = a1[9];
  v10 = a1[2];
  v11 = 2 * (v7 + v8);
  if ( v6 <= v5 )
    v6 = v5;
  a1[12] = v11 + v9 + v6;
  v12 = SymCryptSizeofEcpointEx(v9, v10 & 0xF) * a1[23] + ((8 * a1[24] + 31) & 0xFFFFFFE0);
  v13 = a1[4];
  a1[13] = v12;
  v14 = (unsigned int)(v13 << 8);
  v15 = (unsigned int)(v14 + 64);
  v16 = (unsigned int)(v13 << 6) + 64LL + v15 + 2 * ((unsigned int)(v13 << 6) + 64LL) + v14;
  v17 = SymCryptSizeofEcpointEx(a1[9], 4u);
  if ( v15 <= v16 )
    LODWORD(v15) = v16;
  v18 = v15 + v17 + 2 * a1[9];
  a1[14] = v18;
  if ( v18 <= (unsigned int)SymCryptSizeofIntFromDigits() )
    v18 = SymCryptSizeofIntFromDigits();
  v19 = a1[9];
  a1[14] = v18;
  SymCryptEcurveDigitsofScalarMultiplier((__int64)a1);
  v20 = v19 + SymCryptSizeofIntFromDigits();
  if ( v20 <= (unsigned int)SymCryptSizeofEcpointEx(v19, a1[2] & 0xF) )
  {
    result = SymCryptSizeofEcpointEx(a1[9], a1[2] & 0xF);
  }
  else
  {
    SymCryptEcurveDigitsofScalarMultiplier((__int64)a1);
    result = a1[9] + (unsigned int)SymCryptSizeofIntFromDigits();
  }
  v22 = a1[12] + a1[13];
  if ( v22 <= a1[14] )
    v22 = a1[14];
  a1[15] = result + v22;
  return result;
}

__int64 __fastcall SymCryptMontgomeryFillScratchSpaces(__int64 a1)
{
  int v2; // r15d
  int v3; // r13d
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // ebx
  int v9; // r12d
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // rsi
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ebx
  unsigned int v17; // ebx
  __int64 result; // rax
  unsigned int v19; // edx

  v2 = SymCryptDigitsFromBits();
  v3 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 616));
  v4 = (unsigned int)((v2 << 8) + 64);
  v5 = (unsigned int)(v2 << 6) + 64LL + v4 + 2 * ((unsigned int)(v2 << 6) + 64LL) + (unsigned int)(v2 << 8);
  v6 = (unsigned int)SymCryptSizeofIntFromDigits();
  v7 = v5;
  if ( v4 > v5 )
    v7 = (unsigned int)((v2 << 8) + 64);
  if ( v6 <= v7 )
  {
    v8 = 704 * v2 + 256;
    if ( v4 > v5 )
      v8 = v4;
  }
  else
  {
    v8 = SymCryptSizeofIntFromDigits();
  }
  v9 = *(_DWORD *)(a1 + 36);
  v10 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 44) = v8;
  v11 = SymCryptSizeofIntFromDigits();
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 48) = v8 + v11 + 6 * v3;
  v12 = (unsigned int)((v10 << 8) + 64);
  v13 = SymCryptSizeofEcpointEx(v9, 4);
  v14 = 704 * v10 + 256;
  if ( v12 > v12 + (unsigned int)(v10 << 6) + 64LL + 2 * ((unsigned int)(v10 << 6) + 64LL) + (unsigned int)(v10 << 8) )
    v14 = v12;
  v15 = v14 + v13 + 2 * v9;
  *(_DWORD *)(a1 + 56) = v15;
  v16 = v15;
  if ( v15 <= (unsigned int)SymCryptSizeofIntFromDigits() )
    v16 = SymCryptSizeofIntFromDigits();
  *(_DWORD *)(a1 + 56) = v16;
  SymCryptEcurveDigitsofScalarMultiplier(a1);
  v17 = v9 + SymCryptSizeofIntFromDigits();
  if ( v17 <= (unsigned int)SymCryptSizeofEcpointFromCurve(a1) )
  {
    result = SymCryptSizeofEcpointFromCurve(a1);
  }
  else
  {
    SymCryptEcurveDigitsofScalarMultiplier(a1);
    result = v9 + (unsigned int)SymCryptSizeofIntFromDigits();
  }
  v19 = *(_DWORD *)(a1 + 48);
  if ( v19 <= *(_DWORD *)(a1 + 56) )
    v19 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 60) = result + v19;
  return result;
}

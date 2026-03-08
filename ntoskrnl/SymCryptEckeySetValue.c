/*
 * XREFs of SymCryptEckeySetValue @ 0x1403F2F18
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A74544 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F2C94 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1403F2CDC (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptFdefIntGetValueLsbits32 @ 0x1403F2CE8 (SymCryptFdefIntGetValueLsbits32.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F2DFC (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptDivisorFromModulus @ 0x1403F36F0 (SymCryptDivisorFromModulus.c)
 *     SymCryptIntCopy @ 0x1403F3798 (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x1403F37C8 (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x1403F37E0 (SymCryptIntDivMod.c)
 *     SymCryptIntDivPow2 @ 0x1403F380C (SymCryptIntDivPow2.c)
 *     SymCryptIntFromModulus @ 0x1403F383C (SymCryptIntFromModulus.c)
 *     SymCryptIntGetBits @ 0x1403F386C (SymCryptIntGetBits.c)
 *     SymCryptIntIsEqualUint32 @ 0x1403F389C (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x1403F38B4 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x1403F391C (SymCryptIntSetValue.c)
 *     SymCryptIntToModElement @ 0x1403F39F0 (SymCryptIntToModElement.c)
 *     SymCryptModDivPow2 @ 0x1403F3A90 (SymCryptModDivPow2.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x1403F3C7C (SymCryptModElementToInt.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreate @ 0x1403F94A0 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointSetValue @ 0x1403F96E0 (SymCryptEcpointSetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x1403F9E14 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsEqual @ 0x1403FD178 (SymCryptEcpointIsEqual.c)
 *     SymCryptEcpointScalarMul @ 0x1403FD2C0 (SymCryptEcpointScalarMul.c)
 *     SymCryptCallbackAlloc @ 0x14067B400 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x14067B438 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeySetValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v12; // rsi
  int v13; // r13d
  unsigned int v14; // ebx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int v28; // ecx
  __int64 v29; // rdi
  __int64 v30; // [rsp+20h] [rbp-98h]
  unsigned int v31; // [rsp+50h] [rbp-68h]
  unsigned int v32; // [rsp+50h] [rbp-68h]
  unsigned int v33; // [rsp+58h] [rbp-60h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  int v35; // [rsp+68h] [rbp-50h]
  int v36; // [rsp+68h] [rbp-50h]
  int v40; // [rsp+D8h] [rbp+20h]
  unsigned int v41; // [rsp+F8h] [rbp+40h]

  v40 = a4;
  v9 = a4;
  v10 = a3;
  v12 = *(_QWORD *)(a8 + 8);
  v31 = *(_DWORD *)(v12 + 36);
  v33 = SymCryptEcurveDigitsofScalarMultiplier(v12);
  if ( (a7 & 0x7FFFFF8F) != 0 )
    return 32782;
  v13 = a7 & 0x30;
  if ( a2 )
  {
    if ( a2 != (unsigned int)SymCryptFdefIntGetValueLsbits32(*(_QWORD *)(a8 + 8)) )
      return 32782;
    if ( !v9 )
    {
LABEL_9:
      v41 = *(_DWORD *)(v12 + 60);
      v16 = v41;
      v18 = SymCryptCallbackAlloc(v41);
      if ( !v18 )
        return 32783;
      if ( a1 )
      {
        v19 = (unsigned int)SymCryptSizeofIntFromDigits(v33, v17);
        v20 = SymCryptIntCreate(v18, v19, v33);
        v34 = v31 + v19 + v18;
        v35 = SymCryptModElementCreate(v19 + v18, v31, *(_QWORD *)(v12 + 624));
        v32 = v41 - v31 - v19;
        v14 = SymCryptIntSetValue(a1, a2, a5, v20);
        if ( v14 )
          goto LABEL_47;
        if ( v13 != 16 )
        {
          if ( ((v13 - 32) & 0xFFFFFFEF) == 0 && *(_DWORD *)(v12 + 68) == 1 )
          {
            v21 = SymCryptIntFromModulus(*(_QWORD *)(v12 + 624));
            if ( !(unsigned int)SymCryptIntIsLessThan(v20, v21) )
              goto LABEL_17;
          }
          if ( *(_DWORD *)(v12 + 64) && *(_DWORD *)(v12 + 68) == 3 && (unsigned int)SymCryptIntGetBits(v20, 0LL)
            || *(_DWORD *)(v12 + 72)
            && (unsigned int)SymCryptIntGetBits(v20, *(unsigned int *)(v12 + 76)) != *(_DWORD *)(v12 + 80) )
          {
            goto LABEL_17;
          }
        }
        v22 = *(_DWORD *)(v12 + 64);
        if ( v22 )
        {
          if ( *(_DWORD *)(v12 + 68) == 3 )
            SymCryptIntDivPow2(v20, v22, v20);
          v23 = v34;
          if ( *(_DWORD *)(v12 + 68) == 1 )
          {
            SymCryptIntToModElement(v20, *(_QWORD *)(v12 + 624), v35, v34, v32);
            SymCryptModDivPow2(*(_QWORD *)(v12 + 624), v35, *(_DWORD *)(v12 + 64), v35, v34, v32);
            SymCryptModElementToInt(*(_QWORD *)(v12 + 624), v35, v20, v34, v32);
          }
        }
        else
        {
          v23 = v34;
        }
        v24 = SymCryptDivisorFromModulus(*(_QWORD *)(v12 + 624));
        SymCryptIntDivMod(v20, v24, 0, v20, v23, v32);
        if ( v13 != 16 )
        {
          if ( (unsigned int)SymCryptIntIsEqualUint32(v20, 0LL) )
          {
LABEL_17:
            v14 = 32782;
            goto LABEL_47;
          }
        }
        SymCryptIntCopy(v20, *(_QWORD *)(a8 + 24));
        v16 = v41;
        LODWORD(v9) = v40;
        v10 = a3;
        *(_BYTE *)a8 = 1;
      }
      if ( v10 )
      {
        LODWORD(v30) = a6;
        v14 = SymCryptEcpointSetValue(v12, v10, v9, a5, v30, *(_QWORD *)(a8 + 16), 1, v18, v16);
        if ( v14 )
          goto LABEL_47;
        if ( v13 != 16 )
        {
          v14 = SymCryptEckeyPerformPublicKeyValidation(a8, a7, v18, v41);
          if ( v14 )
            goto LABEL_47;
        }
        if ( (a7 & 0x40) == 0 || !a1 )
          goto LABEL_47;
      }
      v25 = v18;
      v26 = *(_QWORD *)(a8 + 16);
      v36 = v26;
      if ( a3 )
      {
        v27 = (unsigned int)SymCryptSizeofEcpointFromCurve(v12);
        v26 = SymCryptEcpointCreate(v18, v27, v12);
        v25 = v27 + v18;
        v28 = v41 - v27;
        v36 = v26;
      }
      else
      {
        v28 = v41;
      }
      v29 = v28;
      v14 = SymCryptEcpointScalarMul(v12, *(_QWORD *)(a8 + 24), 0, 32, v26, v25, v28);
      if ( v14 )
        goto LABEL_47;
      if ( !a3 )
      {
        if ( v13 != 16 )
          v14 = SymCryptEckeyPerformPublicKeyValidation(a8, a7, v18, v41);
        goto LABEL_47;
      }
      if ( !(unsigned int)SymCryptEcpointIsEqual(v12, v36, *(_QWORD *)(a8 + 16), 0, v25, v29) )
        goto LABEL_17;
LABEL_47:
      SymCryptWipe(v18, v41);
      SymCryptCallbackFree(v18);
      return v14;
    }
LABEL_8:
    if ( v9 != *((_DWORD *)SymCryptEcpointFormatNumberofElements + a6)
             * (unsigned int)SymCryptEcurveSizeofFieldElement(*(_QWORD *)(a8 + 8)) )
      return 32782;
    goto LABEL_9;
  }
  if ( v9 )
    goto LABEL_8;
  return 32782;
}

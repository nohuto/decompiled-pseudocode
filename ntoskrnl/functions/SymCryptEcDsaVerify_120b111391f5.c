__int64 __fastcall SymCryptEcDsaVerify(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned int v10; // r15d
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // r10d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // r15
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // r12
  unsigned int v30; // ebx
  int IsEqual; // eax
  unsigned __int64 v33; // [rsp+50h] [rbp-B8h]
  unsigned int v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  unsigned int v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  unsigned int v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int128 v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+88h] [rbp-80h]
  __int128 v43; // [rsp+98h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-60h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0LL;
  v9 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  if ( (a7 & 0xFFFFFFF7) == 0 )
  {
    v10 = *(_DWORD *)(v7 + 16);
    if ( v10 <= *(_DWORD *)(v7 + 28) )
      v10 = *(_DWORD *)(v7 + 28);
    if ( v10 <= (unsigned int)SymCryptDigitsFromBits() )
      SymCryptDigitsFromBits();
    SymCryptEcurveDigitsofScalarMultiplier(v7);
    v11 = (unsigned int)SymCryptSizeofIntFromDigits();
    v38 = SymCryptSizeofIntFromDigits();
    v34 = SymCryptSizeofEcpointFromCurve(v7);
    v36 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(v7 + 624));
    v12 = SymCryptEcurveSizeofFieldElement(v7);
    v13 = *(_DWORD *)(v7 + 28);
    v14 = *(unsigned int *)(v7 + 44);
    v15 = (unsigned int)(*(_DWORD *)(v7 + 48) + 2 * *(_DWORD *)(v7 + 52));
    v40 = v12;
    v16 = (unsigned int)((v13 << 8) + 64);
    if ( v15 <= v16 )
      v15 = (unsigned int)v16;
    v17 = (unsigned int)((*(_DWORD *)(v7 + 16) << 8) + 64);
    if ( v15 > v17 )
      v17 = (unsigned int)v15;
    v18 = (unsigned int)v11;
    v19 = v16 + (unsigned int)(v13 << 6) + 64LL + 2 * ((unsigned int)(v13 << 6) + 64LL) + (unsigned int)(v13 << 8);
    if ( v17 > v19 )
      v19 = v17;
    if ( v19 <= *(unsigned int *)(v7 + 56) )
      v19 = *(unsigned int *)(v7 + 56);
    if ( v19 > v14 )
      v14 = v19;
    v20 = v14 + v12 + 4 * v36 + v11 + 2 * v34 + 2 * v38;
    v33 = v20;
    v21 = SymCryptCallbackAlloc(v20);
    v8 = v21;
    if ( v21 )
    {
      v22 = v14 + v21;
      v23 = SymCryptIntCreate();
      *(_QWORD *)&v41 = SymCryptIntCreate();
      v24 = v38 + v38 + v18 + v22;
      *((_QWORD *)&v41 + 1) = SymCryptIntCreate();
      v25 = SymCryptEcpointCreate(v24, v34, v7);
      v26 = v34 + v24;
      v42 = v25;
      SymCryptEcpointCreate(v26, v34, v7);
      v27 = v36;
      v28 = v36 + v34 + v26;
      v37 = SymCryptModElementCreate();
      v39 = SymCryptModElementCreate();
      v29 = SymCryptModElementCreate();
      v35 = SymCryptModElementCreate();
      if ( (unsigned int)SymCryptIntSetValue() )
        goto LABEL_32;
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        goto LABEL_32;
      SymCryptIntToModElement(v23, *(_QWORD *)(v7 + 624), v39, v8, v14);
      if ( (unsigned int)SymCryptModElementIsZero() )
        goto LABEL_32;
      if ( (unsigned int)SymCryptIntSetValue() )
        goto LABEL_32;
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        goto LABEL_32;
      SymCryptIntToModElement(v23, *(_QWORD *)(v7 + 624), v29, v8, v14);
      if ( (unsigned int)SymCryptModElementIsZero()
        || (unsigned int)SymCryptModInv(*(_DWORD **)(v7 + 624), v29)
        || (unsigned int)SymCryptEcDsaTruncateHash(v7, a2, a3, a7, v37, v23, v8, v14)
        || (SymCryptModMul(*(_DWORD **)(v7 + 624), v37),
            SymCryptModMul(*(_DWORD **)(v7 + 624), v39),
            SymCryptModElementToInt(*(_DWORD **)(v7 + 624), v37, v41, v8, v14),
            SymCryptModElementToInt(*(_DWORD **)(v7 + 624), v35, SDWORD2(v41), v8, v14),
            *((_QWORD *)&v44 + 1) = *(_QWORD *)(a1 + 16),
            v43 = v41,
            (unsigned int)SymCryptEcpointMultiScalarMul(v7, (unsigned int)&v43, (unsigned int)&v44, 2, 1, v42, v8, v14))
        || (unsigned int)SymCryptEcpointIsZero(v7, v42, v8, v14)
        || (unsigned int)SymCryptEcpointGetValue(v7, v42, 2, 1, v27 + v27 + v27 + v28, v40, 1, v8, v14)
        || (v30 = SymCryptIntSetValue()) != 0 )
      {
LABEL_32:
        v9 = v33;
      }
      else
      {
        SymCryptIntToModElement(v23, *(_QWORD *)(v7 + 624), v35, v8, v14);
        IsEqual = SymCryptModElementIsEqual();
        v9 = v33;
        if ( IsEqual )
        {
LABEL_34:
          SymCryptWipe(v8, v9);
          SymCryptCallbackFree(v8);
          return v30;
        }
      }
    }
    else
    {
      v9 = v20;
    }
  }
  v30 = 32784;
  if ( v8 )
    goto LABEL_34;
  return v30;
}

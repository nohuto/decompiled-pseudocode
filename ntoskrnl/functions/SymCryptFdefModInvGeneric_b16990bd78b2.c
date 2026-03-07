__int64 __fastcall SymCryptFdefModInvGeneric(
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v8; // rdi
  unsigned int *v9; // r15
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned __int8 ValueLsbits32; // di
  BOOL v17; // edi
  int v18; // ebx
  __int64 v19; // rbx
  unsigned int *v20; // rdi
  __int64 v21; // rax
  unsigned int *v22; // rax
  void *v24; // [rsp+30h] [rbp-78h]
  __int64 v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  unsigned int *v27; // [rsp+50h] [rbp-58h]
  int v28; // [rsp+B0h] [rbp+8h]
  int v32; // [rsp+C8h] [rbp+20h]

  v6 = 0;
  if ( (*(_BYTE *)(a1 + 12) & 9) != 9 )
    return 32782;
  v8 = (unsigned int)SymCryptSizeofModElementFromModulus(a1);
  v26 = SymCryptModElementCreate();
  v24 = (void *)SymCryptModElementCreate();
  v9 = (unsigned int *)SymCryptModElementCreate();
  v10 = a6 - (unsigned int)(4 * v8);
  v27 = (unsigned int *)SymCryptModElementCreate();
  v11 = v8 + v8 + v8 + v8 + a5;
  v12 = (unsigned int)SymCryptSizeofIntFromDigits();
  v13 = SymCryptIntCreate();
  v25 = SymCryptIntCreate();
  SymCryptIntCreate();
  v14 = v10 - (unsigned int)(3 * v12);
  v15 = v12 + v12 + v12 + v11;
  v32 = a4 & 1;
  if ( !v32 )
    SymCryptFdefModSetRandomGeneric(a1, v26, 6, v15, v14);
  if ( a2 != v24 )
    memmove(v24, a2, *(unsigned int *)(a1 + 16));
  SymCryptFdefModElementToIntGeneric(a1, v24, v13);
  SymCryptIntFromModulus();
  SymCryptIntCopy();
  ValueLsbits32 = SymCryptIntGetValueLsbits32(v25);
  v17 = (((unsigned __int8)SymCryptIntGetValueLsbits32(v13) | ValueLsbits32) & 1) == 0;
  v18 = v17 | SymCryptIntIsEqualUint32();
  if ( v18 | (unsigned int)SymCryptIntIsEqualUint32() )
  {
    return 32782;
  }
  else
  {
    v19 = v25;
    if ( (unsigned int)SymCryptIntIsEqualUint32() )
    {
      SymCryptModElementCopy();
    }
    else
    {
      SymCryptFdefModElementSetValueUint32Generic(1u, (_DWORD *)a1, v9);
      v20 = v27;
      SymCryptFdefModElementSetValueUint32Generic(0, (_DWORD *)a1, v27);
      while ( 1 )
      {
        while ( (SymCryptIntGetValueLsbits32(v13) & 1) == 0 )
        {
          SymCryptIntDivPow2();
          SymCryptModDivPow2(a1, (__int64)v9);
        }
        if ( (unsigned int)SymCryptIntIsEqualUint32() )
          break;
        v28 = SymCryptIntSubSameSize();
        if ( (unsigned int)SymCryptIntIsEqualUint32() )
          return 32782;
        if ( v28 )
        {
          SymCryptIntNeg();
          LODWORD(v22) = (_DWORD)v9;
        }
        else
        {
          SymCryptIntCopy();
          v21 = v19;
          v19 = v13;
          v13 = v21;
          v22 = v20;
          v20 = v9;
          v9 = v22;
        }
        SymCryptFdefModSubGeneric(a1, (_DWORD)v22, (_DWORD)v20, (_DWORD)v22, v15, v14);
      }
      SymCryptFdefModMulGeneric(a1, v9, v24, v20, v15, v14);
      if ( v32 )
      {
        if ( v9 != a3 )
          memmove(a3, v9, *(unsigned int *)(a1 + 16));
      }
      else
      {
        SymCryptFdefModMulGeneric(a1, v9, v26, a3, v15, v14);
      }
    }
  }
  return v6;
}

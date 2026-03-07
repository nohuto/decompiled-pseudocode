__int64 __fastcall SymCryptRsakeyCalculatePrivateFields(
        __int64 a1,
        __int64 a2,
        struct _KSEMAPHORE *a3,
        __int64 a4,
        __int64 a5,
        struct _KSEMAPHORE *a6)
{
  struct _KSEMAPHORE *v9; // rbp
  unsigned int v10; // eax
  unsigned int Inverses; // esi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 i; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 j; // rbx
  __int64 v25; // [rsp+58h] [rbp-100h]
  char v26; // [rsp+7Fh] [rbp-D9h] BYREF

  v9 = (struct _KSEMAPHORE *)SymCryptIntFromDivisor(a2);
  v10 = SymCryptDigitsFromBits(64LL);
  v25 = SymCryptIntCreate((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFE0uLL, 128LL, v10);
  Inverses = SymCryptCrtGenerateInverses(*(_DWORD *)(a1 + 24), (int)a1 + 120, 0, (int)a1 + 136, a5, a6);
  if ( !Inverses )
  {
    SymCryptIntSetValueUint32(1LL, a3);
    v12 = 0LL;
    if ( *(_DWORD *)(a1 + 24) )
    {
      while ( 1 )
      {
        v13 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 8 * v12 + 120));
        Inverses = SymCryptIntCopyMixedSize(v13, v9);
        if ( Inverses )
          break;
        SymCryptIntSubUint32(v9, 1LL, v9);
        SymCryptIntMulMixedSize((_DWORD)v9, (_DWORD)a3, a4, a5, (__int64)a6);
        Inverses = SymCryptIntCopyMixedSize(a4, a3);
        if ( Inverses )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 24) )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v14 = 0LL;
      if ( *(_DWORD *)(a1 + 20) )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(a1 + 8 * v14 + 48);
          if ( v15 == 1 )
            return 32782;
          if ( (v15 & 1) == 0 )
            return 32782;
          SymCryptIntSetValueUint64(v15, v9);
          SymCryptIntExtendedGcd(a3, v9, 0LL, 0LL, *(_QWORD *)(a1 + 8 * v14 + 152), a5, (__int64)a6);
          if ( !(unsigned int)SymCryptIntIsEqualUint32(v25, 1LL) )
            return 32782;
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 20) )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
        {
          v17 = SymCryptIntFromDivisor(a2);
          v18 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 8 * i + 120));
          Inverses = SymCryptIntCopyMixedSize(v18, v17);
          if ( Inverses )
            break;
          v19 = SymCryptIntFromDivisor(a2);
          v20 = SymCryptIntFromDivisor(a2);
          SymCryptIntSubUint32(v20, 1LL, v19);
          v21 = SymCryptIntFromDivisor(a2);
          SymCryptIntToDivisor(v21, a2, *(_DWORD *)(a1 + 20), 0, a5, (__int64)a6);
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 20); j = (unsigned int)(j + 1) )
          {
            SymCryptIntDivMod(*(_QWORD *)(a1 + 8 * j + 152), a2, 0, (_DWORD)a3, a5, (__int64)a6);
            Inverses = SymCryptIntCopyMixedSize(
                         a3,
                         *(_QWORD *)(a1 + 8LL * (unsigned int)(i + *(_DWORD *)(a1 + 24) * j) + 160));
            if ( Inverses )
              return Inverses;
          }
        }
      }
    }
  }
  return Inverses;
}

/*
 * XREFs of SymCryptRsakeyCalculatePrivateFields @ 0x1403FEE6C
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403FF3BC (SymCryptRsakeySetValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SymCryptDigitsFromBits @ 0x140400AB4 (SymCryptDigitsFromBits.c)
 *     SymCryptIntCopyMixedSize @ 0x140400BA4 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x140400BD4 (SymCryptIntDivMod.c)
 *     SymCryptIntFromDivisor @ 0x140400C18 (SymCryptIntFromDivisor.c)
 *     SymCryptIntFromModulus @ 0x140400C30 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x140400C90 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntMulMixedSize @ 0x140400CD8 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntSetValueUint32 @ 0x140400D28 (SymCryptIntSetValueUint32.c)
 *     SymCryptIntSetValueUint64 @ 0x140400D40 (SymCryptIntSetValueUint64.c)
 *     SymCryptIntSubUint32 @ 0x140400DA0 (SymCryptIntSubUint32.c)
 *     SymCryptIntToDivisor @ 0x140400DB8 (SymCryptIntToDivisor.c)
 *     SymCryptCrtGenerateInverses @ 0x1404055A0 (SymCryptCrtGenerateInverses.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 */

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
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 i; // rbx
  __int64 v26; // [rsp+58h] [rbp-100h]
  char v27; // [rsp+7Fh] [rbp-D9h] BYREF

  v9 = (struct _KSEMAPHORE *)SymCryptIntFromDivisor(a2);
  v10 = SymCryptDigitsFromBits(64LL);
  v26 = SymCryptIntCreate((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFE0uLL, 128LL, v10);
  Inverses = SymCryptCrtGenerateInverses(*(_DWORD *)(a1 + 24), (int)a1 + 120, 0, (int)a1 + 136, a5, a6);
  if ( !Inverses )
  {
    SymCryptIntSetValueUint32(1LL, a3);
    v12 = *(_DWORD *)(a1 + 24);
    v13 = 0LL;
    if ( v12 )
    {
      while ( 1 )
      {
        v14 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 8 * v13 + 120));
        Inverses = SymCryptIntCopyMixedSize(v14, v9);
        if ( Inverses )
          break;
        SymCryptIntSubUint32(v9, 1LL, v9);
        SymCryptIntMulMixedSize((_DWORD)v9, (_DWORD)a3, a4, a5, (__int64)a6);
        Inverses = SymCryptIntCopyMixedSize(a4, a3);
        if ( Inverses )
          break;
        v12 = *(_DWORD *)(a1 + 24);
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v12 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v15 = 0LL;
      if ( *(_DWORD *)(a1 + 20) )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(a1 + 8 * v15 + 48);
          if ( v16 == 1 )
            return 209715726;
          if ( (v16 & 1) == 0 )
            return 209715726;
          SymCryptIntSetValueUint64(v16, v9);
          SymCryptIntExtendedGcd(a3, v9, 0LL, 0LL, *(_QWORD *)(a1 + 8 * v15 + 152), a5, (__int64)a6);
          if ( !(unsigned int)SymCryptIntIsEqualUint32(v26, 1LL) )
            return 209715726;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= *(_DWORD *)(a1 + 20) )
          {
            v12 = *(_DWORD *)(a1 + 24);
            goto LABEL_12;
          }
        }
      }
      else
      {
LABEL_12:
        v17 = 0LL;
        if ( v12 )
        {
          do
          {
            v18 = SymCryptIntFromDivisor(a2);
            v19 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 8 * v17 + 120));
            Inverses = SymCryptIntCopyMixedSize(v19, v18);
            if ( Inverses )
              break;
            v20 = SymCryptIntFromDivisor(a2);
            v21 = SymCryptIntFromDivisor(a2);
            SymCryptIntSubUint32(v21, 1LL, v20);
            v22 = SymCryptIntFromDivisor(a2);
            SymCryptIntToDivisor(v22, a2, *(_DWORD *)(a1 + 20), 0, a5, (__int64)a6);
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 20); i = (unsigned int)(i + 1) )
            {
              SymCryptIntDivMod(*(_QWORD *)(a1 + 8 * i + 152), a2, 0, (_DWORD)a3, a5, (__int64)a6);
              Inverses = SymCryptIntCopyMixedSize(
                           a3,
                           *(_QWORD *)(a1 + 8LL * (unsigned int)(v17 + i * *(_DWORD *)(a1 + 24)) + 160));
              if ( Inverses )
                return Inverses;
            }
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < *(_DWORD *)(a1 + 24) );
        }
      }
    }
  }
  return Inverses;
}

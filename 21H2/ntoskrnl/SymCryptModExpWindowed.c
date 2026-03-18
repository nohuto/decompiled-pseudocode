/*
 * XREFs of SymCryptModExpWindowed @ 0x140410D50
 * Callers:
 *     SymCryptModExpGeneric @ 0x140410BB8 (SymCryptModExpGeneric.c)
 * Callees:
 *     SymCryptIntBitsizeOfObject @ 0x140400B2C (SymCryptIntBitsizeOfObject.c)
 *     SymCryptIntGetBits @ 0x140400C60 (SymCryptIntGetBits.c)
 *     SymCryptModElementCopy @ 0x140400F34 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x140400F4C (SymCryptModElementCreate.c)
 *     SymCryptModElementSetValueUint32 @ 0x14040106C (SymCryptModElementSetValueUint32.c)
 *     SymCryptModMul @ 0x1404011D4 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1404012B0 (SymCryptModSquare.c)
 *     SymCryptSizeofModElementFromModulus @ 0x140401368 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptScsTableInit @ 0x14041660C (SymCryptScsTableInit.c)
 *     SymCryptScsTableLoad @ 0x140416650 (SymCryptScsTableLoad.c)
 *     MiSetPfnOriginalPte @ 0x140416A74 (MiSetPfnOriginalPte.c)
 *     SymCryptScsTableStore @ 0x140416A80 (SymCryptScsTableStore.c)
 */

__int64 __fastcall SymCryptModExpWindowed(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // ebp
  __int64 v9; // r13
  unsigned int v10; // r15d
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned int v14; // ebx
  int v15; // ebx
  unsigned int Bits; // eax
  __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  _BYTE v24[88]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+20h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]
  __int64 v27; // [rsp+C8h] [rbp+30h]
  __int64 v28; // [rsp+D0h] [rbp+38h]

  v25 = a4;
  v7 = a4;
  memset(v24, 0, 32);
  v9 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)a1);
  if ( v7 >= (unsigned int)SymCryptIntBitsizeOfObject() )
  {
    v7 = SymCryptIntBitsizeOfObject();
    v25 = v7;
  }
  v10 = 4;
  if ( v7 > 0x141 )
    v10 = 5;
  v11 = (unsigned int)SymCryptScsTableInit(v24, (unsigned int)(1 << v10), (unsigned int)v9);
  MiSetPfnOriginalPte(v24, a6, v11);
  v12 = SymCryptModElementCreate();
  v13 = v9 + v9 + v11 + a6;
  v23 = SymCryptModElementCreate();
  v28 = -2 * v9 - v11 + a7;
  SymCryptModElementSetValueUint32(1, a1, v12, v13, v28);
  SymCryptScsTableStore(v24, 0LL, v12, (unsigned int)v9);
  SymCryptModElementCopy();
  SymCryptScsTableStore(v24, 1LL, v12, (unsigned int)v9);
  v14 = 2;
  if ( (unsigned int)(1 << v10) > 2 )
  {
    do
    {
      v21 = v28;
      v20 = v13;
      SymCryptModMul(a1, v12);
      SymCryptScsTableStore(v24, v14++, v12, (unsigned int)v9);
    }
    while ( v14 < 1 << v10 );
    v7 = v25;
  }
  v26 = (v7 - 1) / v10;
  v15 = v10 * v26;
  Bits = SymCryptIntGetBits();
  SymCryptScsTableLoad(v24, Bits, v12, (unsigned int)v9, v20, v21);
  if ( v26 )
  {
    v27 = v26;
    do
    {
      v17 = v10;
      do
      {
        SymCryptModSquare(a1);
        --v17;
      }
      while ( v17 );
      v15 -= v10;
      v18 = SymCryptIntGetBits();
      SymCryptScsTableLoad(v24, v18, v23, (unsigned int)v9, v28, v22);
      v22 = v28;
      SymCryptModMul(a1, v12);
      --v27;
    }
    while ( v27 );
  }
  return SymCryptModElementCopy();
}

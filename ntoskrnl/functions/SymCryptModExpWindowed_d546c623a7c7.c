__int64 __fastcall SymCryptModExpWindowed(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  unsigned int v9; // eax
  __int64 v10; // rbp
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // r13
  unsigned int v20; // edi
  unsigned int v21; // ebx
  unsigned int v22; // esi
  int v23; // ebx
  unsigned int Bits; // eax
  __int64 v25; // r14
  unsigned int v26; // eax
  __int64 v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+28h] [rbp-80h]
  unsigned int v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+38h] [rbp-70h]
  unsigned int v33; // [rsp+40h] [rbp-68h]
  _BYTE v34[96]; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v35; // [rsp+C8h] [rbp+20h]
  unsigned int v36; // [rsp+C8h] [rbp+20h]
  __int64 v37; // [rsp+D8h] [rbp+30h]
  __int64 v38; // [rsp+E0h] [rbp+38h]

  v35 = a4;
  v7 = a4;
  memset(v34, 0, 32);
  v9 = SymCryptSizeofModElementFromModulus((__int64)a1);
  v10 = v9;
  v33 = v9;
  if ( v7 >= (unsigned int)SymCryptIntBitsizeOfObject() )
  {
    v7 = SymCryptIntBitsizeOfObject();
    v35 = v7;
  }
  v11 = 4;
  v12 = 0LL;
  do
  {
    if ( *((_DWORD *)&qword_140014748 + v12) >= v7 )
      break;
    ++v11;
    v12 = (unsigned int)(v12 + 1);
  }
  while ( !(_DWORD)v12 );
  v31 = v11;
  v13 = (unsigned int)SymCryptScsTableInit(v34, (unsigned int)(1 << v11), (unsigned int)v10);
  MiSetPfnOriginalPte(v34, a6, v13);
  v14 = v13 + a6;
  v15 = (unsigned int)v13;
  v16 = v10;
  v17 = v10 + v14;
  v18 = SymCryptModElementCreate();
  v37 = SymCryptModElementCreate();
  v19 = v16 + v17;
  v38 = -2 * v16 - v15 + a7;
  SymCryptModElementSetValueUint32(1, a1, v18, v19, v38);
  v20 = v16;
  SymCryptScsTableStore(v34, 0LL, v18, (unsigned int)v16);
  SymCryptModElementCopy();
  SymCryptScsTableStore(v34, 1LL, v18, (unsigned int)v16);
  v21 = 2;
  if ( (unsigned int)(1 << v11) > 2 )
  {
    v22 = 1 << v11;
    do
    {
      v29 = v38;
      v28 = v19;
      SymCryptModMul(a1, v18);
      SymCryptScsTableStore(v34, v21++, v18, v20);
    }
    while ( v21 < v22 );
    v11 = v31;
    v7 = v35;
  }
  v36 = (v7 - 1) / v11;
  v23 = v11 * v36;
  Bits = SymCryptIntGetBits();
  SymCryptScsTableLoad(v34, Bits, v18, v20, v28, v29);
  if ( v36 )
  {
    v32 = v36;
    do
    {
      v25 = v11;
      do
      {
        SymCryptModSquare(a1);
        --v25;
      }
      while ( v25 );
      v23 -= v11;
      v26 = SymCryptIntGetBits();
      SymCryptScsTableLoad(v34, v26, v37, v33, v38, v30);
      v30 = v38;
      SymCryptModMul(a1, v18);
      --v32;
    }
    while ( v32 );
  }
  return SymCryptModElementCopy();
}

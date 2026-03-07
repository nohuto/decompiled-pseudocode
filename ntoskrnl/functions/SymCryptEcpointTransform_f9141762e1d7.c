__int64 __fastcall SymCryptEcpointTransform(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        int a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  int v12; // r9d
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  __int64 *v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rax
  _BYTE *v20; // rbx
  _BYTE *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r12
  _BYTE *v25; // rbx
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF

  v8 = 0;
  v27 = 0LL;
  v12 = a4 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
      return 32782;
    v13 = 34;
  }
  else
  {
    v13 = 17;
  }
  v14 = *(_DWORD *)(a1 + 8);
  if ( !a5 )
  {
    v14 = v13;
    v13 = *(_DWORD *)(a1 + 8);
  }
  if ( v13 == v14 )
  {
    SymCryptEcpointCopy(a1, a2, a3);
    return v8;
  }
  switch ( v13 )
  {
    case 17:
      if ( v14 == 34 )
      {
        SymCryptModElementCopy();
        SymCryptModElementSetValueUint32(
          0,
          *(_DWORD **)(a1 + 616),
          (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
          a7,
          a8);
        return v8;
      }
      if ( v14 == 98 )
      {
        SymCryptModElementCopy();
        goto LABEL_22;
      }
      return 32779;
    case 34:
      if ( v14 == 17 || (unsigned int)(v14 - 67) <= 0x1F && (v15 = -2147352575, _bittest(&v15, v14 - 67)) )
      {
        SymCryptModElementCopy();
        if ( v14 == 67 || v14 == 84 )
        {
          SymCryptModElementCopy();
          SymCryptModElementSetValueUint32(
            1,
            *(_DWORD **)(a1 + 616),
            (__int64)&a3[2 * *(_DWORD *)(a1 + 36) + 32],
            a7,
            a8);
          if ( v14 == 84 )
            SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
          goto LABEL_25;
        }
        if ( v14 != 98 )
          return v8;
LABEL_22:
        SymCryptModElementSetValueUint32(
          1,
          *(_DWORD **)(a1 + 616),
          (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
          a7,
          a8);
LABEL_25:
        *a3 = 1;
        return v8;
      }
      return 32779;
    case 67:
      if ( v14 != 17 && v14 != 34 )
        return 32779;
      v16 = (__int64 *)&v27;
      v17 = a7;
      v18 = 2LL;
      do
      {
        *v16++ = SymCryptModElementCreate();
        v19 = *(unsigned int *)(a1 + 36);
        v17 += v19;
        --v18;
      }
      while ( v18 );
      v20 = &a2[(unsigned int)(2 * v19)];
      if ( (unsigned int)SymCryptModElementIsZero() )
        return 32785;
      v8 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v20 + 32));
      if ( !v8 )
      {
        SymCryptModMul(*(_DWORD **)(a1 + 616), v27);
        SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
        if ( v14 == 34 )
        {
          SymCryptModMul(*(_DWORD **)(a1 + 616), v27);
          goto LABEL_42;
        }
      }
      break;
    case 84:
      if ( v14 != 17 && v14 != 34 )
        return 32779;
      SymCryptModElementCreate();
      v21 = &a2[2 * *(_DWORD *)(a1 + 36)];
      if ( (unsigned int)SymCryptModElementIsZero() )
        return 32785;
      v8 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v21 + 32));
      if ( !v8 )
      {
        SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
        if ( v14 == 34 )
LABEL_42:
          SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)&a2[*(unsigned int *)(a1 + 36) + 32]);
      }
      break;
    case 98:
      if ( v14 == 17 || v14 == 34 )
      {
        SymCryptModElementCreate();
        v22 = *(unsigned int *)(a1 + 36);
        v23 = v22 + a7;
        v24 = a8 - v22;
        v25 = &a2[v22];
        if ( (unsigned int)SymCryptModElementIsZero() )
          return 32785;
        v8 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v25 + 32));
        if ( !v8 )
        {
          SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
          if ( v14 == 34 )
            SymCryptModElementSetValueUint32(
              0,
              *(_DWORD **)(a1 + 616),
              (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
              v23,
              v24);
        }
      }
      break;
    default:
      return 32779;
  }
  return v8;
}

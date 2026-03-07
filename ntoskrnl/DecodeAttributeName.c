__int64 __fastcall DecodeAttributeName(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v6; // r15
  __int64 v7; // r8
  PVOID v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r13
  unsigned __int16 v14; // ax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 v21; // cx
  __int64 v22; // rax
  unsigned __int8 v24; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v25[3]; // [rsp+21h] [rbp-Fh] BYREF
  int v26; // [rsp+24h] [rbp-Ch]
  unsigned __int8 v27; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v28; // [rsp+80h] [rbp+50h]
  unsigned __int8 v29; // [rsp+88h] [rbp+58h] BYREF

  v28 = a3;
  v3 = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v6 = 0;
  v24 = 0;
  v25[0] = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
    return 1336;
  v8 = SddlpAlloc(a2 + 2LL);
  if ( !v8 )
    return 8;
  v9 = a2 >> 1;
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = v10 + 4;
      LOBYTE(v7) = 0;
      v14 = *(_WORD *)(a1 + 2LL * v10);
      if ( v14 == 37 )
      {
        if ( (unsigned int)v13 >= v11
          || !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * (v10 + 1)), &v27, v7, v12)
          || !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * (v10 + 2)), &v29, v15, v16)
          || !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * (v10 + 3)), &v24, v17, v18)
          || !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2 * v13), v25, v19, v20)
          || (v6 = v25[0] | (unsigned __int16)(16 * (v24 | (unsigned __int16)(16 * (v29 | (unsigned __int16)(16 * v27))))),
              LOBYTE(v7) = IsEncodedAttributeChar(v6),
              !(_BYTE)v7) )
        {
          v3 = 1336;
          ExFreePoolWithTag(v8, 0);
          return v3;
        }
        LODWORD(v12) = v26;
        v14 = *(_WORD *)(a1 + 2LL * v10);
      }
      v21 = v6;
      v26 = v12 + 1;
      if ( !(_BYTE)v7 )
      {
        v21 = v14;
        LODWORD(v13) = v10;
      }
      v22 = (unsigned int)v12;
      v12 = (unsigned int)(v12 + 1);
      v10 = v13 + 1;
      *((_WORD *)v8 + v22) = v21;
      if ( (int)v13 + 1 >= v9 )
        break;
      v11 = v9;
    }
  }
  *v28 = v8;
  return v3;
}

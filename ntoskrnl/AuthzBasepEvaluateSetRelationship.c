__int64 __fastcall AuthzBasepEvaluateSetRelationship(int a1, __int64 a2, _DWORD *a3)
{
  int v4; // edx
  int v5; // r13d
  int v6; // r12d
  int v8; // ecx
  __int64 v9; // r14
  int v10; // eax
  unsigned int v12; // r14d
  int v13; // eax
  char v14; // al
  char v15; // al
  unsigned int v16; // r14d
  int NextValue; // eax
  char v18; // al
  int v19; // eax
  unsigned int v20; // r14d
  int v21; // eax
  char v22; // al
  __int128 v23; // [rsp+20h] [rbp-50h] BYREF
  __int128 v24; // [rsp+30h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-30h]
  _OWORD v26[2]; // [rsp+48h] [rbp-28h] BYREF
  int v27; // [rsp+68h] [rbp-8h]
  __int16 v28; // [rsp+6Ch] [rbp-4h]

  *a3 = 0;
  v4 = 0;
  LODWORD(v25) = 0;
  v5 = 0;
  WORD2(v25) = 0;
  v6 = 0;
  v27 = 0;
  v28 = 0;
  v23 = 0LL;
  v24 = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( !a1 )
  {
    if ( *(_DWORD *)(a2 + 12) != 1 && *(_DWORD *)(a2 + 52) != 1 && *(_DWORD *)(a2 + 4) != *(_DWORD *)(a2 + 44) )
      return (unsigned int)v4;
    while ( 1 )
    {
      v16 = *(_DWORD *)(a2 + 8);
      NextValue = AuthzBasepGetNextValue(a2, (__int64)&v23);
      v4 = NextValue;
      if ( NextValue == -2147483622 )
        break;
      if ( NextValue < 0 )
        goto LABEL_13;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2, (__int64)v26);
        if ( v4 < 0 )
          goto LABEL_13;
        v18 = *(_BYTE *)(a2 + 4);
        DWORD2(v23) = 0;
        BYTE4(v23) = v18;
        LOWORD(v23) = *(_WORD *)a2;
        *(_QWORD *)&v24 = *(_QWORD *)(a2 + 16);
        DWORD2(v24) = *(_DWORD *)(a2 + 8);
        v25 = *(_QWORD *)(a2 + 32) + v16;
      }
      ++v5;
      v4 = AuthzBasepValueInSet(&v23, (__int16 *)(a2 + 40), a3, 0);
      if ( v4 < 0 )
      {
LABEL_13:
        *a3 = -1;
        return (unsigned int)v4;
      }
      if ( *a3 != 1 )
        return (unsigned int)v4;
    }
    v19 = *(_DWORD *)(a2 + 12);
    v4 = 0;
    if ( v19 == 1 && !*(_BYTE *)(a2 + 4) )
    {
      if ( *(_DWORD *)(a2 + 52) == 1 )
        goto LABEL_43;
      if ( *(_DWORD *)(a2 + 44) == 1 )
        return (unsigned int)v4;
    }
    if ( *(_DWORD *)(a2 + 52) != 1 )
    {
LABEL_46:
      AuthzBasepRestartOperandValueEnumeration(a2);
      while ( 1 )
      {
        v20 = *(_DWORD *)(a2 + 48);
        v21 = AuthzBasepGetNextValue(a2 + 40, (__int64)&v23);
        v4 = v21;
        if ( v21 == -2147483622 )
          break;
        if ( v21 < 0 )
          goto LABEL_13;
        if ( *(_WORD *)a2 == 4 )
        {
          v4 = AuthzBasepGetNextValue(a2 + 40, (__int64)v26);
          if ( v4 < 0 )
            goto LABEL_13;
          v22 = *(_BYTE *)(a2 + 44);
          DWORD2(v23) = 0;
          BYTE4(v23) = v22;
          LOWORD(v23) = *(_WORD *)(a2 + 40);
          *(_QWORD *)&v24 = *(_QWORD *)(a2 + 56);
          DWORD2(v24) = *(_DWORD *)(a2 + 48);
          v25 = *(_QWORD *)(a2 + 72) + v20;
        }
        ++v6;
        v4 = AuthzBasepValueInSet(&v23, (__int16 *)a2, a3, 0);
        if ( v4 < 0 )
          goto LABEL_13;
        if ( *a3 != 1 )
          return (unsigned int)v4;
      }
      v4 = 0;
      if ( v5 != v6 )
        *a3 = 0;
      return (unsigned int)v4;
    }
LABEL_43:
    if ( !*(_BYTE *)(a2 + 44) && v19 != 1 && *(_DWORD *)(a2 + 4) == 1 )
      return (unsigned int)v4;
    goto LABEL_46;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return (unsigned int)v4;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a2 + 8);
      v13 = AuthzBasepGetNextValue(a2, (__int64)&v23);
      v4 = v13;
      if ( v13 == -2147483622 )
        return 0;
      if ( v13 < 0 )
        goto LABEL_13;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2, (__int64)v26);
        if ( v4 < 0 )
          goto LABEL_13;
        v14 = *(_BYTE *)(a2 + 4);
        DWORD2(v23) = 0;
        BYTE4(v23) = v14;
        LOWORD(v23) = *(_WORD *)a2;
        *(_QWORD *)&v24 = *(_QWORD *)(a2 + 16);
        DWORD2(v24) = *(_DWORD *)(a2 + 8);
        v25 = *(_QWORD *)(a2 + 32) + v12;
      }
      v4 = AuthzBasepValueInSet(&v23, (__int16 *)(a2 + 40), a3, 1);
      if ( v4 < 0 )
        goto LABEL_13;
      if ( *a3 )
        return (unsigned int)v4;
    }
  }
  if ( *(_DWORD *)(a2 + 12) == 1 || *(_DWORD *)(a2 + 52) == 1 || *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a2 + 44) )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(a2 + 48);
      v10 = AuthzBasepGetNextValue(a2 + 40, (__int64)&v23);
      v4 = v10;
      if ( v10 == -2147483622 )
        return 0;
      if ( v10 < 0 )
        goto LABEL_13;
      if ( *(_WORD *)a2 == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2 + 40, (__int64)v26);
        if ( v4 < 0 )
          goto LABEL_13;
        v15 = *(_BYTE *)(a2 + 44);
        DWORD2(v23) = 0;
        BYTE4(v23) = v15;
        LOWORD(v23) = *(_WORD *)(a2 + 40);
        *(_QWORD *)&v24 = *(_QWORD *)(a2 + 56);
        DWORD2(v24) = *(_DWORD *)(a2 + 48);
        v25 = *(_QWORD *)(a2 + 72) + v9;
      }
      v4 = AuthzBasepValueInSet(&v23, (__int16 *)a2, a3, 0);
      if ( v4 < 0 )
        goto LABEL_13;
      if ( *a3 != 1 )
        return (unsigned int)v4;
    }
  }
  return (unsigned int)v4;
}

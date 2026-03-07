__int64 __fastcall KiOpDecode(__int64 a1, __int64 a2, char a3, int a4, _QWORD *a5)
{
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  _DWORD v16[14]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+68h] [rbp+10h] BYREF
  char v18; // [rsp+70h] [rbp+18h] BYREF
  char v19; // [rsp+78h] [rbp+20h] BYREF

  v9 = a5;
  LOBYTE(a5) = 0;
  v19 = 0;
  v16[0] = 0;
  v18 = 0;
  v17 = 0;
  memset(v9, 0, 0x70uLL);
  *((_DWORD *)v9 + 15) = a4;
  v10 = *(_QWORD *)(a2 + 248);
  *v9 = v10;
  v9[2] = v10;
  v9[1] = v10 + 16;
  v9[4] = a1;
  v9[3] = a2;
  *((_BYTE *)v9 + 81) = a3;
  *((_BYTE *)v9 + 97) = 0;
  if ( *(_WORD *)(a2 + 56) == 35 )
    *((_BYTE *)v9 + 58) = 1;
  do
  {
    result = KiOpFetchNextByte(v9, &v18);
    if ( (int)result >= 0 )
    {
      LOBYTE(v12) = v18;
      result = KiOpIsPrefix(v9, v12, &v19);
      v13 = (unsigned int)result;
      if ( (int)result >= 0 )
        continue;
    }
    return result;
  }
  while ( v19 );
  if ( v18 != 15
    || (*((_BYTE *)v9 + 57) = 1, result = KiOpFetchNextByte(v9, &v18), v13 = (unsigned int)result, (int)result >= 0) )
  {
    v9[5] = v9[2] - 1LL;
    *((_BYTE *)v9 + 56) = v18;
    if ( (a4 & 0x8000000) != 0 )
    {
      v9[11] = 0LL;
    }
    else
    {
      result = KiOpLocateDecodeEntry(v9, v13);
      LODWORD(v13) = result;
      if ( (int)result < 0 )
        return result;
    }
    v14 = v9[11];
    if ( !v14 )
      return 0LL;
    if ( (*(_DWORD *)(v14 + 12) & 4) == 0
      || (result = KiOpDecodeModRM((__int64)v9), LODWORD(v13) = result, (int)result >= 0) )
    {
      if ( (*(_DWORD *)(v14 + 12) & 1) != 0 )
      {
        result = KiOpFetchBytes(v9, 1LL, &a5);
        LODWORD(v13) = result;
        if ( (int)result >= 0 )
        {
          v15 = (char)a5;
LABEL_27:
          v9[9] = v15;
          return (unsigned int)v13;
        }
      }
      else
      {
        if ( (*(_DWORD *)(v9[11] + 12LL) & 2) == 0 )
          return (unsigned int)v13;
        if ( (v9[6] & 0x40) != 0 )
        {
          result = KiOpFetchBytes(v9, 2LL, &v17);
          LODWORD(v13) = result;
          if ( (int)result >= 0 )
          {
            v15 = v17;
            goto LABEL_27;
          }
        }
        else
        {
          result = KiOpFetchBytes(v9, 4LL, v16);
          LODWORD(v13) = result;
          if ( (int)result >= 0 )
          {
            v15 = v16[0];
            goto LABEL_27;
          }
        }
      }
    }
  }
  return result;
}

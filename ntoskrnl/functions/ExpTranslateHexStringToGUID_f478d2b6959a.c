__int64 __fastcall ExpTranslateHexStringToGUID(wint_t *a1, _OWORD *a2)
{
  __int64 v2; // rax
  wint_t *v4; // r14
  int v5; // ebx
  __int16 v6; // bp
  unsigned __int16 v7; // di
  int v8; // esi
  unsigned int v9; // r15d
  wint_t v10; // ax
  int v11; // ebx
  __int64 v12; // rax
  __int16 v13; // ax
  int v14; // ecx
  char v15; // cl
  char v16; // cl
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-58h]

  v2 = -1LL;
  v4 = a1;
  do
    ++v2;
  while ( a1[v2] );
  if ( (_DWORD)v2 == 32 )
  {
    v5 = 0;
    v18 = 0LL;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = towlower(*v4);
      if ( (unsigned __int16)(v10 - 48) > 9u )
      {
        if ( (unsigned __int16)(v10 - 97) > 5u )
          return 3221225485LL;
        v11 = 16 * v5 - 87;
      }
      else
      {
        v11 = 16 * v5 - 48;
      }
      v5 = v10 + v11;
      if ( (v9 & 1) == 0 )
        goto LABEL_26;
      if ( v6 )
      {
        switch ( v6 )
        {
          case 1:
            v15 = 8 * v7++;
            v8 += v5 << v15;
            if ( v7 == 2 )
            {
              WORD2(v18) = v8;
LABEL_23:
              v7 = 0;
              goto LABEL_24;
            }
            break;
          case 2:
            v14 = (unsigned __int8)(8 * v7++);
            v8 += v5 << v14;
            if ( v7 == 2 )
            {
              WORD3(v18) = v8;
              v7 = 0;
LABEL_24:
              ++v6;
              v8 = 0;
            }
            break;
          case 3:
            v12 = v7++;
            *((_BYTE *)&v18 + v12 + 8) = v5;
            v13 = v6 + 1;
            if ( v7 != 8 )
              v13 = v6;
            v6 = v13;
            break;
          default:
            return 3221225485LL;
        }
      }
      else
      {
        v16 = v7++;
        v8 += v5 << (8 * v16);
        if ( v7 == 4 )
        {
          LODWORD(v18) = v8;
          goto LABEL_23;
        }
      }
      v5 = 0;
LABEL_26:
      ++v9;
      ++v4;
      if ( v9 >= 0x20 )
      {
        result = 0LL;
        *a2 = v18;
        return result;
      }
    }
  }
  return 3221225485LL;
}

__int64 __fastcall __entry_from_strcat_in_strcpy(__int64 a1, char *a2)
{
  __int64 v2; // r11
  __int64 v3; // rcx
  char v4; // al
  unsigned __int64 v6; // rax
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  unsigned __int64 v9; // rax
  _BYTE *v10; // rdx
  _BYTE *v11; // rdx
  unsigned __int64 v12; // rax
  _BYTE *v13; // rdx
  _BYTE *v14; // rdx
  unsigned int v15; // eax
  _BYTE *v16; // rdx

  v3 = a1 - (_QWORD)a2;
  if ( ((unsigned __int8)a2 & 7) != 0 )
  {
    while ( 1 )
    {
      v4 = *a2;
      a2[v3] = *a2;
      if ( !v4 )
        return v2;
      if ( ((unsigned __int8)++a2 & 7) == 0 )
        goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
LABEL_7:
      while ( 1 )
      {
        v6 = *(_QWORD *)a2;
        if ( (((*(_QWORD *)a2 + 0x7EFEFEFEFEFEFEFFLL) ^ ~*(_QWORD *)a2) & 0x8101010101010100uLL) != 0 )
          break;
        *(_QWORD *)&a2[v3] = v6;
        a2 += 8;
      }
      a2[v3] = v6;
      if ( !(_BYTE)v6 )
        break;
      v7 = a2 + 1;
      v7[v3] = BYTE1(v6);
      if ( !BYTE1(v6) )
        break;
      v8 = v7 + 1;
      v9 = v6 >> 16;
      v8[v3] = v9;
      if ( !(_BYTE)v9 )
        break;
      v10 = v8 + 1;
      v10[v3] = BYTE1(v9);
      if ( !BYTE1(v9) )
        break;
      v11 = v10 + 1;
      v12 = v9 >> 16;
      v11[v3] = v12;
      if ( !(_BYTE)v12 )
        break;
      v13 = v11 + 1;
      v13[v3] = BYTE1(v12);
      if ( !BYTE1(v12) )
        break;
      v14 = v13 + 1;
      v15 = WORD1(v12);
      v14[v3] = v15;
      if ( !(_BYTE)v15 )
        break;
      v16 = v14 + 1;
      v16[v3] = BYTE1(v15);
      if ( !BYTE1(v15) )
        break;
      a2 = v16 + 1;
    }
    return v2;
  }
}

__int64 __fastcall sub_140088A78(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r10
  char *v6; // rdx
  char v7; // dl
  char v8; // cl
  char v9; // cl
  unsigned __int64 v10; // r11
  char *v11; // rdx
  char v12; // dl
  char v13; // al
  int v15; // [rsp+0h] [rbp-18h]
  __int16 v16; // [rsp+4h] [rbp-14h]

  *(_QWORD *)a1 = off_1400D69E8;
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 12) = 0;
  if ( a2[3] == 12LL )
  {
    v4 = a2[4];
    v5 = 0LL;
    while ( 1 )
    {
      v6 = v5 >= v4 ? (char *)(a2 + 1) : (char *)(v5 + a2[2]);
      v7 = *v6;
      v8 = v7 - 48;
      if ( (unsigned __int8)(v7 - 48) > 9u )
      {
        if ( (unsigned __int8)(v7 - 65) > 5u )
        {
          if ( (unsigned __int8)(v7 - 97) > 5u )
            return a1;
          v8 = v7 - 87;
        }
        else
        {
          v8 = v7 - 55;
        }
        if ( v8 == -1 )
          break;
      }
      v9 = 16 * v8;
      v10 = v5 >> 1;
      *((_BYTE *)&v15 + (v5 >> 1)) = v9;
      v11 = v5 + 1 >= v4 ? (char *)(a2 + 1) : (char *)(a2[2] + v5 + 1);
      v12 = *v11;
      v13 = v12 - 48;
      if ( (unsigned __int8)(v12 - 48) > 9u )
      {
        if ( (unsigned __int8)(v12 - 65) > 5u )
        {
          if ( (unsigned __int8)(v12 - 97) > 5u )
            return a1;
          v13 = v12 - 87;
        }
        else
        {
          v13 = v12 - 55;
        }
        if ( v13 == -1 )
          break;
      }
      v5 += 2LL;
      *((_BYTE *)&v15 + v10) = v13 | v9;
      if ( v5 >= 0xC )
      {
        *(_DWORD *)(a1 + 8) = v15;
        *(_WORD *)(a1 + 12) = v16;
        return a1;
      }
    }
  }
  return a1;
}

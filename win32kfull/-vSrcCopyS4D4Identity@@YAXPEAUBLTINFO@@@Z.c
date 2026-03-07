void __fastcall vSrcCopyS4D4Identity(struct BLTINFO *a1)
{
  unsigned __int8 v1; // r9
  int v3; // ebp
  _BYTE *v4; // rdi
  char *v5; // r14
  _BYTE *v6; // r15
  int v7; // eax
  int v8; // edx
  int v9; // ebp
  char *v10; // r12
  int v11; // edx
  char v12; // cl
  int v13; // edx
  _BYTE *v14; // r8
  int v15; // r10d
  unsigned __int8 *v16; // r11
  char v17; // cl
  char v18; // al
  char v19; // al
  int v20; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 1));
  v5 = (char *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  v20 = v3;
  if ( *((int *)a1 + 6) > 0 )
  {
    while ( 1 )
    {
      v6 = v4;
      v7 = *((_DWORD *)a1 + 12);
      v8 = *((_DWORD *)a1 + 14) & 1;
      v9 = *((_DWORD *)a1 + 13) - v7;
      v10 = v5;
      if ( (((unsigned __int8)v7 ^ *((_BYTE *)a1 + 56)) & 1) != 0 )
      {
        if ( v8 && v9 )
        {
          v6 = v4 + 1;
          *v4 = *v4 & 0xF0 | ((unsigned __int8)*v5 >> 4);
          --v9;
        }
        v11 = v9 >> 1;
        while ( --v11 >= 0 )
        {
          v12 = *v10++;
          *v6++ = (16 * v12) | ((unsigned __int8)*v10 >> 4);
        }
        if ( (v9 & 1) != 0 )
          *v6 = *v6 & 0xF | (16 * *v10);
      }
      else
      {
        if ( v8 && v9 )
        {
          v10 = v5 + 1;
          v6 = v4 + 1;
          *v4 ^= (*v4 ^ *v5) & 0xF;
          --v9;
        }
        memmove(v6, v10, v9 >> 1);
        if ( (v9 & 1) != 0 )
          v6[v9 >> 1] = v10[v9 >> 1] ^ (v6[v9 >> 1] ^ v10[v9 >> 1]) & 0xF;
      }
      if ( !--v20 )
        break;
      v5 += *((int *)a1 + 10);
      v4 += *((int *)a1 + 11);
    }
    return;
  }
  while ( 2 )
  {
    v13 = *((_DWORD *)a1 + 12);
    v14 = v4;
    v15 = *((_DWORD *)a1 + 14);
    if ( (v13 & 1) == 0 )
      v1 = *v5;
    v16 = (unsigned __int8 *)(v5 - 1);
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      v16 = (unsigned __int8 *)v5;
    if ( (v15 & 1) != 0 )
      v17 = 0;
    else
      v17 = *v4 & 0xF;
    while ( v13 != *((_DWORD *)a1 + 13) )
    {
      if ( (v13 & 1) != 0 )
      {
        v1 = *v16--;
        if ( (v15 & 1) != 0 )
        {
          v18 = v1 & 0xF;
LABEL_31:
          v17 |= v18;
          goto LABEL_34;
        }
        v19 = 16 * v1;
      }
      else
      {
        if ( (v15 & 1) != 0 )
        {
          v18 = v1 >> 4;
          goto LABEL_31;
        }
        v19 = v1 & 0xF0;
      }
      *v14-- = v17 | v19;
      v17 = 0;
LABEL_34:
      --v13;
      LOBYTE(v15) = v15 - 1;
    }
    if ( (v15 & 1) == 0 )
      *v14 = v17 | *v14 & 0xF0;
    if ( --v3 )
    {
      v5 += *((int *)a1 + 10);
      v4 += *((int *)a1 + 11);
      continue;
    }
    break;
  }
}

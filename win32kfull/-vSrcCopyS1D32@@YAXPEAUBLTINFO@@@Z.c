void __fastcall vSrcCopyS1D32(struct BLTINFO *a1)
{
  int v1; // ebp
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  int *v5; // rdx
  int v6; // ecx
  __int64 v7; // rdx
  _BYTE *v8; // r9
  _DWORD *v9; // rbx
  _BYTE *v10; // r8
  _DWORD *v11; // r10
  unsigned int v12; // r11d
  char v13; // si
  unsigned __int64 v14; // rdi
  _BYTE *v15; // r15
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // [rsp+28h] [rbp+8h]
  int v20; // [rsp+2Ch] [rbp+Ch]

  v1 = *((_DWORD *)a1 + 8);
  v3 = *((_DWORD *)a1 + 7);
  LOBYTE(v4) = 0;
  v5 = *(int **)(*(_QWORD *)a1 + 16LL);
  v19 = *v5;
  v6 = v5[1];
  v7 = *((int *)a1 + 12);
  v20 = v6;
  v8 = (_BYTE *)(*((_QWORD *)a1 + 1) + (v7 >> 3));
  v9 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  if ( v1 )
  {
    while ( 1 )
    {
      --v1;
      v10 = v8;
      v11 = v9;
      v12 = v3;
      v13 = v7 & 7;
      if ( (v7 & 7) != 0 )
        LOBYTE(v4) = *v8 << v13;
      else
        v10 = v8 - 1;
      if ( v3 )
        break;
LABEL_12:
      v8 += *((int *)a1 + 10);
      v9 = (_DWORD *)((char *)v9 + *((int *)a1 + 11));
      if ( !v1 )
        return;
    }
    while ( 1 )
    {
      if ( !v13 )
      {
        ++v10;
        if ( v12 >= 8 )
        {
          v14 = (unsigned __int64)v12 >> 3;
          do
          {
            v4 = (unsigned __int8)*v10;
            v15 = v10;
            v16 = (unsigned __int64)(unsigned __int8)*v10 >> 7;
            v17 = *v10++ & 1;
            v12 -= 8;
            *v11 = *(&v19 + v16);
            v11[1] = *(&v19 + ((v4 >> 6) & 1));
            v11[2] = *(&v19 + ((v4 >> 5) & 1));
            v11[3] = *(&v19 + ((v4 >> 4) & 1));
            v11[4] = *(&v19 + ((v4 >> 3) & 1));
            v11[5] = *(&v19 + ((v4 >> 2) & 1));
            v11[6] = *(&v19 + ((v4 >> 1) & 1));
            v11[7] = *(&v19 + v17);
            v11 += 8;
            --v14;
          }
          while ( v14 );
          v10 = v15;
          goto LABEL_10;
        }
        LOBYTE(v4) = *v10;
      }
      v18 = (unsigned __int64)(unsigned __int8)v4 >> 7;
      LOBYTE(v4) = 2 * v4;
      v13 = (v13 + 1) & 7;
      *v11++ = *(&v19 + v18);
      --v12;
LABEL_10:
      if ( !v12 )
      {
        LOBYTE(v7) = *((_BYTE *)a1 + 48);
        goto LABEL_12;
      }
    }
  }
}

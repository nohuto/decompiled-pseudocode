void __fastcall Xp10BitCopy(char *a1, int a2, unsigned __int8 *a3, unsigned int a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // rbp
  _BYTE *v6; // rbx
  int v7; // r15d
  unsigned int v8; // r14d
  _BYTE *v9; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r10d
  unsigned int v14; // r9d
  __int64 v15; // r8
  char v16; // dl
  char v17; // al
  char v18; // dl
  _BYTE *v19; // rax
  bool v20; // cf
  unsigned __int64 v21; // rsi
  char v22; // dl
  unsigned int v23; // ebp
  int v24; // r8d

  v5 = a5;
  v6 = a3;
  v7 = a2;
  v8 = 8 - a4;
  v9 = a1;
  LOBYTE(v10) = a4;
  if ( a2 )
  {
    v11 = 8 - a2;
    v12 = (unsigned int)a5;
    if ( v11 <= a5 )
      v12 = v11;
    v13 = *a3 >> a4;
    if ( (unsigned int)v12 <= v8 )
    {
      v14 = v12 + a4;
    }
    else
    {
      v6 = a3 + 1;
      LOBYTE(v13) = (a3[1] << v8) | v13;
      v14 = v12 - v8;
    }
    v15 = (unsigned int)v12;
    v10 = v14 - 8;
    v16 = byte_14001BC30[4 * v12];
    v5 = a5 - v15;
    v17 = v16 << v7;
    v18 = ((unsigned __int8)v13 & (unsigned __int8)v16) << v7;
    v7 = 0;
    *a1 = v18 | *a1 & ~v17;
    v9 = a1 + 1;
    v19 = v6 + 1;
    if ( v14 < 8 )
      v10 = v14;
    v8 = 8 - v10;
    v20 = v14 < 8;
    a4 = v10;
    if ( v20 )
      v19 = v6;
    v6 = v19;
  }
  v21 = v5 >> 3;
  if ( v5 >> 3 )
  {
    if ( v7 == a4 )
    {
      memmove(v9, v6, v5 >> 3);
      v9 += v21;
      v6 += v21;
    }
    else
    {
      do
      {
        v22 = *v6++ >> v10;
        *v9 = v22;
        *v9++ = v22 | (*v6 << v8);
        --v21;
      }
      while ( v21 );
    }
  }
  v23 = v5 & 7;
  if ( v23 )
  {
    v24 = (unsigned __int8)*v6 >> v10;
    if ( v23 > v8 )
      LOBYTE(v24) = (v6[1] << v8) | v24;
    *v9 = (((unsigned __int8)v24 & (unsigned __int8)byte_14001BC30[4 * v23]) << v7) | *v9 & ~(byte_14001BC30[4 * v23] << v7);
  }
}

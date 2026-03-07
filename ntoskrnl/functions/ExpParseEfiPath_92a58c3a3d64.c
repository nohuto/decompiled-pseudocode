__int64 __fastcall ExpParseEfiPath(char *Src, _QWORD *a2, _QWORD *a3, char *a4)
{
  _WORD *Pool2; // rdi
  _QWORD *v5; // r15
  char *v6; // r12
  unsigned int v7; // esi
  _QWORD *v8; // rbp
  unsigned int v10; // ebx
  char v11; // r11
  char v12; // al
  char *v13; // r13
  unsigned int v14; // r14d
  char *v15; // r10
  char v16; // cl
  char v17; // al
  void *v18; // rax
  int v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // r15d
  unsigned int v23; // ebp
  unsigned __int64 v24; // rax

  Pool2 = 0LL;
  v5 = a3;
  v6 = 0LL;
  v7 = 0;
  v8 = a2;
  v10 = -1073741811;
  v11 = 1;
  while ( 1 )
  {
    v12 = *Src & 0x7F;
    if ( v12 == 127 )
      return v10;
    if ( v12 == 4 && Src[1] == 1 )
      break;
    Src += *((unsigned __int16 *)Src + 1);
  }
  v13 = Src;
  v10 = 0;
  v14 = *((unsigned __int16 *)Src + 1);
  v15 = &Src[(unsigned __int8)Src[2] | (unsigned __int64)((unsigned __int8)Src[3] << 8)];
  v16 = *v15;
  if ( (*v15 & 0x7F) == 4 && v15[1] == 4 )
  {
    v6 = v15;
    while ( 1 )
    {
      v20 = *((unsigned __int16 *)v15 + 1);
      if ( v20 + v7 - 4 < v7 )
        break;
      v7 = v20 + v7 - 4;
      if ( v20 + v14 < v14 )
      {
        v14 = -1;
        goto LABEL_24;
      }
      v14 += v20;
      v10 = 0;
      v15 += (unsigned __int8)v15[2] | (unsigned __int64)((unsigned __int8)v15[3] << 8);
      v16 = *v15;
      if ( (*v15 & 0x7F) != 4 || v15[1] != 4 )
        goto LABEL_7;
    }
    v7 = -1;
LABEL_24:
    v16 = *v15;
    v10 = -1073741675;
  }
LABEL_7:
  if ( (v16 & 0x7F) != 0x7F )
    return (unsigned int)-1073741811;
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  v17 = v13[41];
  if ( v17 == 2 )
  {
LABEL_10:
    *a4 = v11;
    if ( v7 )
    {
      v21 = v7 + 2;
      Pool2 = (_WORD *)ExAllocatePool2(64LL, v21, 1920364101LL);
      if ( !Pool2 )
        return 3221225626LL;
      v22 = 0;
      while ( (*v6 & 0x7F) != 0x7F )
      {
        v23 = *((unsigned __int16 *)v6 + 1) - 4;
        if ( v23 >= v21 )
          goto LABEL_32;
        memmove((char *)Pool2 + v22, v6 + 4, v23);
        v21 -= v23;
        v22 += v23;
        v6 += *((unsigned __int16 *)v6 + 1);
      }
      v8 = a2;
      v24 = v22;
      v5 = a3;
      Pool2[v24 >> 1] = 0;
    }
    v18 = (void *)ExAllocatePool2(64LL, v14, 1920364101LL);
    *v8 = v18;
    if ( v18 )
    {
      memmove(v18, v13, v14);
      *v5 = Pool2;
      return v10;
    }
    if ( Pool2 )
LABEL_32:
      ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  if ( v17 == 1 )
  {
    v11 = 0;
    goto LABEL_10;
  }
  return 3221225485LL;
}

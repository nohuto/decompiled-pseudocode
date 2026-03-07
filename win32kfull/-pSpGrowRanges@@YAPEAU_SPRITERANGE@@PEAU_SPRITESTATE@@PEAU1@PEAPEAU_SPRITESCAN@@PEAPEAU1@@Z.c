struct _SPRITERANGE *__fastcall pSpGrowRanges(
        struct _SPRITESTATE *a1,
        struct _SPRITERANGE *a2,
        struct _SPRITESCAN **a3,
        struct _SPRITERANGE **a4)
{
  __int64 v4; // rax
  size_t v5; // r14
  __int64 v6; // rsi
  char *v7; // r15
  char *v11; // rdi
  _DWORD *v12; // rdx
  struct _SPRITERANGE *result; // rax
  int v14; // eax
  int v15; // eax

  v4 = *((_QWORD *)a1 + 17);
  v5 = (size_t)a2 - v4;
  v6 = *((_QWORD *)a1 + 18) - v4 + 360;
  v7 = (char *)*a3 - v4;
  if ( *((_DWORD *)a1 + 36) - (_DWORD)v4 == -360 )
    v11 = 0LL;
  else
    v11 = (char *)Win32AllocPool((unsigned int)v6, 1919972167LL, a3, a4);
  v12 = (_DWORD *)*((_QWORD *)a1 + 17);
  if ( v11 )
  {
    memmove(v11, v12, v5);
    Win32FreePool(*((void **)a1 + 17));
    *((_QWORD *)a1 + 17) = v11;
    *a3 = (struct _SPRITESCAN *)&v11[(_QWORD)v7];
    *((_QWORD *)a1 + 18) = &v11[v6];
    *a4 = (struct _SPRITERANGE *)&v11[v6 - 56];
    return (struct _SPRITERANGE *)&v11[v5];
  }
  else
  {
    *v12 = *((_DWORD *)a1 + 11);
    v14 = *((_DWORD *)a1 + 13);
    *((_QWORD *)v12 + 2) = 0LL;
    v12[1] = v14;
    *((_QWORD *)v12 + 1) = 40LL;
    v12[6] = *((_DWORD *)a1 + 10);
    v15 = *((_DWORD *)a1 + 12);
    *((_QWORD *)v12 + 4) = 0LL;
    v12[7] = v15;
    *((_QWORD *)a1 + 18) = v12 + 10;
    result = 0LL;
    *((_QWORD *)a1 + 17) = v12;
  }
  return result;
}

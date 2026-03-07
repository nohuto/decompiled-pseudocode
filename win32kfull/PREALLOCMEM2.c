char *__fastcall PREALLOCMEM2(void *Src, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  char *v7; // rax
  char *v8; // rdi

  v4 = a3;
  v5 = a2;
  if ( !(_DWORD)a3 )
    return 0LL;
  v7 = (char *)Win32AllocPool((unsigned int)a3, (unsigned int)a4, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( (unsigned int)v5 >= v4 )
      v5 = v4;
    memmove(v7, Src, (unsigned int)v5);
    Win32FreePool(Src);
    memset_0(&v8[v5], 0, v4 - (unsigned int)v5);
  }
  return v8;
}

char *__fastcall UsbhMakeId(
        int a1,
        _WORD *a2,
        void *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int16 a6,
        unsigned __int16 a7,
        char *Str)
{
  __int64 v8; // r15
  size_t v11; // r15
  char *v12; // r14
  __int64 v13; // r12
  char *Pool2; // rax
  char *v15; // r13
  size_t v16; // rbx
  char *v17; // rbx
  int v18; // edi
  unsigned int i; // ecx
  __int16 v20; // ax

  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  v11 = 2 * v8;
  v12 = Str;
  v13 = v11 + (unsigned int)*a4 + 2LL * a5;
  if ( a1 == 2 && Str )
    v13 = v13 + 2 * strnlen(Str, 8uLL) - 2;
  Pool2 = (char *)ExAllocatePool2(64LL, v13, 1112885333LL);
  v15 = Pool2;
  if ( Pool2 )
  {
    v16 = (unsigned int)*a4;
    memmove(Pool2, a3, v16);
    v17 = &v15[v16];
    memmove(v17, a2, v11);
    *a4 = v13;
    while ( *(_WORD *)v17 != 110 && a6 )
      v17 += 2;
    if ( a1 )
    {
      v18 = a1 - 1;
      if ( v18 )
      {
        if ( v18 == 1 && Str )
        {
          for ( i = 0; i < 8; ++i )
          {
            v20 = (unsigned __int8)*v12;
            if ( !(_BYTE)v20 )
              break;
            *(_WORD *)v17 = v20;
            v17 += 2;
            ++v12;
          }
        }
      }
      else if ( a6 == 2 )
      {
        *(_WORD *)v17 = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v17 + 1) = (a7 & 0xF) + 48;
      }
      else if ( a6 == 4 )
      {
        *(_WORD *)v17 = (a7 >> 12) + 48;
        *((_WORD *)v17 + 1) = (HIBYTE(a7) & 0xF) + 48;
        *((_WORD *)v17 + 2) = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v17 + 3) = (a7 & 0xF) + 48;
      }
    }
    else if ( a6 == 2 )
    {
      *(_WORD *)v17 = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v17 + 1) = (unsigned __int8)Nibble[a7 & 0xF];
    }
    else if ( a6 == 4 )
    {
      *(_WORD *)v17 = (unsigned __int8)Nibble[(unsigned __int64)a7 >> 12];
      *((_WORD *)v17 + 1) = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 8) & 0xF];
      *((_WORD *)v17 + 2) = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v17 + 3) = (unsigned __int8)Nibble[a7 & 0xF];
    }
  }
  else
  {
    *a4 = 0;
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  return v15;
}

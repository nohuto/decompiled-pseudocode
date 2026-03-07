__int64 __fastcall HalacpiIrqTranslateResourcesIsa(
        __int64 a1,
        __int128 *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _OWORD *a7)
{
  __int128 v7; // xmm0
  _OWORD *v8; // rbx
  char v10; // bp
  unsigned int v13; // edx
  __int64 result; // rax
  __int16 v15; // r10
  unsigned int v16; // ecx
  _DWORD *v17; // rax
  unsigned int v18; // edx
  int v19; // [rsp+48h] [rbp+10h] BYREF

  v7 = *a2;
  v8 = a7;
  v19 = 0;
  v10 = 0;
  *a7 = v7;
  *((_DWORD *)v8 + 4) = *((_DWORD *)a2 + 4);
  v13 = *((_DWORD *)a2 + 2);
  if ( v13 + 0x100000 <= 0xFFFFE || HalpIsInterruptTypeSecondary(0, v13) )
    return 0LL;
  if ( !a3 )
  {
    *((_WORD *)v8 + 2) = *((_WORD *)HalpPicVectorRedirect + 2 * *((unsigned __int16 *)a2 + 2));
    *((_DWORD *)v8 + 2) = *((_DWORD *)HalpPicVectorRedirect + *((unsigned int *)a2 + 2));
    return 0LL;
  }
  if ( a3 != 1 )
    return 0LL;
  result = TranslateGlobalVectorToIsaVector(*((unsigned __int16 *)a2 + 2), &v19);
  if ( (int)result >= 0 )
  {
    *((_WORD *)v8 + 2) = v19;
    result = TranslateGlobalVectorToIsaVector(*((unsigned int *)a2 + 2), &v19);
    if ( (int)result >= 0 )
    {
      *((_DWORD *)v8 + 2) = v19;
      if ( v15 == 9 )
      {
        v16 = 0;
        if ( a4 )
        {
          v17 = (_DWORD *)(a5 + 12);
          do
          {
            v18 = *(v17 - 1);
            if ( v18 < 9 )
            {
              if ( v18 >= 2 && *v17 <= 2u )
                v10 = 1;
            }
            else if ( *v17 <= 9u )
            {
              return 0LL;
            }
            ++v16;
            v17 += 8;
          }
          while ( v16 < a4 );
          if ( v10 )
          {
            *((_WORD *)v8 + 2) = 2;
            *((_DWORD *)v8 + 2) = 2;
          }
        }
      }
      return 0LL;
    }
  }
  return result;
}

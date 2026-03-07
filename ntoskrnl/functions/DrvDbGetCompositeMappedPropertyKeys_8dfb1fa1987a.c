__int64 __fastcall DrvDbGetCompositeMappedPropertyKeys(
        __int64 a1,
        _OWORD **a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned int v8; // r11d
  _OWORD *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx

  result = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( a4 && (unsigned int)v7 < a5 )
      {
        v10 = *a2;
        v11 = 5 * v7;
        v7 = (unsigned int)(v7 + 1);
        *(_OWORD *)(a4 + 4 * v11) = **a2;
        *(_DWORD *)(a4 + 4 * v11 + 16) = *((_DWORD *)v10 + 4);
      }
      v12 = *a6;
      v13 = -1;
      v14 = *a6 + 1;
      if ( v14 >= *a6 )
        v13 = *a6 + 1;
      *a6 = v13;
      result = v14 < v12 ? 0xC0000095 : 0;
      if ( v14 < v12 )
        break;
      ++v8;
      ++a2;
      if ( v8 >= a3 )
        return result;
    }
    *a6 = 0;
  }
  return result;
}

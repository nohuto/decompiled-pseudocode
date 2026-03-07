__int64 __fastcall MiImageRvaRawEnumFirst(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned int i; // ebp
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rax
  __int64 result; // rax
  unsigned int v9; // eax

  v2 = 0;
  v3 = a1 + 152;
  for ( i = 0; i < *(_DWORD *)(a1 + 144); v3 += 40LL )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v3 + 8);
    if ( v7 )
    {
      v9 = v7(a1, v3 + 24, v3 + 4);
      *(_DWORD *)v3 = v9;
      if ( v9 )
      {
        if ( v2 )
        {
          if ( v2 >= v9 )
            v2 = v9;
        }
        else
        {
          v2 = v9;
        }
      }
    }
    ++i;
  }
  if ( a2 && v2 )
    *a2 = MiImageGetRawRvaState(a1, v2);
  result = v2;
  *(_DWORD *)(a1 + 312) = v2;
  return result;
}

__int64 __fastcall HalpWdatProcessWdatInternalData(__int64 a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  unsigned int v4; // edx
  int v5; // eax
  _BYTE *i; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
  {
    a2[4] = *(_DWORD *)(a1 + 52);
    a2[5] = *(_DWORD *)(a1 + 56);
    a2[6] = *(_DWORD *)(a1 + 48);
    v4 = *(_DWORD *)(a1 + 64);
    *a4 = 1;
    *a3 = (v4 << 6) + 112;
    v5 = 0;
    if ( v4 )
    {
      for ( i = (_BYTE *)(a1 + 68); *i != 6; i += 24 )
      {
        if ( ++v5 >= v4 )
          return 3221225485LL;
      }
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  else
  {
    result = 0LL;
    *a4 = 0;
  }
  return result;
}

__int64 __fastcall SearchFNTCacheHlink(unsigned int a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // r9d
  _DWORD *v6; // rcx

  *a2 = 0LL;
  result = 61 * (a1 / 0x3D);
  for ( i = *(_DWORD *)(a3 + 4LL * (a1 % 0x3D) + 72); i != -1; i = v6[2] )
  {
    result = i + 4LL;
    v6 = (_DWORD *)(a3 + 80 * result);
    if ( a1 == *v6 )
    {
      *a2 = v6;
      return result;
    }
  }
  return result;
}

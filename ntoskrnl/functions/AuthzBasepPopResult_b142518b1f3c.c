__int64 __fastcall AuthzBasepPopResult(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // ecx

  result = 0LL;
  if ( !*a2 )
    return 3221225890LL;
  v5 = *a2 - 1;
  *a2 = v5;
  *a3 = *(_DWORD *)(a1 + 4LL * v5);
  return result;
}

__int64 __fastcall AuthzBasepPushResult(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = (unsigned int)*a2;
  result = 0LL;
  if ( (unsigned int)v3 >= 0x100 )
    return 3221226505LL;
  *(_DWORD *)(a1 + 4 * v3) = a3;
  *a2 = v3 + 1;
  return result;
}

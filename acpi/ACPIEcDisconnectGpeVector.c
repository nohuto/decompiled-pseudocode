__int64 __fastcall ACPIEcDisconnectGpeVector(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  result = ACPIVectorDisconnect(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}

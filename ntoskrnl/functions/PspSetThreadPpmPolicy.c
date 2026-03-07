__int64 __fastcall PspSetThreadPpmPolicy(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // edx
  int v5; // edx

  result = 0LL;
  if ( !a2 )
    return KeSetThreadPpmPolicy(a1, result);
  v3 = a2 - 1;
  if ( !v3 )
  {
    LODWORD(result) = 1;
    return KeSetThreadPpmPolicy(a1, result);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    LODWORD(result) = 2;
    return KeSetThreadPpmPolicy(a1, result);
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    LODWORD(result) = 3;
    return KeSetThreadPpmPolicy(a1, result);
  }
  if ( v5 == 5 )
  {
    LODWORD(result) = 4;
    return KeSetThreadPpmPolicy(a1, result);
  }
  return result;
}

__int64 __fastcall KnownInputTypeFromLinpSource(int a1)
{
  int v1; // ecx
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 4LL;
  result = 2LL;
  v3 = v1 - 2;
  if ( v3 )
  {
    v4 = v3 - 8;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        if ( v5 == 4 )
          return 32LL;
        else
          return 0LL;
      }
      else
      {
        return 16LL;
      }
    }
    else
    {
      return 8LL;
    }
  }
  return result;
}

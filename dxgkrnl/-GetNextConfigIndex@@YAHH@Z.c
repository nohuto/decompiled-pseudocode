__int64 __fastcall GetNextConfigIndex(int a1)
{
  __int64 result; // rax
  int v2; // ecx

  result = 0LL;
  if ( a1 != -1 )
  {
    v2 = a1 + 1;
    if ( v2 >= 2 )
      return 0;
    return (unsigned int)v2;
  }
  return result;
}

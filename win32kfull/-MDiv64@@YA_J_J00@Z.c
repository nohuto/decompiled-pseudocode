__int64 __fastcall MDiv64(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  result = 0LL;
  if ( a1 && a2 )
  {
    if ( a1 >= 0 )
    {
      if ( a2 >= 0 )
        goto LABEL_9;
      a2 = -a2;
    }
    else
    {
      a1 = -a1;
    }
    v3 = 1;
LABEL_9:
    result = (a2 * a1 - v3) / a3;
    if ( v3 )
      return ~result;
  }
  return result;
}

__int64 *__fastcall MmFlushAllPagesEx(char a1)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiFlushAllPages(*result, a1);
  }
  return result;
}

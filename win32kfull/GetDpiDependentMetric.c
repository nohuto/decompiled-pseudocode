__int64 __fastcall GetDpiDependentMetric(int a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = -1;
  if ( a2 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v2 = 0;
  }
  else if ( a2 >= 96 && a2 == 24 * (a2 / 0x18u) )
  {
    v2 = (a2 - 72) / 24;
    if ( v2 >= 18 )
      v2 = -1;
  }
  v3 = a1 + 30LL * v2;
  result = *(unsigned int *)(gpsi + 4 * v3 + 2284);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau((unsigned int)a2);
    result = *(unsigned int *)(gpsi + 4 * v3 + 2284);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}

__int64 __fastcall PopIdleWakeInsertTimeInterval(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v6; // rbx
  unsigned int i; // r10d
  __int64 v8; // r9
  __int64 result; // rax

  if ( a2 )
  {
    v6 = a5;
    for ( i = 0; ; ++i )
    {
      v8 = i + 1;
      if ( a1 >= *v6 && a1 < a5[v8] )
        break;
      ++v6;
      if ( (unsigned int)v8 >= a2 )
        return result;
    }
    result = i;
    ++*(_DWORD *)(a3 + 4LL * i);
    if ( a4 )
      *(_QWORD *)(a4 + 8LL * i) += a1;
  }
  return result;
}

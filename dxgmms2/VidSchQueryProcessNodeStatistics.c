__int64 __fastcall VidSchQueryProcessNodeStatistics(
        unsigned int *a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 *v8; // rdx
  __int64 *v9; // rcx

  v5 = a3;
  if ( a2 != 0xFFFF )
  {
    if ( a2 >= a1[19] )
      return 3221225485LL;
    v5 = VidSchiDriverNodeEngineToSchedulerNode((__int64)a1, a3, a2);
  }
  if ( v5 >= a1[20] )
    return 3221225485LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 8LL * a1[1]);
  if ( !v6 )
    return 3221225485LL;
  v7 = *(_DWORD *)(v6 + 80);
  v8 = *(__int64 **)(v6 + 8);
  v9 = &v8[v5];
  if ( v5 >= v7 )
    v9 = v8;
  if ( !*v9 )
    return 3221225485LL;
  if ( v5 < v7 )
    v8 += v5;
  CopyNodeStatistics(a5, *v8);
  return 0LL;
}

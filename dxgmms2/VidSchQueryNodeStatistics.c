__int64 __fastcall VidSchQueryNodeStatistics(__int64 a1, unsigned __int16 a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  _QWORD *v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 *v10; // rdx

  v5 = a3;
  if ( a2 != 0xFFFF )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 76) )
      return 3221225485LL;
    v5 = VidSchiDriverNodeEngineToSchedulerNode(a1, a3, a2);
  }
  if ( v5 >= *(_DWORD *)(a1 + 80) )
    return 3221225485LL;
  v7 = *(_QWORD **)(a1 + 632);
  if ( v5 < *(_DWORD *)(a1 + 704) )
    v7 += v5;
  CopyNodeStatistics(a4, *v7 + 2648LL);
  v9 = *(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 32) + 8LL * *(unsigned int *)(v8 + 4));
  v10 = *(__int64 **)(v9 + 8);
  if ( v5 < *(_DWORD *)(v9 + 80) )
    v10 += v5;
  CopyNodeStatistics(a4 + 272, *v10);
  return 0LL;
}

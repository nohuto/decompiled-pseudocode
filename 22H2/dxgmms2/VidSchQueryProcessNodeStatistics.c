/*
 * XREFs of VidSchQueryProcessNodeStatistics @ 0x1C01079D0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0004A6C (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     CopyNodeStatistics @ 0x1C00C4578 (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryProcessNodeStatistics(
        unsigned int *a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 *v11; // rdx
  __int64 *v12; // rcx

  v6 = a3;
  if ( a2 != 0xFFFF )
  {
    if ( a2 >= a1[19] )
      return 3221225485LL;
    v6 = VidSchiDriverNodeEngineToSchedulerNode((__int64)a1, a3, a2);
  }
  if ( v6 >= a1[20] )
    return 3221225485LL;
  v8 = a4 + 2664;
  ExAcquirePushLockSharedEx(a4 + 2664, 0LL);
  v9 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 8LL * a1[1]);
  if ( !v9 )
    goto LABEL_12;
  v10 = *(_DWORD *)(v9 + 80);
  v11 = *(__int64 **)(v9 + 8);
  v12 = &v11[v6];
  if ( v6 >= v10 )
    v12 = v11;
  if ( !*v12 )
  {
LABEL_12:
    ExReleasePushLockSharedEx(v8, 0LL);
    return 3221225485LL;
  }
  if ( v6 < v10 )
    v11 += v6;
  CopyNodeStatistics(a5, *v11);
  ExReleasePushLockSharedEx(v8, 0LL);
  return 0LL;
}

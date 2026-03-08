/*
 * XREFs of VidSchQueryProcessVidPnSourceStatistics @ 0x1C0107EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryProcessVidPnSourceStatistics(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r11
  _DWORD *v5; // rdx

  if ( a2 >= *(_DWORD *)(a1 + 40) )
    return 3221225485LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 8LL * *(unsigned int *)(a1 + 4));
  if ( !v4 || !*(_QWORD *)(v4 + 8LL * a2 + 88) )
    return 3221225485LL;
  _mm_lfence();
  v5 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 8LL * *(unsigned int *)(a1 + 4)) + 8LL * a2 + 88);
  *a4 = *v5;
  a4[1] = v5[1];
  a4[2] = v5[2];
  return 0LL;
}

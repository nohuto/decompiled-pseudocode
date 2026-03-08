/*
 * XREFs of VidSchiMonitorRefreshPeriodFromNode @ 0x1C0018FE4
 * Callers:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0002D40 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00379BC (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiMonitorRefreshPeriodFromNode(__int64 a1)
{
  __int64 v1; // rdi
  ULONGLONG v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 1768);
  if ( !v3 )
  {
    result = *(unsigned int *)(*(_QWORD *)(v1 + 3200) + 82944LL);
    if ( (_DWORD)result )
      return result;
    WdLogSingleEntry1(3LL, 0LL);
    return 16LL;
  }
  v5 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16LL * (unsigned int)RtlFindMostSignificantBit(v3) + 2056) + 96LL)
                       + 504LL);
  if ( (unsigned int)v5 > *(_DWORD *)(v1 + 40) )
    v5 = 0LL;
  v6 = (unsigned int)v5;
  result = *(unsigned int *)(*(_QWORD *)(v1 + 8 * v5 + 3200) + 82944LL);
  if ( !(_DWORD)result )
  {
    WdLogSingleEntry1(3LL, v6);
    return 16LL;
  }
  return result;
}

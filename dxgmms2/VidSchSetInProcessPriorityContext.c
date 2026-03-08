/*
 * XREFs of VidSchSetInProcessPriorityContext @ 0x1C00B4730
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetInProcessPriorityContext @ 0x1C0018034 (VidSchiSetInProcessPriorityContext.c)
 */

__int64 __fastcall VidSchSetInProcessPriorityContext(__int64 a1, int a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 104);
  if ( !*(_BYTE *)(v3 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
    return VidSchiSetInProcessPriorityContext(a1, a2);
  WdLogSingleEntry2(3LL, v3, -1071775232LL);
  return 3223192064LL;
}

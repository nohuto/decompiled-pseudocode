/*
 * XREFs of VidSchSetInProcessPriorityHwContext @ 0x1C0109510
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C0109954 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetInProcessPriorityHwContext(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v5 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v5, -1071775232LL);
      return 3223192064LL;
    }
    else
    {
      *(_DWORD *)(a1 + 72) = a2;
      VidSchiUpdateDdiHwContextPriority(a1);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225485LL;
  }
}

/*
 * XREFs of VidSchSetAbsolutePriorityHwContext @ 0x1C0109390
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z @ 0x1C0035678 (-VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C0109954 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetAbsolutePriorityHwContext(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx

  if ( a1 )
  {
    if ( a2 > 0x1E )
    {
      WdLogSingleEntry2(1LL, a2, -1073741811LL);
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
    }
    v9 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v9, -1071775232LL);
      return 3223192064LL;
    }
    else if ( a2 < 0x1E
           || a3
           || (result = VidSchiCheckProcessGPUPriorityPrivilege(*(struct _VIDSCH_PROCESS **)(v9 + 40)), (int)result >= 0) )
    {
      *(_BYTE *)(a1 + 88) = 1;
      *(_DWORD *)(a1 + 84) = a2;
      VidSchiUpdateDdiHwContextPriority(a1);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}

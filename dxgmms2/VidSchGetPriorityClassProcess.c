/*
 * XREFs of VidSchGetPriorityClassProcess @ 0x1C0107B00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetPriorityClassProcess(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx

  if ( a1 && a2 )
  {
    *a2 = *(_DWORD *)(a1 + 24);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225485LL;
  }
}

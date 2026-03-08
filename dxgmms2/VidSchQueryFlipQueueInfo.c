/*
 * XREFs of VidSchQueryFlipQueueInfo @ 0x1C0107CF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchQueryFlipQueueInfo(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx

  if ( a1 && a2 )
  {
    a2[2] &= 1u;
    *a2 = 0;
    a2[1] = 31;
    a2[2] = (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2276LL) >> 2) & 1;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225485LL;
  }
}

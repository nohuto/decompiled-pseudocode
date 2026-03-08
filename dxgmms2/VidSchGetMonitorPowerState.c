/*
 * XREFs of VidSchGetMonitorPowerState @ 0x1C0107A40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetMonitorPowerState(__int64 a1)
{
  __int64 v2; // rcx
  struct _ERESOURCE *v4; // rdi
  unsigned int v5; // ebx

  if ( a1 )
  {
    v4 = (struct _ERESOURCE *)(a1 + 1088);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1088), 1u);
    v5 = *(_DWORD *)(a1 + 2208);
    ExReleaseResourceLite(v4);
    return v5;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v2, 0x40000LL);
    return 0LL;
  }
}

/*
 * XREFs of VidSchGetMonitorPowerState @ 0x1C00892E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  struct _ERESOURCE *v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // rax

  if ( a1 )
  {
    v4 = (struct _ERESOURCE *)(a1 + 1072);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1072), 1u);
    v5 = *(_DWORD *)(a1 + 2128);
    ExReleaseResourceLite(v4);
    return v5;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    WdLogEvent5_WdAssertion(v7);
    return 0LL;
  }
}

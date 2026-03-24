/*
 * XREFs of VidSchGetDeviceError @ 0x1C0085860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDeviceError(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  if ( a1 && a2 )
  {
    *a2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 200), 0, 0);
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v3);
    return 3221225485LL;
  }
}

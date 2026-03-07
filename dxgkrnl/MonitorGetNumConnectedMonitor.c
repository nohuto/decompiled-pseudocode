__int64 __fastcall MonitorGetNumConnectedMonitor(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( a1 && a2 )
  {
    v6 = *(_QWORD *)(a1 + 2920);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 112);
      if ( v7 )
      {
        *a2 = *(_DWORD *)(v7 + 32);
        return 0LL;
      }
    }
    WdLogSingleEntry1(2LL, a1);
  }
  return 3221225485LL;
}

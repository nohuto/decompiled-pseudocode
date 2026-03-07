__int64 __fastcall MonitorReleaseMonitorHandle(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  __int64 v7; // rax

  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = a1;
  if ( a1 && a2 )
  {
    if ( !*(_QWORD *)(a1 + 2920) )
      WdLogSingleEntry0(1LL);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 2920) + 112LL) )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 280), a3, 0x20u);
      return 0LL;
    }
    WdLogSingleEntry1(2LL, a1);
  }
  return 3221225485LL;
}

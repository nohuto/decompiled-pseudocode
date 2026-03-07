__int64 __fastcall DxgkReleaseAdapterStopResetSync(__int64 a1, int a2)
{
  __int64 v3; // rcx

  if ( a1 )
  {
    v3 = a1 + 136;
    if ( a2 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
      ExReleasePushLockSharedEx(v3, 0LL);
    }
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 297LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"No hAdapter specified", 297LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}

__int64 __fastcall MonitorGetLidStateFromMonitor(__int64 a1, bool *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  char v6; // al
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v7, a1);
    v4 = v7;
    if ( v7 )
    {
      v6 = *(_BYTE *)(v7 + 176);
      if ( (v6 & 2) != 0 )
      {
        *a2 = (v6 & 4) != 0;
        v5 = 0;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v4 )
    {
      ExReleaseResourceLite((PERESOURCE)(v4 + 24));
      KeLeaveCriticalRegion();
    }
    return v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}

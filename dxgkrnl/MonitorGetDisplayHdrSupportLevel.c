__int64 __fastcall MonitorGetDisplayHdrSupportLevel(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v6, a1);
  v3 = v6;
  if ( v6 )
  {
    *a2 = *(_DWORD *)(*(_QWORD *)(v6 + 224) + 396LL);
    v4 = 0;
  }
  else
  {
    v4 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)(v3 + 24));
    KeLeaveCriticalRegion();
  }
  return v4;
}

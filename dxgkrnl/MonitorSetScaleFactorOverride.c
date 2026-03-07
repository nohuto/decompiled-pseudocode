__int64 __fastcall MonitorSetScaleFactorOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v11, a1, v5, 1u);
  v8 = v11;
  if ( v11 )
  {
    *(_DWORD *)(v11 + 468) = v4;
    v9 = 0;
  }
  else
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  if ( v8 )
  {
    ExReleaseResourceLite((PERESOURCE)(v8 + 24));
    KeLeaveCriticalRegion();
  }
  return v9;
}

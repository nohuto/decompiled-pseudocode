__int64 __fastcall MonitorGetAdvancedColorMetadataOverride(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v7, a1);
  v3 = v7;
  if ( v7 )
  {
    v5 = *(_QWORD *)(v7 + 224);
    *(_OWORD *)a2 = *(_OWORD *)(v5 + 400);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v5 + 416);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(v5 + 424);
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

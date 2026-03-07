__int64 __fastcall MonitorSetDriverColorimetryOverride(
        __int64 a1,
        __int64 a2,
        const struct _DXGK_COLORIMETRY *a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  DxgMonitor::MonitorColorState *v10; // rcx
  DxgMonitor::MonitorColorState *v11; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v13, a1, v5, 0);
  v8 = v13;
  if ( v13 )
  {
    if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(*(DxgMonitor::MonitorColorState **)(v13 + 224))
      || (*(_BYTE *)(v8 + 177) & 0x40) != 0 )
    {
      DxgMonitor::MonitorColorState::_SaveHDRParamDriverOverrides(v10, a3);
      DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v11);
      LODWORD(v9) = 0;
      goto LABEL_10;
    }
    v9 = -1073741637LL;
  }
  else
  {
    v9 = -1073741811LL;
  }
  WdLogSingleEntry1(2LL, v9);
LABEL_10:
  if ( v8 )
  {
    ExReleaseResourceLite((PERESOURCE)(v8 + 24));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}

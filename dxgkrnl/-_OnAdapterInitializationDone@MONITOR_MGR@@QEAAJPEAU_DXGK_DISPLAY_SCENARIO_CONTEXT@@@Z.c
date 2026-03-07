__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  int EmergentSimulatedTarget; // eax
  int v7; // ecx
  __int64 result; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(
                              *(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL),
                              (unsigned int *)this + 18);
  v7 = *((_DWORD *)this + 18);
  if ( EmergentSimulatedTarget < 0 )
  {
    if ( v7 == -1 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v7 == -1 )
LABEL_3:
    WdLogSingleEntry0(1LL);
LABEL_4:
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2);
  result = 0LL;
  *((_BYTE *)this + 21) = 1;
  return result;
}

/*
 * XREFs of ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C0216378
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C02162DC (MonitorCreateMonitorManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InitializeMonitorManager(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( g_IsInternalRelease || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 436LL) & 0x200) != 0 )
  {
    v6 = 0;
    v7 = 0;
    qword_1C013AFD8 = (__int64)&v6;
    qword_1C013AFE8 = (__int64)&v6;
    qword_1C013B010 = (__int64)&v7;
    qword_1C013B020 = (__int64)&v7;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &unk_1C013AFC0, 0LL, 0LL);
    if ( v6 )
      *((_BYTE *)this + 76) = 0;
    if ( v7 )
      *((_BYTE *)this + 19) = 0;
  }
  *((_BYTE *)this + 20) = 1;
  return 0LL;
}

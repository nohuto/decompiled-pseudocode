/*
 * XREFs of ?_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXPEA_K@Z @ 0x1C03CB2A8
 * Callers:
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C03CACF4 (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     Feature_MipiDsi2__private_ReportDeviceUsage @ 0x1C0026CBC (Feature_MipiDsi2__private_ReportDeviceUsage.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_QueryMipiDsiCaps(
        DxgMonitor::MonitorMipiDsiState *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rbx
  __int128 v9; // xmm0

  v4 = a2;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  *a4 = 0LL;
  Feature_MipiDsi2__private_ReportDeviceUsage();
  if ( (unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    if ( (unsigned int)v4 >= 0x14 )
    {
      v9 = *(_OWORD *)((char *)this + 8);
      *a4 = 20LL;
      *(_OWORD *)a3 = v9;
      a3[4] = *((_DWORD *)this + 6);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, 20LL, v4);
      return 3221225507LL;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
}

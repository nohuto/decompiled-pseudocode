/*
 * XREFs of ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245690
 * Callers:
 *     <none>
 * Callees:
 *     Feature_VAIL_Opm_Projection__private_ReportDeviceUsage @ 0x1C002684C (Feature_VAIL_Opm_Projection__private_ReportDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpmRequest(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1) )
  {
    Feature_VAIL_Opm_Projection__private_ReportDeviceUsage();
    v3 = WdLogNewEntry5_WdError(v2, v1);
    *(_QWORD *)(v3 + 24) = 7036LL;
    WdLogEvent5_WdError(v3);
  }
  return 0;
}

/*
 * XREFs of ?_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C02FC4F4
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C015EFF0 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage @ 0x1C0025C44 (Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage.c)
 */

__int64 __fastcall DXGMONITOR::_SetActiveColorProfileName(DXGMONITOR *this, __int64 a2, void *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = *((_QWORD *)this + 4);
  if ( !v3 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
    v3 = *((_QWORD *)this + 4);
  }
  v6 = *(_QWORD *)(v3 + 8);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage();
  return 0LL;
}

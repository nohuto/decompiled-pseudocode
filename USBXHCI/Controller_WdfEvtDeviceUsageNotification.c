/*
 * XREFs of Controller_WdfEvtDeviceUsageNotification @ 0x1C00797C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLD @ 0x1C00374D0 (WPP_RECORDER_SF_qLD.c)
 */

PVOID __fastcall Controller_WdfEvtDeviceUsageNotification(__int64 a1, char a2, char a3)
{
  int v5; // edx
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  int v10; // ecx
  PVOID result; // rax

  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLD(*(_QWORD *)(v6 + 72), v5, v7, v8);
  v9 = 1 << a2;
  v10 = *(_DWORD *)(v6 + 388);
  if ( a3 )
  {
    *(_DWORD *)(v6 + 388) = v10 | v9;
    return MmLockPagableDataSection(Controller_WdfEvtDeviceAdd);
  }
  else
  {
    result = (PVOID)(v10 & (unsigned int)~v9);
    *(_DWORD *)(v6 + 388) = (_DWORD)result;
  }
  return result;
}

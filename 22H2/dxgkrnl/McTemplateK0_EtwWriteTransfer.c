/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1C0040B78
 * Callers:
 *     ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000D210 (-DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C0012304 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     DpiDxgkDdiUnload @ 0x1C0066664 (DpiDxgkDdiUnload.c)
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C022FBC0 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0314EAC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002568 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 1u, &v4);
}

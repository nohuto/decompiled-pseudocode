/*
 * XREFs of McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0040104
 * Callers:
 *     DpIndicateChildStatus @ 0x1C005D370 (DpIndicateChildStatus.c)
 *     DpiMiracastIoCompleteRoutine @ 0x1C005FE10 (DpiMiracastIoCompleteRoutine.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0176558 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C01835E0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01E22D4 (DpiDxgkDdiSetPowerState.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01E4050 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01E6A28 (DpiDxgkDdiDisplayDetectControl.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0335294 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C0362A70 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C039B048 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C039B354 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C03A461C (DpiDxgkDdiNotifyAcpiEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqtqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-39h] BYREF
  va_list v5; // [rsp+40h] [rbp-29h]
  __int64 v6; // [rsp+48h] [rbp-21h]
  va_list v7; // [rsp+50h] [rbp-19h]
  __int64 v8; // [rsp+58h] [rbp-11h]
  va_list v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  va_list v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  va_list v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  __int64 v15; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v17; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D8h] [rbp+6Fh]
  __int64 v21; // [rsp+E0h] [rbp+77h] BYREF
  va_list va3; // [rsp+E0h] [rbp+77h]
  va_list va4; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  va_copy(v13, va4);
  v12 = 4LL;
  v14 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 6u, &v4);
}

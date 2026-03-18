/*
 * XREFs of McTemplateK0j_EtwWriteTransfer @ 0x1C00525E8
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0314EAC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0384190 (-VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002568 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0j_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a4;
  v7 = 16;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 2u, &v5);
}

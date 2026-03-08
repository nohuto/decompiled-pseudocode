/*
 * XREFs of ?_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x1C03C6E94
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgMonitor::MonitorUsb4State::_OnChangePowerOnStage2(DxgMonitor::MonitorUsb4State *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // eax
  char v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 8) )
    WdLogSingleEntry0(1LL);
  v2 = *(_QWORD *)this;
  *((_BYTE *)this + 56) = 0;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 8LL))(v2, &v7);
  v4 = *((unsigned __int8 *)this + 56);
  v5 = *v3;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  DxgkLogCodePointPacket(0x7Au, v6, v4, 0, v5);
}

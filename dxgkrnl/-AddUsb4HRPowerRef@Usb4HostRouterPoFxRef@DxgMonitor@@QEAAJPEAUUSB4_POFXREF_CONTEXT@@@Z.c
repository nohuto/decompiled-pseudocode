/*
 * XREFs of ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C03C5ABC
 * Callers:
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021AB8C (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C03C5B84 (-AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRef(
        DxgMonitor::Usb4HostRouterPoFxRef *this,
        struct USB4_POFXREF_CONTEXT *a2,
        __int64 a3)
{
  bool v5; // zf
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+48h] [rbp-20h]

  if ( *((_BYTE *)this + 24) )
    WdLogSingleEntry0(1LL);
  if ( !*((_BYTE *)this + 24) )
  {
    if ( a2 )
    {
      v5 = bTracingEnabled == 0;
      *(_QWORD *)a2 = *((_QWORD *)this + 2);
      *((_DWORD *)a2 + 2) = *((_DWORD *)this + 2);
      *((_QWORD *)a2 + 2) = *(_QWORD *)this;
      if ( !v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer((__int64)this, &Dxgk_ReportPowerComponentState, a3, 1LL, 0, 1);
    }
    else
    {
      v7 = *((_QWORD *)this + 2);
      v8 = *((_DWORD *)this + 2);
      v9 = 0;
      v10 = *(_QWORD *)this;
      v11 = 0LL;
      result = DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRefFromContext((struct USB4_POFXREF_CONTEXT *)&v7);
      if ( (int)result < 0 )
        return result;
    }
    *((_BYTE *)this + 24) = 1;
  }
  return 0LL;
}

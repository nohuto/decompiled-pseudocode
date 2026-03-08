/*
 * XREFs of HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C0079620
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x1C0010C6C (HUBMUX_QueueSurpriseRemovalToAllPSMs.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBFDO_EvtDeviceSurpriseRemoval(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rcx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  v3 = (_QWORD *)(v2 + 248);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v1, &USBHUB3_ETW_EVENT_HUB_SURPRISE_REMOVAL_START, 0LL, *v3);
  HUBMUX_QueueSurpriseRemovalToAllPSMs(v2);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_HUB_SURPRISE_REMOVAL_COMPLETE, 0LL, *v3);
}

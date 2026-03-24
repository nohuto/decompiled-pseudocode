/*
 * XREFs of ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D19A8
 * Callers:
 *     DxgkNotifyMonitorDimming @ 0x1C0217F80 (DxgkNotifyMonitorDimming.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C029F900 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 * Callees:
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027EFC (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     ?DpiBrightnessNotifyMonitorDimmingForward@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D19E8 (-DpiBrightnessNotifyMonitorDimmingForward@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall DpiBrightnessNotifyMonitorDimming(struct _DEVICE_OBJECT *a1, unsigned int a2, unsigned __int8 a3)
{
  Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
  return DpiBrightnessNotifyMonitorDimmingForward(a1, a2, a3);
}

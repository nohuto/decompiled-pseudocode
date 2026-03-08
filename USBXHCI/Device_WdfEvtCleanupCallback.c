/*
 * XREFs of Device_WdfEvtCleanupCallback @ 0x1C0036B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Device_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00633D8);
  v2 = v1;
  if ( *(_QWORD *)(v1 + 96) )
    *(_QWORD *)(v1 + 96) = 0LL;
  result = imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
  v4 = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 16) = 0LL;
  if ( v4 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1648))(
               WdfDriverGlobals,
               *(_QWORD *)(v4 + 8),
               Controller_WdfEvtDeviceAdd,
               3107LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    *(_QWORD *)(v2 + 8) = 0LL;
  }
  return result;
}

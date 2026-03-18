/*
 * XREFs of Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C0034440
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C00341C0 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0079700 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0036F1C (McTemplateK0pt_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_ReleaseWdfPowerReferenceForDebugger(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( *(_BYTE *)(a1 + 600) )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void (__fastcall *)(__int64), __int64, const char *))(WdfFunctions_01023 + 3512))(
               WdfDriverGlobals,
               *(_QWORD *)a1,
               Controller_AcquireWdfPowerReferenceForDebugger,
               10560LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    *(_BYTE *)(a1 + 600) = 0;
    if ( (WPP_MAIN_CB.AlignmentRequirement & 8) != 0 )
      return McTemplateK0pt_EtwWriteTransfer(v4, v3, v5, a1, 0);
  }
  return result;
}

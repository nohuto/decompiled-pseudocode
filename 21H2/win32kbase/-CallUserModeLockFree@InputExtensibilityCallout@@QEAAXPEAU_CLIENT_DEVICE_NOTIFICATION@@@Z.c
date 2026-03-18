/*
 * XREFs of ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01DBD60
 * Callers:
 *     InvokeMouseCursorPositionCallout @ 0x1C01E7ED0 (InvokeMouseCursorPositionCallout.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01FCA40 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x1C0208578 (ApiSetEditionInputExtensibilityCallout.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeLockFree(
        InputExtensibilityCallout *this,
        struct _CLIENT_DEVICE_NOTIFICATION *a2)
{
  if ( !CInputThreadBase::IsInputThread(gpInputThread) && !CInputThreadBase::IsInputThread(gpKernelSensorThread) )
    KeBugCheck(0x164u);
  ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, a2);
}

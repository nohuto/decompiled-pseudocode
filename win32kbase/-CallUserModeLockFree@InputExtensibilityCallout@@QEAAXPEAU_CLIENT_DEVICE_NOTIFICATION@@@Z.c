/*
 * XREFs of ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C020B3C0
 * Callers:
 *     InvokeMouseCursorPositionCallout @ 0x1C0217E70 (InvokeMouseCursorPositionCallout.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C02318B8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x1C023F424 (ApiSetEditionInputExtensibilityCallout.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeLockFree(
        InputExtensibilityCallout *this,
        struct _CLIENT_DEVICE_NOTIFICATION *a2)
{
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)
    && !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    KeBugCheck(0x164u);
  }
  ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, a2);
}

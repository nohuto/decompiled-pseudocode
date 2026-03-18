/*
 * XREFs of ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C01F79BC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int8 __fastcall CMouseProcessor::CButtonEvent::GetVKey(CMouseProcessor::CButtonEvent *this)
{
  if ( !*((_QWORD *)this + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7390);
  return *(_BYTE *)(*((_QWORD *)this + 5) + 12LL);
}

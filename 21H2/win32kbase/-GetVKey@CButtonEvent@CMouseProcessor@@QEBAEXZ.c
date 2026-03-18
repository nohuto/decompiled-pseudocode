/*
 * XREFs of ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C0041D6C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int8 __fastcall CMouseProcessor::CButtonEvent::GetVKey(
        CMouseProcessor::CButtonEvent *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this + 5);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v3 = *((_QWORD *)this + 5);
  }
  return *(_BYTE *)(v3 + 12);
}

/*
 * XREFs of ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C022D0D4
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C04C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C022E28C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetButtonMessage(CMouseProcessor::CButtonEvent *this)
{
  unsigned int *v1; // rdx
  int v4; // ecx

  v1 = (unsigned int *)*((_QWORD *)this + 5);
  if ( !v1 )
    return 0LL;
  v4 = *((_DWORD *)this + 8);
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7354);
    return *(unsigned int *)(*((_QWORD *)this + 5) + 8LL);
  }
  else if ( v4 == 1 )
  {
    return *v1;
  }
  else
  {
    return v1[1];
  }
}

/*
 * XREFs of ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0041B3C
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C0040DAC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0042514 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetButtonMessage(
        CMouseProcessor::CButtonEvent *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v3; // rdx
  __int64 v5; // rcx

  v3 = (unsigned int *)*((_QWORD *)this + 5);
  if ( !v3 )
    return 0LL;
  v5 = *((unsigned int *)this + 8);
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    if ( (_DWORD)v5 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, a3);
      v3 = (unsigned int *)*((_QWORD *)this + 5);
    }
    return v3[2];
  }
  else if ( (_DWORD)v5 == 1 )
  {
    return *v3;
  }
  else
  {
    return v3[1];
  }
}

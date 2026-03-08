/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C00713AC
 * Callers:
 *     PostPendingMouseMove @ 0x1C0071380 (PostPendingMouseMove.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C04C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0071488 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  int v4; // eax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  int v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]

  if ( (*((_DWORD *)a2 + 99) & 0x20) != 0 )
  {
    if ( qword_1C02D7280 && (unsigned int)qword_1C02D7280() )
    {
      v4 = *((_DWORD *)a2 + 50);
      v7 = *((_QWORD *)a2 + 24);
      v8 = v4;
    }
    else
    {
      v8 = 18;
      v7 = *((_QWORD *)gpsi + 620);
    }
    v5 = v7;
    v6 = v8;
    CMouseProcessor::PostMouseMoveToQ(this, a2, (const struct tagLOGICALPOINT *)&v5);
    if ( (*((_DWORD *)a2 + 99) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1640LL);
  }
}

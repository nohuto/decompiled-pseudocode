/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C003C8FC
 * Callers:
 *     PostPendingMouseMove @ 0x1C003C8D0 (PostPendingMouseMove.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C0040DAC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C003CA14 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]

  if ( (*((_DWORD *)a2 + 97) & 0x20) != 0 )
  {
    if ( qword_1C029CA48 && (unsigned int)qword_1C029CA48() )
    {
      v4 = *((_DWORD *)a2 + 48);
      v10 = *((_QWORD *)a2 + 23);
      v11 = v4;
    }
    else
    {
      v11 = 18;
      v10 = *((_QWORD *)gpsi + 620);
    }
    v8 = v10;
    v9 = v11;
    CMouseProcessor::PostMouseMoveToQ(this, a2, (const struct tagLOGICALPOINT *)&v8);
    if ( (*((_DWORD *)a2 + 97) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  }
}

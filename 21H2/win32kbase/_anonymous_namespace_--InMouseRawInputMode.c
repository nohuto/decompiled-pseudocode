/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x1C00419A8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C00415CC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     IsSpatialDelegationEnabledForThread @ 0x1C0041A70 (IsSpatialDelegationEnabledForThread.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, __int64 a2, int a3)
{
  __int64 PtiFromInputDest; // rax
  char v5; // bl
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v11; // zf

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a1, a2);
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( PtiFromInputDest && !(unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
  {
    if ( !a3 )
    {
      if ( !qword_1C029BD50 || !(unsigned int)qword_1C029BD50(v6) )
        return v5;
      v11 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 832LL) + 100LL) & 0x100) == 0;
      goto LABEL_12;
    }
    if ( a3 == 1 )
    {
      if ( !qword_1C029BD50 || !(unsigned int)qword_1C029BD50(v6) )
        return v5;
      v11 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 832LL) + 100LL) & 2) == 0;
LABEL_12:
      if ( !v11 )
        return 1;
      return v5;
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  }
  return 0;
}

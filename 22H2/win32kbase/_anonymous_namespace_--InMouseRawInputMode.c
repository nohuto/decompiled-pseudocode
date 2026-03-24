/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x1C00491D4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0040034 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0049068 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C16DC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00457FC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C00492B0 (IsSpatialDelegationEnabledForThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, int a2, int a3)
{
  __int64 PtiFromInputDest; // rax
  char v5; // bl
  __int64 v6; // rsi
  int v7; // eax
  int v9; // eax
  bool v10; // zf

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a1, a2);
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( PtiFromInputDest && !(unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
  {
    if ( !a3 )
    {
      if ( qword_1C0256000 )
        v9 = qword_1C0256000(v6);
      else
        v9 = 0;
      if ( !v9 )
        return v5;
      v10 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 832LL) + 100LL) & 0x100) == 0;
      goto LABEL_14;
    }
    if ( a3 == 1 )
    {
      if ( qword_1C0256000 )
        v7 = qword_1C0256000(v6);
      else
        v7 = 0;
      if ( !v7 )
        return v5;
      v10 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 832LL) + 100LL) & 2) == 0;
LABEL_14:
      if ( !v10 )
        return 1;
      return v5;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 381LL);
  }
  return 0;
}

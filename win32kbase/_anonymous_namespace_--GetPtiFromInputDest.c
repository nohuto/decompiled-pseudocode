/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0007574
 * Callers:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00074E4 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C022D974 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C022DAB8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C022DC78 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0230DF0 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0231A3C (_anonymous_namespace_--ValidateUIPI.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 Queue; // rcx
  __int64 v6; // rax

  v2 = 0LL;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      if ( *(_DWORD *)(a1 + 92) == 2 )
      {
        v6 = *(_QWORD *)(a1 + 80);
        if ( v6 )
          return *(_QWORD *)(v6 + 16);
      }
    }
  }
  else
  {
    if ( a1 )
      Queue = CInputDest::GetQueue(a1, 0LL);
    else
      Queue = gpqForeground;
    if ( Queue )
    {
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 188LL);
          return v2;
        }
        v6 = *(_QWORD *)(Queue + 112);
        if ( v6 )
          return *(_QWORD *)(v6 + 16);
      }
      return *(_QWORD *)(Queue + 96);
    }
  }
  return v2;
}

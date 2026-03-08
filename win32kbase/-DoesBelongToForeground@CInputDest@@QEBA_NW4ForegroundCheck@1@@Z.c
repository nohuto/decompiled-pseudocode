/*
 * XREFs of ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C007ECBC
 * Callers:
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C007EC74 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01FFA04 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0231734 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C01E3988 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C023E358 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

bool __fastcall CInputDest::DoesBelongToForeground(__int64 a1, int a2)
{
  char v3; // bl
  __int64 v5; // rcx
  __int64 CompositionInputWindowUIOwner; // rax

  if ( !gpqForeground )
    return 0;
  v3 = 1;
  if ( a2 != 1 || !CInputDest::IsIndependentInputWindow((CInputDest *)a1) )
    return CInputDest::GetQueue(a1, 2) == gpqForeground;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v5 = *(_QWORD *)(a1 + 80);
  else
    v5 = 0LL;
  CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(v5);
  if ( !CompositionInputWindowUIOwner
    || gpqForeground != *(_QWORD *)(*(_QWORD *)(CompositionInputWindowUIOwner + 16) + 432LL) )
  {
    return 0;
  }
  return v3;
}

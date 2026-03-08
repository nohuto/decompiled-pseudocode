/*
 * XREFs of ?DXGADAPTER_ValidateMockDriverState@@YAXPEAVDXGADAPTER@@W4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C0047F00
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C0052ED4 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z.c)
 */

__int64 __fastcall DXGADAPTER_ValidateMockDriverState(__int64 a1)
{
  return MOCKDRIVERSTATE::ValidateMockDriverState(*(_QWORD *)(a1 + 4728));
}

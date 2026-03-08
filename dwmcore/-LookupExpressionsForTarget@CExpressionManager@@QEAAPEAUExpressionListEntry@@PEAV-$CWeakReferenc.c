/*
 * XREFs of ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180213A08
 * Callers:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1802139BC (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV-$CWe.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180233C0C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180099564 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CExpressionManager::LookupExpressionsForTarget(__int64 a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v4 = a2;
  v5 = a3;
  result = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
             (struct _RTL_GENERIC_TABLE *)(a1 + 328),
             &v4);
  if ( result )
    return (_QWORD *)result[2];
  return result;
}

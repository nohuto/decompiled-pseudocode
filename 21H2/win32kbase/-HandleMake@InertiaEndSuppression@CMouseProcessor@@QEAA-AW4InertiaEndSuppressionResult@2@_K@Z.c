/*
 * XREFs of ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01FAB28
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E15B0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::InertiaEndSuppression::HandleMake(_BYTE *a1, unsigned __int64 a2)
{
  if ( !CInertiaManager::QueryInertia((__int64)&qword_1C029A5D0, *(_QWORD *)&gptCursorAsync, 15) && a2 > qword_1C029A5D0 )
    return 1LL;
  *a1 = 1;
  return 0LL;
}

/*
 * XREFs of ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C022E058
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C0210B80 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::InertiaEndSuppression::HandleMake(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx

  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !CInertiaManager::QueryInertia(v6 + 16904, *(_QWORD *)&gptCursorAsync, 15) && a2 > *(_QWORD *)(v6 + 16904) )
    return 1LL;
  *a1 = 1;
  return 0LL;
}

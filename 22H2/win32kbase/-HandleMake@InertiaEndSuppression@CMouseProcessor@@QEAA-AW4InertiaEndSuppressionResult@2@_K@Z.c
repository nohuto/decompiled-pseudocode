/*
 * XREFs of ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01C0514
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004300 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01A8F40 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::InertiaEndSuppression::HandleMake(_BYTE *a1, unsigned __int64 a2)
{
  struct CInertiaManager *Instance; // rbx

  Instance = CInertiaManager::GetInstance();
  if ( !CInertiaManager::QueryInertia((__int64)Instance, *(_QWORD *)&gptCursorAsync, 15) && a2 > *(_QWORD *)Instance )
    return 1LL;
  *a1 = 1;
  return 0LL;
}

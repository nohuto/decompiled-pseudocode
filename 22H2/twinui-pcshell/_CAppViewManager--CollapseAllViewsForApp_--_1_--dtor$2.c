/*
 * XREFs of _CAppViewManager::CollapseAllViewsForApp_::_1_::dtor$2 @ 0x1801D862D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::CollapseAllViewsForApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 88));
}

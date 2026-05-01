/*
 * XREFs of _CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor$1 @ 0x1801D7FD9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 88));
}

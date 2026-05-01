/*
 * XREFs of _CApplicationManager::GetForegroundApplication_::_1_::dtor$0 @ 0x1801BB689
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetForegroundApplication_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 48));
}

/*
 * XREFs of _UwpAppStateManager::TerminateApp_::_1_::dtor$2 @ 0x1800DB445
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpAppStateManager::TerminateApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(a2 + 32);
}

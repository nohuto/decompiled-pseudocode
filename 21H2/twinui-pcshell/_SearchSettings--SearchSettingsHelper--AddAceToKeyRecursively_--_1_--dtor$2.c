/*
 * XREFs of _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$2 @ 0x1800A21F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(a2 + 184);
}

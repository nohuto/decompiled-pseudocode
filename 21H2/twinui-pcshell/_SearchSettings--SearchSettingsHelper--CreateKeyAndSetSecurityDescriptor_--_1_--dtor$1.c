/*
 * XREFs of _SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptor_::_1_::dtor$1 @ 0x1800A2CD2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptor_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(a2 + 216);
}

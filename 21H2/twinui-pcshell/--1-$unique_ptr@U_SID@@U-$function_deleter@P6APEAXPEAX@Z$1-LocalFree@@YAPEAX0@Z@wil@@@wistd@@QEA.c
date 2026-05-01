/*
 * XREFs of ??1?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800A1534
 * Callers:
 *     _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$2 @ 0x1800A21F1 (_SearchSettings--SearchSettingsHelper--AddAceToKeyRecursively_--_1_--dtor$2.c)
 *     _SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptor_::_1_::dtor$1 @ 0x1800A2CD2 (_SearchSettings--SearchSettingsHelper--CreateKeyAndSetSecurityDescriptor_--_1_--dtor$1.c)
 *     _SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively_::_1_::dtor$0 @ 0x1800A2E72 (_SearchSettings--SearchSettingsHelper--CreateKeyAndSetSecurityDescriptorRecursively_--_1_--dtor$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(
        __int64 a1)
{
  return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(a1, 0LL);
}

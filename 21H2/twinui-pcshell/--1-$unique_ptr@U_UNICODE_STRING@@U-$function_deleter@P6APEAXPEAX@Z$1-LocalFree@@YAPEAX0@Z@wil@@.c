/*
 * XREFs of ??1?$unique_ptr@U_UNICODE_STRING@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1804CF1BC
 * Callers:
 *     _TryGetProcessCommandLine_::_1_::dtor$1 @ 0x1804CF760 (_TryGetProcessCommandLine_--_1_--dtor$1.c)
 *     _TryGetCertSubjectName_::_1_::dtor$2 @ 0x1804CFF3A (_TryGetCertSubjectName_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wistd::unique_ptr<_UNICODE_STRING,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_UNICODE_STRING,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(
        HLOCAL *a1)
{
  HLOCAL result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return LocalFree(result);
  return result;
}

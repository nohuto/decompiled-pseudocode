/*
 * XREFs of _GetPinnablePidl_::_1_::dtor$1 @ 0x180139FBC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1802D9B90 (--1-$unique_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 */

__int64 __fastcall GetPinnablePidl_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(*(_QWORD *)(a2 + 80));
  }
  return result;
}

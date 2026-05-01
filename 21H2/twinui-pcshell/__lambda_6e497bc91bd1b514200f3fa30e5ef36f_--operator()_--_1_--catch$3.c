/*
 * XREFs of __lambda_6e497bc91bd1b514200f3fa30e5ef36f_::operator()_::_1_::catch$3 @ 0x180136C71
 * Callers:
 *     <none>
 * Callees:
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x18035E914 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

__int64 __fastcall _lambda_6e497bc91bd1b514200f3fa30e5ef36f_::operator()_::_1_::catch_3(__int64 a1, __int64 a2)
{
  const void *v3; // rax

  v3 = (const void *)std::current_exception(a2 + 32);
  __ExceptionPtrAssign(**(void ***)(a2 + 64), v3);
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return 0LL;
}

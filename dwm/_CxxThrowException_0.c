/*
 * XREFs of _CxxThrowException_0 @ 0x1400063B4
 * Callers:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x140006174 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x14000619C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}

/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ_0 @ 0x18011F5EC
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     sub_18011F5AC @ 0x18011F5AC (sub_18011F5AC.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_18011F5AC(pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}

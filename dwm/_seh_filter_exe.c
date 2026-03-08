/*
 * XREFs of _seh_filter_exe @ 0x140006318
 * Callers:
 *     __scrt_common_main_seh @ 0x140005350 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _o__seh_filter_exe(ExceptionNum, ExceptionPtr);
}

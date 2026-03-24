/*
 * XREFs of CleanupIAMAccess @ 0x1C01FBC8C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall CleanupIAMAccess(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0256178;
  if ( qword_1C0256178 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0256178(a1);
  return result;
}

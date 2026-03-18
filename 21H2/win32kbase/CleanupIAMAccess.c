/*
 * XREFs of CleanupIAMAccess @ 0x1C023DBD8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall CleanupIAMAccess(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C029BEB8;
  if ( qword_1C029BEB8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C029BEB8(a1);
  return result;
}

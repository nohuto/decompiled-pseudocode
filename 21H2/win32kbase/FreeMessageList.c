/*
 * XREFs of FreeMessageList @ 0x1C00AD8EC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C029BE88;
  if ( qword_1C029BE88 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C029BE88(a1);
  return result;
}

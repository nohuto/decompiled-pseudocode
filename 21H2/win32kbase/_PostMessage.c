/*
 * XREFs of _PostMessage @ 0x1C023E52C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PostMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  result = qword_1C029C078;
  if ( qword_1C029C078 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C029C078(a1, a2, a3, a4);
  return result;
}

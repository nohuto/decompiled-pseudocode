/*
 * XREFs of _PostMessage @ 0x1C02721A4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PostMessage(__int64 a1, __int64 a2))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  result = qword_1C02D6910;
  if ( qword_1C02D6910 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C02D6910(a1, a2, 0LL, 0LL);
  return result;
}

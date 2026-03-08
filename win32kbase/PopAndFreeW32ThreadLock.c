/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00B9C70
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PopAndFreeW32ThreadLock(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D66C0;
  if ( qword_1C02D66C0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D66C0(a1);
  return result;
}

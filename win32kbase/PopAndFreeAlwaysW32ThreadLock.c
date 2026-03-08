/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C00A8740
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C01788A0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D66D0;
  if ( qword_1C02D66D0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D66D0(a1);
  return result;
}

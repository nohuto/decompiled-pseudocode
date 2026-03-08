/*
 * XREFs of _GetTopLevelWindow @ 0x1C00D40B8
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C0175DB0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GetTopLevelWindow(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D7028;
  if ( qword_1C02D7028 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D7028(a1);
  return result;
}

/*
 * XREFs of HasHidTable @ 0x1C0271E70
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall HasHidTable(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D6608;
  if ( qword_1C02D6608 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D6608(a1);
  return result;
}

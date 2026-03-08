/*
 * XREFs of FreeProfileUserName @ 0x1C00CBA00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeProfileUserName(__int64 a1, __int64 a2))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( a1 )
  {
    result = qword_1C02D66D0;
    if ( qword_1C02D66D0 )
      return (__int64 (__fastcall *)(_QWORD))qword_1C02D66D0(a2);
  }
  return result;
}
